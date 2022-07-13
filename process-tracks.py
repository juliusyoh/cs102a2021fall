import pandas
from pylynx.earth.geodessy import geo_point_factory
import csv
import math
import glob
import argparse

#CSVfile format ShipID, Lat, Lon, Speed, Direction, Time
#Use a column width of 15 in the csv to see all the data clearly

Sum_of_total_distance = 0
constant_Altitude = 0
rownumber = 0
Radius_of_Earth = 6378000
SumofCoordinateArea = 0

parser = argparse.ArgumentParser(description = "Takes input directory and outputs compiled csv data")
parser.add_argument('--input_dir', help = 'Input directory')
parser.add_argument("--output_file",  help = "Output filename")

args = parser.parse_args()
input_path = args.input_dir

filenames = glob.glob(args.input_dir + "/*.csv")

fields = ['Ship ID', 'Distance_Travelled_m', "Reported_Min_Speed_m_per_sec", "Calculated_Min_Speed_m_per_sec", "Reported_Max_Speed_m_per_sec", "Calculated_Max_Speed_m_per_sec", "Reported_Average_Speed_m_per_sec", "Calculated_Average_Speed_m_per_sec", "Total_Points", "Start_Time", "End_Time", "Duration_of_Trip_sec", "Area_of_lat_lon_bounding_region_m^2" ]

with open(args.output_file, 'w') as file:
    thedatawriter = csv.writer(file, lineterminator = '\n')
    thedatawriter.writerow(fields)
    file.close

for file in filenames:
    df = pandas.read_csv(file, parse_dates=['time'])
    df["Distance"] = 0.000
    df["Time Of Interval"] = 0.000
    #Iterative loop for summation of distances:
    for rownumber in range(len(df.index) - 1):
        pt1 = geo_point_factory.from_lla_decimal(df.iat[rownumber,1], df.iat[rownumber,2], constant_Altitude)
        pt2 = geo_point_factory.from_lla_decimal(df.iat[rownumber + 1, 1], df.iat[rownumber + 1, 2], constant_Altitude)

        #Get distance between the two points:
        distance = pt1.get_ground_range(pt2).get_meters()
        Sum_of_total_distance = Sum_of_total_distance + distance
        df.iat[rownumber, 6] = distance

        #time1/time2 individual time intervals
        time1 = df.iat[rownumber, 5]
        time2 = df.iat[rownumber + 1, 5]
        difference_between_times = time2 - time1
        df.iat[rownumber,7] = difference_between_times.total_seconds()

        #Finding Sum of Areas Between Coordinates - Instead, smaller rectangular boxes are used to reduce risk of IDL, polar, and large area errors
        point_lat_1 = df.iat[rownumber, 1] 
        point_lat_1_rad = math.radians(point_lat_1)
        point_lon_1 = df.iat[rownumber, 2]
        point_lat_2 = df.iat[rownumber + 1, 1]
        point_lat_2_rad = math.radians(point_lat_2)
        point_lon_2 = df.iat[rownumber + 1, 2]
        AreaOfRectangle = (math.pi/180) * (Radius_of_Earth * Radius_of_Earth) * abs(math.sin(point_lat_1_rad) - math.sin(point_lat_2_rad)) * abs(point_lon_2 - point_lon_1)
        SumofCoordinateArea = SumofCoordinateArea + AreaOfRectangle
        rownumber += 1

    #Total Points on Path:
    TotalPoints = len(df.index) - 1

    #Finding ShipID
    ShipID = df.iat[0,0]
    
    #Start/Endtime and date:
    startTime = df.iat[0,5]
    endTime = df.iat[len(df.index) - 1,5]

    #Parsing the Date and Time for duration:
    t1 = (startTime)
    t2 = (endTime)
 
    Duration_Of_Trip = (t2 - t1).total_seconds()


    #Finding Reported Statistics - Speed 
    max_speed = df.iloc[:,3].max()
    min_speed = df.iloc[:,3].min()
    average_speed = df.iloc[:,3].mean()

    #Creating the calculated speed column (m/s):
    df["Calculated Speed"] = df["Distance"]/df["Time Of Interval"]
    maxcalculated_speed = df["Calculated Speed"].max()
    mincalculated_speed = df["Calculated Speed"].min()
    averagecalculated_speed = df["Calculated Speed"].mean()

    #Writing out CSV File:
    statscsv = [ShipID,
                Sum_of_total_distance,    
                min_speed,
                mincalculated_speed,
                max_speed,
                maxcalculated_speed,
                average_speed,
                averagecalculated_speed,
                TotalPoints,
                str(startTime),
                str(endTime),
                str(Duration_Of_Trip),
                SumofCoordinateArea]

    #Writing the data onto a new csv sheet. Note: all sheets should be placed within sample folder first.
    #The new data will be in the ais_processing folder.
    with open(args.output_file, 'a') as file:
        thedatawriter = csv.writer(file, lineterminator = '\n')
        thedatawriter.writerow(statscsv)
        file.close

    



    

        
        
      
        
        


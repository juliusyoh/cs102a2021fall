#!/usr/bin/python

#Julius Yoh
#CS102Fall2021
#Homework 8 - chart.py
#October 25, 2021


import cgi
import cgitb
cgitb.enable()

print ( "Content-type: text/html\n\n" )

print ("""<html>
<head>
<script src="chart.js" type"text/javascript"></script>
<link rel="stylesheet" href = "chart.css" type = "text/css" />
<title>Homework8</title>
</head>
<body>
<h1 onClick = "toggle()"> <br>
Julius Yoh  <br>
CS102 Fall 2021 <br>
Homework 8 - chart.py - Final Version <br> 
October 25, 2021  <br>
______________________________________<br>
<table id = "testme" class"visble">
""" )

#This establishes the header above with the name and date

x = -100
ysum = 0
yprime = 0
yint = 0

form = cgi.FieldStorage()
a = int(form["A"].value)
b = int(form["B"].value)
c = int(form["C"].value)

#MAKE A B C VALUES INTO THE EQUATIONS
print ("<tr><th>x</th> <th>y</th> <th>dy</th> <th>ysum</th> <tr>")
# y value function
def f(x):
        return (a * x * x) - (b * x * x) + c * x
# y prime function
def fprime(x):
        return (f(x) - (f(x-5)))/5
# y int function
def fint(x):
        return((((a * x * x * x) - (b * x * x) + c * x) + ((a * (x-5)*(x-5)*(x-5)) - (b * (x-5)*(x-5)) + c * (x-5)))/2)*5 

#This establishes the functions

if "A" in form:
        while x < 101:
                y = f(x)
                yprime = fprime(x)
                yint = fint(x)
                ysum = ysum + yint
                if x%2 == 1:
                        print ("""<tr class = "a"><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td>"""% (x,y,yprime,ysum))
                if x%2 == 0:
                        print ("""<tr class = "b"><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td>"""% (x,y,yprime,ysum))
                x = x + 5



print ("""
</table>
</body>
</html>
""")


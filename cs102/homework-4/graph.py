#tkinter stuff that makes the GUI
import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width = 400, height = 600 )
c.pack()

# y value function
def f(x):
    return (6 * x * x * x) - (3 * x * x) + 10 * x
# y prime function
def fprime(x):
    return (f(x) - (f(x-5)))/5
# y double prime function
def fdoubleprime(x):
    return (fprime(x) - fprime(x-5))/5
# y int function
def fint(x):
    return ((((6 * x * x * x) - (3 * x * x) + 10*x) + ((6*(x-5)*(x-5)*(x-5)) - (3*(x-5)*(x-5)) + 10*(x-5)))/2)*5



# creating the coordinate plane
c.create_line (0, 300, 400, 300)
c.create_line (200, 0, 200, 600)

xscale = 222
yscale = 8999
ysum = 0
yscaleint = 22222

for x in range (-100, 100):
    y = f(x)
    c.create_rectangle ((-x*2.5 + 200) , ((y/yscale) + 200) + 100 , (-x*2.5  + 1 + 200), ((y/yscale) + 1 + 200) + 100, outline = "blue")
    yprime = fprime(x)
    c.create_rectangle (x * 1.9 + 200, -yprime/655  + 300 , x * 1.9 + 200 + 1, -yprime/655 + 300+ 1, outline = "green")
    ydoubleprime = fdoubleprime(x)
    c.create_rectangle (x/.55 * 2.5 + 365, -ydoubleprime/5 , x/.55* 2.5 + 1 + 365, -ydoubleprime/5 + 1, outline = "magenta")
    yint = fint(x)
    ysum = ysum + yint
    c.create_rectangle (x * 2.4 +200,-ysum/1421278, x  * 2.4 + 200 + 1, -ysum/1421278 + 1, outline = "red")
    print(ysum)
    
    
tk.mainloop()

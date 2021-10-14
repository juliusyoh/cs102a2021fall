#!/usr/bin/python
print( "Content-type: text/html\n\n" )

print( """
<html>
<head>
<title>Homework7</title>
</head>
<body>
<table>
""" )

print("<h1>Julius Yoh</h1>")
print("<h1>CS102 Fall 2021</h1>")
print("<h1>Homework 7 - Matrix.c - Final Version</h1>")
print("<h1>October 13, 2021</h1>")




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

x = -100
ysum = 0
print("<tr><th>x</th> <th>y</th> <th>dy</th> <th>ysum</th> <tr>")
while(x < 100):
    y = f(x)
    yprime = fprime(x)
    yint = fint(x)
    ysum = ysum + yint
    print("<tr><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td></tr>" % (x,y,yprime,ysum))
    x = x + 5

print( """
</table>
</body>
</html>
""" )



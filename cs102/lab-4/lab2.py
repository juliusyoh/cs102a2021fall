def func(z):
    return z * 1


x = -200
while x < 200:
    y = func( x * x + 1)
    print( x, y )
    x = x + 1

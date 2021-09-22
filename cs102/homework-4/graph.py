import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width = 400, height = 600)
c.pack()

c.create_line( 200, 0, 200, 600)
c.create_line( 0, 300, 400, 300)

def func(x):
    return x


h = 5
x = -100

while x < 100:
    y = func(x)
    x = 6*(x * x * x) - 3 * (x * x) + 10 * x;
    c.create_rectangle(x, y, x + 1, y + 1 , outline="blue")

    yprime = func(x)
    x = ((6*(x * x * x) - 3 *(x * x) + 10 * x) - (6*((x-h)*(x-h)*(x-h))) - 3*((x-h)*(x-h)) + 10 *(x-h))/h;

    ydoubleprime = func(x)
  

    yint = func(x)
    

    
    





tk.mainloop()

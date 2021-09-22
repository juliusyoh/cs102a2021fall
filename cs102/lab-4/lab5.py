import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width = 400, height = 600)
c.pack()


c.create_line( 200, 0, 200, 600)
c.create_line( 0, 300, 400, 300)


def func(x):
    return x*x * 1

x = -200
while x < 200:
    y = func(x)
    x = x + 1
    c.create_rectangle(x ,y/4200 * 66.6 , x + 1 , y/4200 * 66.6 + 1)



tk.mainloop()

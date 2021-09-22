import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width = 400, height = 600)
c.pack()


def func(x):
    return x * 1

x = -200
while x < 200:
    y = func( x * x + 1)
    x = x + 1
    c.create_rectangle(x ,y, x + 1 , y + 1)



tk.mainloop()

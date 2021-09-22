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
    c.create_rectangle(-x + 200 ,-y/4200 * 66.6 + 300, -x + 1 + 200 , -y/4200 * 66.6 + 1 + 300)



tk.mainloop()

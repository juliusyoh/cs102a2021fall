#!/usr/bin/python

# Julius Yoh
# Novemeber 17, 2021
# CS102 Fall 2021
# Professor Cusack
# pong.py

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
  def __init__( this, *args, **kwargs ):
    Canvas.__init__( this, *args, **kwargs )
    this.ball = this.makeBall(  50,  50 )
    this.rectangle = this.makeRectangle(225,475) 
    this.bind("<KeyPress>", this.keyWasPressed)
    this.focus_set()
    this.ball_velocity_x = 1/2
    this.ball_velocity_y = 1/2
    #This part is the constructor and this happens once!

  def makeBall( this, x, y, color="blue" ):
    return this.create_oval( x, y, x+5, y+5, fill=color )

  def makeRectangle( this, x, y, color = "red"):
    return this.create_rectangle(x, y, x + 50, y + 10, fill=color)
  
  def eachFrame(this ):
    sx, sy, ex, ey = this.coords( this.ball)
    lx, ly, wx, wy = this.coords( this.rectangle)
    #print(sx, sy, ex, ey)
    if sx <= 0 or ex >= 500:
      this.ball_velocity_x = this.ball_velocity_x * -1
    if sy <= 0 or ey >= 500:
      this.ball_velocity_y = this.ball_velocity_y * -1
    if ey >= 500:
      raise(Exception("YOU LOSE!"))
    if ex >= lx and sx <= wx and ey >= ly:
      this.ball_velocity_y = this.ball_velocity_y * -1
    this.move( this.ball, this.ball_velocity_x, this.ball_velocity_y)
    
  def keyWasPressed(this, event = None ):
    sx, sy, ex, ey = this.coords( this.rectangle)
    key = event.keysym
    print( "just pressed: ", key)
    if key == "Left":
      if sx >= 25:
        this.move( this.rectangle, -25, 0)
      
    if key== "Right":
      if ex <= 475:
        this.move( this.rectangle, 25, 0)
# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
# And that INCLUDES making all the balls, by definition
canvas.pack()

while( True ):
  canvas.eachFrame()
  root.update()

#!/usr/bin/python

# Julius Yoh
# December 8, 2021
# CS102 Fall 2021
# Professor Cusack
# breakout.py

from intersect import *
from tkinter import *
root = Tk()
class MyCanvas(Canvas):
  def __init__( this, *args, **kwargs ):
    Canvas.__init__( this, *args, **kwargs )
    this.ball = this.makeBall(  350,  250 )
    this.rectangle = this.makeRectangle(225,475) 
    this.bind("<KeyPress>", this.keyWasPressed)
    this.focus_set()
    this.ball_velocity_x = 1.5
    this.ball_velocity_y = 1.5
    this.bind( "<Motion>", this.mouseHasMoved )
    y = 100
    x = 0
    for y in range (0, 200, 20):
        for x in range (0, 500, 50):
            this.makeBlock(x, y)
            
        
    #this.makeBlock( 180, y)
    #this.makeBlock( 320, y)
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
      raise(Exception("GAME OVER!"))
    if ex >= lx and sx <= wx and ey >= ly:
      this.ball_velocity_y = this.ball_velocity_y * -1
    allblocks = this.find_withtag( "block" )
    for block in allblocks:
       ax, ay, bx, by = this.coords(block)
       x = hits (ax, ay, bx, by, sx, sy, ex, ey,)
       if 'N' in x or 'S' in x:
           this.ball_velocity_y = -abs(this.ball_velocity_y)
       if 'S' in x:
           this.ball_velocity_y = abs(this.ball_velocity_y)
       if 'E' in x :
           this.ball_velocity_x = -abs(this.ball_velocity_x) 
       if 'W' in x:
           this.ball_velocity_x = abs(this.ball_velocity_x)
       if 'N' in x or 'E' in x or 'W' in x or 'S' in x:
           this.delete(block)
    if len(allblocks) == 0:
        raise(Exception("YOU WIN!"))
    this.move( this.ball, this.ball_velocity_x, this.ball_velocity_y)

       #print(x)
       
        
    
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

  def mouseHasMoved( this, event):
      sx, sy, ex, ey = this.coords( this.rectangle)
      #print( event.x, event.y )
      this.move(this.rectangle, event.x - (sx + ex)/2,0)

  def makeBlock( this, x, y, color = "orange"):
      return this.create_rectangle(x, y, x + 50, y + 10, fill=color, tags = "block")
  
        
        
# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
# And that INCLUDES making all the balls, by definition
canvas.pack()

while( True ):
  canvas.eachFrame()
  root.update()

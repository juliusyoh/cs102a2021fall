def intersect (x1, y1, x2, y2, x3, y3, x4, y4):
    try:
        ua = ((x4-x3)*(y1-y3)-(y4-y3)*(x1-x3))/((y4-y3)*(x2-x1)-(x4-x3)*(y2-y1))
        x = x1 + ua*(x2-x1)
        y = y1 + ua*(y2-y1)
        if between( x, x1, x2 ) and between(x, x3, x4 ) and between( y, y1, y2 ) and between(y, y3, y4 ):
            return ( x, y)
        else:
            return None
    except:
        return None

def edges( sx, sy, ex, ey ):
    return ( ( sx, sy, ex, sy), (ex, sy, ex, ey), (ex, ey, sx, ey), (sx, ey, sx, sy) )

def hits(sx1, sy1, ex1, ey1, sx2, sy2, ex2, ey2):
    box1 = edges( sx1, sy1, ex1, ey1) 
    box2 = edges(sx2, sy2, ex2, ey2)
    list1 =[]
    if intersectAny(box1[0], box2):
        list1.append( 'N')
    if intersectAny(box1[1], box2):
        list1.append('E')
    if intersectAny(box1[2], box2):
        list1.append('S')
    if intersectAny(box1[3], box2):
        list1.append('W')
    return list1
    #USEbox1[0] for north edge
    #Usebox1[1] for 
             
def between( n, first, second ):
    if first <= n <= second:
        return True
    if second <= n <= first:
        return True
    else:
        return False

def intersectAny( oneline, listoflines ):
    #print (oneline)
    for line in listoflines:
        if intersect(*oneline, *line) != None:
            return True
    return False
    
if __name__ == '__main__':
    box1 = (1.5, 1, 9, 10)
    box2 = ( 0, 0, .5, .5 )
    box3 = ( 0, 0,  5,  5 )
    box4 = ( 0, 0, 11,  2 )
    box5 = ( 0, 0, 11, 11 )
    box6 = ( 3, 3,  4,  4 )
    box7 = ( 4, 0,  5,  5 )
    hits( *(box1+box2) )
    print( hits( *(box1+box2) ) )
    print( hits( *(box1+box3) ) )
    print( hits( *(box1+box4) ) )
    print( hits( *(box1+box5) ) )
    print( hits( *(box1+box6) ) )
    print( hits( *(box1+box7) ) )

    
  
    
    

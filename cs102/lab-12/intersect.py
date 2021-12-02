def intersect (x1, y1, x2, y2, x3, y3, x4, y4):
    ua = ((x4-x3)*(y1-y3)-(y4-y3)*(x1-x3))/((y4-y3)*(x2-x1)-(x4-x3)*(y2-y1))
    x = x1 + ua*(x2-x1)
    y = y1 + ua*(y2-y1)
    t1 = (x,y)
    return t1

    
if __name__ == '__main__':
    print( intersect( -1, 2, 1, -1, 1, 1, -2, -1 ) )
    print( intersect( -1, 2, 1, -1, 1, 1,  3,  4 ) )
    print( intersect(  1, 1, 2,  2, 1, 1,  2,  2 ) )
    print( intersect(  1, 1, 2,  2, 2, 1,  3,  2 ) )
        

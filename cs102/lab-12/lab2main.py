from lab2func import *
t1 = ( 1, 2 )
t2 = ( "a", "b" )


takes_four_arguments( *t1 , *t2)

t3 = t1 + t2
takes_four_arguments( *t3)

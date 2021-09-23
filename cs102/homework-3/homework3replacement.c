#include <stdio.h>
int main (int argc, char **argv )

{
int x = -100;
int y = 0; 
int yprime = 0; 
int yint = 0;
int ysum = 0; 
fprintf( stdout, "x;y;yprime;ysum\n" );
while (x <= 100)
{
y = (6 * x * x * x) - (3 * x * x) + 10*x;
yprime = ((((6 * x * x * x) - (3 * x * x) + 10*x) - ((6*(x-5)*(x-5)*(x-5)) - (3*(x-5)*(x-5)) + 10*(x-5)))/5);
yint = ((((6 * x * x * x) - (3 * x * x) + 10*x) + ((6*(x-5)*(x-5)*(x-5)) - (3*(x-5)*(x-5)) + 10*(x-5)))/2)*5;
ysum = ysum + yint;
fprintf( stdout, "%d;%d;%d;%d\n", x, y, yprime, ysum );  
x = x + 5;
}

return 0; 
}

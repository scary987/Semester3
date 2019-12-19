#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

/** Bearbeitender Student
	
	Etienne Rickert, 219202845 **/
void punkt(int i, char abc)
{
    for(;i;--i) putchar(' ');
    printf("%c",abc);
}

void kombination(double a, double b)
 {
    if( (int) a > (int) b) 
	{
        punkt(b, 'x');
        punkt(a-b, '+');
    } else if( (int) b > (int) a)
	{
        punkt(a, '+');
        punkt(b-a, 'x');
    } else {
        punkt(a, '*');
    }
    printf("\n");
}

int main() {
    double x;

    for(x = -180.0; x <= 180.0; x += 15.0)
	{
        double kurve1 = 10+10*sin(x/180*M_PI);
        double kurve2 = 10+10*cos(x/180*M_PI);
        
        kombination(kurve1, kurve2);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>
int contained(double x, double a, double b)
{
	if(((x <= a)&&(x >= b))||((x >= a)&&(x <= b))) return 1;
	else return 0;
}

int line(double x, double y, double px, double py, double qx, double qy)
{
	double a, b, c, d;

	if (contained(x, px, qx) == 0 || contained(y, py, qy) == 0)
	{
		return 0;
	}

	a = qy - py;
	b = -qx + px;
	c = -px * (qy - py) + py * (qx - px);

	d = fabs(a * x + b * y + c) / sqrt(a * a + b * b);

	if (d < 0.5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int rectangle(double x, double y, double lx, double uy, double rx, double oy)
{
	if (line(x, y, lx, oy, lx, uy) == 1) return 1;
	if (line(x, y, lx, oy, rx, oy) == 1) return 1;
 	if (line(x, y, lx, uy, rx, uy) == 1) return 1;
	if (line(x, y, rx, oy, rx, uy) == 1) return 1;

	return 0;
}

int main()
{ int y , x ;
	for ( y = 24; y >= 0; y--)
	{
		for ( x = 0; x < 31; x++)
		{
			if (line(x, y, 0, 15, 5, 20))
				putchar('*');
			else if (line(x, y, 6, 20, 25, 20))
				putchar('*');
			else if (line(x, y, 25, 20, 30, 15))
				putchar('*');
			else if (rectangle(x, y, 9, 20, 13, 24))
				putchar('*');
			else if (rectangle(x, y, 0, 0, 30, 15))
				putchar('*');
			else if (rectangle(x, y, 3, 5, 9, 12))
				putchar('*');
			else if (rectangle(x, y, 12, 0, 18, 10))
				putchar('*');
			else if (rectangle(x, y, 21, 5, 27, 12))
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}
 return 0;
}

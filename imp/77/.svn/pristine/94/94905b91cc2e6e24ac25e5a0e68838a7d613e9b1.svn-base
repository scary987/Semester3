/* Sebastian Kaddatz (219203768)    Dennis Stehle (219203998)*/

#include <stdio.h>						

int contained(double x, double a, double b)
{
	if (a < x && b > x)
	{
		return 1;
	}
	else if (a > x && b < x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int line(double x, double y, double px, double py, double qx, double qy)
{
	double erg, gpq, gxy;
	
	gpq = (py - qy) + (qx - px);
	gxy = ((py - qy) * x) + ((qx - px) * y);
	erg = (gxy/gpq);
	
	if (erg <= 0.5)
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
	double erg, erg1, erg2, erg3, guo, guo1, gxy, gxy1, gxy2, gxy3, grl, grl1;
	
	guo = (uy - oy) + (lx - lx);
	gxy = ((uy - oy) * x) + ((lx - lx) * y);
	erg = (gxy/guo);
	guo1 = (uy - oy) + (rx - rx);
	gxy1 = ((uy - oy) * x) + ((rx - rx) * y);
	erg1 = (gxy1/guo1);
	grl = (oy - oy) + (rx - lx);
	gxy2 = ((oy - oy) * x) + ((rx - lx) * y);
	erg2 = (gxy2/grl);
	grl1 = (uy - uy) + (rx - lx);
	gxy3 = ((uy - uy) * x) + ((rx - lx) * y);
	erg3 = (gxy3/grl1);
	
	if (erg <= 0.5 || erg1 <= 0.5 || erg2 <= 0.5 || erg3 <= 0.5)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
	
}

int main()
{
	return 0;
}

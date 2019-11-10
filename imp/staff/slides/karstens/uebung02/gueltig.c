#include <stdio.h>

int a;
int ggg= 40;
double d;
int _Dies_ist_EIN_langer_Variablenname = 2;
int _4Dies_3ist_3EIN_6langer_13Variablenname = 4;

main()
{
	int Ggg = 41;
	int GGg = 42;
	float f;
	double d;
	ggg = 40; a = 27;
	{
	    int a = 4;
	    double d1 = 12.4;
	    f = 12.4f;
	    d = d1;
	    printf("a=%d, ggg=%d, Ggg=%d, GGg=%d\n",a, ggg, Ggg, GGg);
	}
	printf(" Lange Variable =%d\n",_Dies_ist_EIN_langer_Variablenname);
	printf(" Lange Variable =%d\n",_4Dies_3ist_3EIN_6langer_13Variablenname);
	printf(" f=%f, und d=%f\n",f,d);
}

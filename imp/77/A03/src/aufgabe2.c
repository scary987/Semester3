/* Sebastian Kaddatz (219203768)    Dennis Stehle (219203998)*/

#include <stdio.h>
#include <math.h>
#define PI 3.141593


int main()
{
	double x;
	int indent, indent2, v, v1;
	
	for(x=-180.0; x<=180.0;x+=15.0)
	{
		v = 10 + 10*cos(x/180.0*PI);
		v1 = 10 + 10*sin(x/180.0*PI);
		indent = v1;
		indent2 = v;
		
		
		
		if (indent > indent2)
		{
			for(;indent2;--indent2) putchar(' ');
			printf("x");
			for(;indent - v -1;--indent) putchar(' ');
			printf("+\n");
		
		}
		else if (indent < indent2)
		{
			for(;indent;--indent) putchar(' ');
			printf("+");
			for(;indent2- v1 - 1;--indent2) putchar(' ');
			printf("x\n");
		}
		else 
		{
			if(x < 0)		/* Kosmetik für das Ergebnis*/
			{
				for(;indent2 +1;--indent2) putchar(' ');
				printf("*\n");
			}
			else 
			{
				for(;indent2 -1;--indent2) putchar(' ');
				printf("*\n");
			}
		}
		
	}
	return 0;
}

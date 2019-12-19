#include <stdio.h>
#include <math.h> /* for sin(x) */



void star(int sindent, char chr)
{
	for(;sindent>0;--sindent)
	{
		putchar(' ');
	}

	printf("%c",chr);
}


void starfin(int sindent, char chr)
{
	for(;sindent>0;--sindent)
	{
		putchar(' ');
	}

	printf("%c\n",chr);
}



int main() {

double x;
int sindent, cosdent;

for(x=-180.0;x<=180.0;x+=15.0)
{

	/* compute value */

	cosdent = 10 + 10 * cos(x/180.0*3.14);
	sindent = 10 + 10 * sin(x/180.0*3.14);

	/* plot star at position */

	if (cosdent < sindent)
	{
		star(cosdent,'x');
		starfin(sindent - cosdent, '+');
	}
	else if( cosdent == sindent )
	{
		starfin(cosdent, '*');
	}
	else
	{
		star(sindent,'+');
		starfin(cosdent - sindent, 'x');
	}
}

	return 0;

}

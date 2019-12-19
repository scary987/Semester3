#include <stdio.h>
#include <math.h>
/* Mohamad Algoabra, Matrikelnummer : 219204154
 Bashar Almukdad, Matrikelnummer : 219204329
 Bakhadyr Saimbetov, Matrikelnummer: 219204800
 Mostafa Ahmed Adlan, Matrikelnummer: 219204887*/
void kurve ( int ident ,char c )
{
		for (;ident ; -- ident) putchar (' ');

		printf("%c",c);
}


int main () {
	double x;
	int s,c ;
	double p = 3.14159265359 ;
	for ( x = -180.0 ; x<= 180.0 ; x+=15.0)
	{
		s = 10 + 10*sin(x/180*p);
		c = 10 + 10*cos(x/180*p);


	if ( s == c )
		kurve (s,'*');

	else{
		if ( s < c )
		{
	  	kurve ( s , '+');
	  	kurve (c - s ,'x');
	  }

	else
	{
		kurve ( c , 'x');
		kurve ( s - c ,'+');
	}
	}
	printf("\n");

	}

return 0; }

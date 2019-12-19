#include <stdio.h>


int contained(double x, double a, double b)
{
	if ( (x >= a && x <= b )|| (x <= a && x >= b))
		return 1;

	else
		return 0;
}


double abso(double wert)
{
	(wert < 0) ? wert = -wert :  wert;
	return wert;
}


double distance(double x, double y, double px, double py, double qx, double qy)
{
	return (py - qy) * x + (qx - px) * y - (qx * py - px * qy);
}


int line(double x, double y, double px, double py, double qx, double qy)
{
	if (abso(distance(x,y,px,py,qx,qy))< 0.5)
	{
		return 1;
	}

	else
		return 0;
}


int rectangle(double x, double y, double lx, double uy, double rx, double oy)
{
	if ((line(x,y,lx,uy,lx,oy)) || (line(x,y,lx,uy,rx,uy)) || (line(x,y,lx,oy,rx,oy)) || (line(x,y,rx,uy,rx,oy)) )
	{
		return 1;
	}

	else
		return 0;
}


void star(int end)
{
	if(end<31)
	{
		printf("*");
	}

	else
		printf("*\n");
}


void space(int end)
{
	if(end<31)
	{
		printf(" ");
	}

	else
		printf(" \n");
}


int shouldidraw(int x, int y)
{
	if(rectangle(x,y,1,10,5,14) && contained(y,10,14) && (x <= 5))
		return 1;

	if(line(x,y,5,6,5,26) && contained(y, 6, 26))
		return 1;

	if((line(x,y,5,26,10,31) || line(x,y,10,1,5,6)) && ((5 <= x) && (x <= 10)))
		return 1;

	if((rectangle(x,y,10,1,25,31)) && (x >= 10))
		return 1;

	if((rectangle(x,y,13,4,20,10) || rectangle(x,y,13,22,20,28)) && ((13 <= x) && x <= 20) && (contained(y,4,10) || contained(y,22,28)))
		return 1;

	if((rectangle(x,y,15,13,25,20)) && (x >= 15) && contained(y,13,20))
		return 1;

	else
		return 0;
}





int main()
{

	double a , b , w;
	int x , y ;
	int m;

	printf("\n");
	printf("Kleines Grafikprogramm nach Aufgabe 03\n");
	printf("--------------------------------------\n");
	printf("\n");

	printf("[ANGEBOTENE MODI]                              [MODUSNUMMER]\n");
	printf("\n");
	printf("Ausgabe der Grafik (Haus)                            1      \n");
	printf("Liegt eine Zahl im Intervall [a,b]?                  2      \n");
	printf("Beide Aktionen starten                               3      \n");
	printf("\n");

	printf("Zu startender Modus: ");
	scanf("%d", &m);

	if (m == 1 || m == 3)
	{
		printf("\n");
		printf("[GRAFIKAUSGABE]\n");
		printf("\n");

		for(x=1; x<26 ; x++)
		{
			for(y=1;y < 32; y++)
			{
				if(shouldidraw(x,y))
				{
					star(y);
				}

				else
					space(y);
			}
		}

	}

	if (m == 2 || m == 3)
	{

		printf("\n");
		printf("[INTERVALLTEST]\n");
		printf("\n");

		printf("Bitte Grenze A eingeben: ");
		scanf("%lf",&a);

		printf("Bitte Grenze B eingeben: ");
		scanf("%lf",&b);

		printf("Bitte X eingeben: ");
		scanf("%lf",&w);

		printf("\n");

		printf("Der Wert %.1f liegt %s im Intervall [%.1f , %.1f].",w, contained(w,a,b) ? "" : "nicht" , a , b);

	}

	printf("\n \n");
	printf("Das Programm endet hier.\n");

	return 0;
}

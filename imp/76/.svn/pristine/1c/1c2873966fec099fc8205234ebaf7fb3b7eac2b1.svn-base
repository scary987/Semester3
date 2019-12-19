#include <stdio.h>

/** Bearbeitender Student:

	John-Patric Palent, 219203122 **/
	
/** Zu graphic: Falsche, bzw. nicht sinnvolle Eingabe des Nutzers
	ist in der Switch abgesichert. Fuer die Funktionen wird
	angenommen, dass vom Nutzer nur sinnvolle Eingaben gemacht werden. **/

/** Aufgabe a: Test auf Intervall 
	Eingabe aus Main wird in Contained angewandt.
	Test durch If-Schleifen funktioniert. 
	
	q als Return-Variable der Funktion **/
	
int contained(double x, double a, double b)
{
	int q;
	
		if (a < x && x < b)
		{
			q = 1;
		}
		else if ( a > x && x > b)
			{
				q = 1;
			}
			else
			{
				q = 0;
			}
		
	return q;
}

/** Aufgabe b: Test auf Abstand zweier Punkte
	Koordinaten der Punkte werden an Line uebergeben.
	Bedingungen: q = 1, wenn d < 0.5 
                 sonst q = 0
	
	Ansatz 1: Gleichung zwischen Punkten aufstellen und Abstand berechnen
	Ansatz 2: Problem als Ebene betrachten und darüber lösen 
	
	Aus der Zweipunkteform

	Aus der Zweipunkteform einer Gerade durch die beiden Punkte
	( x1 , y1 ) (x2,y2) erhält man durch Ausmultiplizieren die
	Parameter der Koordinatenform

    a = y 1 − y 2
	b = x 2 − x 1
	c = x 2 y 1 − x 1 y 2 **/

int line(double x, double y, double px, double py, double qx, double qy)
{
	int q;
	double d;
	/**d als Abstand **/
	
	d = x * (py - qy) + y * (qx - px) + (qx * py - px * qy);
	
	if(d < 0.5)
	{
		q = 1;
	}
	else
	{
		q = 0;
	}
	
	return q;
}

/** Aufgabe c: Test auf Seiten eines Rechtecks
	Koordinaten des Punktes sowie der entspr. Ecken
	werden an Rectangle uebergeben.
	Bedingungen: q = 1, wenn d1 < 0.5 || d2 < 0.5 || d3 < 0.5 || d4 < 0.5
	             sonst q = 0**/

int rectangle(double x, double y, double lx, double uy, double rx, double oy)
{
	int q;
	
	double d1, d2, d3, d4;
	
	/** Aufstellen der beiden fehlenden Ecken
		A (lx, uy)
		B (rx, uy)
		C (rx, oy)
		D (lx, oy)	**/

	/** Seite 1 -> Zwischen A und B **/
	d1 = x * (uy - uy) + y * (rx - lx) + (rx * uy - lx * uy);
	
	/** Seite 2 -> Zwischen B und C **/
	
	d2 = x * (uy - oy) + y * (rx - rx) + (rx * uy - rx * oy);
	
	/** Seite 3 -> Zwischen C und D **/
	
	d3 = x * (oy - oy) + y * (lx - rx) + (lx * oy - rx * oy);
	
	/** Seite 4 -> Zwischen D und A **/
	
	d4 = x * (oy - uy) + y * (lx - lx) + (lx * oy - lx * uy);
	
	/** If-Schleife zur Kontrolle des Abstandes **/
	
	if(d1 < 0.5 || d2 < 0.5 || d3 < 0.5 || d4 < 0.5)
	{
		q = 1;
	}
	else
	{
		q = 0;
	}
	
	return q;
}

/** Aufgabe d: Zeichnen eines Hauses (unter Einbeziehnung von line() und rectangle()) **/
void house()
{
	int laenge_x, laenge_y;
	int n, z; /** z ist x, n ist y **/
	/** double q; **/
	laenge_x = 35;
	laenge_y = 31;
	

	for (z = 0; z < laenge_y; z++)
	{
		for(n=0; n < laenge_x; n++)
		{
				/** Schornstein **/
				if(n > 8 && n < 12 && z == 0)
				{
					printf("*");
				}
				else if (z < 4)
					{
						printf(" ");
					}
				if((n == 8 && z < 4) || (n == 11 && z < 4))
				{
					printf("*");
				}
				/** Oberkante-Dach **/
				if(z == 4 && n < 5)
				{
					printf(" ");
				}
				else if((z == 4 && n == 4) || (z == 4 && n < 25))
					{
						printf("*");
					}
				
				/** Schraegen-Dach **/
				
				/** ZEILE 1 **/
				if ((z == 5 && n < 4) || (z == 5 && n > 4 && n < 25))
				{
					printf(" ");
				}
				else if((z == 5 && n == 4) || (z == 5 && n == 25))
					{
						printf("*");
					}
					
				/** ZEILE 2 **/
				if ((z == 6 && n < 3) || (z == 6 && n > 3 && n < 26))
				{
					printf(" ");
				}
				else if((z == 6 && n == 3) || (z == 6 && n == 26))
					{
						printf("*");
					}
					
				/** ZEILE 3 **/	
				if ((z == 7 && n < 2) || (z == 7 && n > 2 && n < 27))
				{
					printf(" ");
				}
				else if((z == 7 && n == 2) || (z == 7 && n == 27))
					{
						printf("*");
					}
					
				/** ZEILE 4 **/	
				if ((z == 8 && n < 1) || (z == 8 && n > 1 && n < 28))
				{
					printf(" ");
				}
				else if((z == 8 && n == 1) || (z == 8 && n == 28))
					{
						printf("*");
					}
					
				/** Unterkante Dach **/
				if ((z == 9 && n == 0) || (z == 9 && n <= 27))
				{
					printf("*");
				}
				if ((z >= 9 && z <= 23 && n == 0) || (z >= 9 && z <= 23 && n == 29))
				{
					printf("*");
				}
				else if ((z >= 10 && z < 23 && n >= 0 && z != 12) || (z >= 10 && z < 23 && n <= 30 && z != 12))
				{
					printf(" ");
				}
				/** Fenster **/
				if(z==12 && n < 2)
				{
					printf(" ");
				}
				else if ((z == 12 && n == 3) || (z == 12 && n < 9))
					{
						printf("*");
					}
					/**else if ((z == 12 && n > 9) || (z == 12 && n <= 15))
						{
							printf("~");
						}**/
						else if((z == 12 && n > 3) || (z == 12 && n <= 20))
							{
								/** printf(""); **/
							}
				
				/** Unterkante Haus **/
				if ((z == 23 && n == 0) || (z == 23 && n <= 27))
				{
					printf("*");
				}
		}
		
		printf("\n");
	}
}

int main()
{
	int fall; /** Als Case-Variable der Switch **/
	int u, v, w; /** Return-Variablen für Aufgaben **/
	double x, y, a, b; /** Variablen für den Intervall-Test **/
	double px, py, qx, qy; /** Variablen für die Koordinaten der Punkte [Line]**/
	double hx, hy, ix, iy; /** Variablen für die Koordinaten des Punktes / der Ecken [rectangle]**/
	
	printf("Welche Funktion moechten Sie benutzen?\n \n");
	printf(" 1 fuer contained\n 2 fuer line\n 3 fuer rectangle\n 4 fuer house\n");
	printf("\n Andere Eingaben beenden das Programm. \n");
	
	scanf("%d", &fall);
	
	/** Einbettung der Funktionsaufrufe in eine Switch fuer bessere Handhabung **/
	
	switch(fall)
	{
		case 1:
		/** Einlesen der Werte für die Intervall-Funktion **/
		printf("Geben Sie eine Testzahl und ein Test-Intervall ein.\n");
		scanf("%lf %lf %lf", &x, &a, &b);
		
		u = contained( x, a, b );
		printf("Ist im Intervall enthalten: %d\n", u);
		
		break;
		
		case 2:
		/** Folgende Variablen als Basis für line-Variablen
			D als Platzhalter für Koordinaten von Punkt **/
		printf("Geben sie drei Punkte ein (In der Form x y, x y, x y)\n");
		scanf("%lf %lf, %lf %lf, %lf %lf", &x, &y, &px, &py, &qx, &qy);
	
		v = line(x, y, px, py, qx, qy);
		printf("Abstand zur Geraden kleiner als 0.5: %d\n", v);
		
		break;
		
		case 3:
		/** Folgende Variablen als Basis für rectangle-Variablen **/
		printf("Geben Sie einen Test-Punkt sowie zwei Ecken des Rechtecks an.\n Eingabe in der Form: x y, x y, x y \n Achtung: Ecken -> Erst links unten, dann rechts oben!\n");
		scanf("%lf %lf, %lf %lf, %lf %lf", &x, &y, &hx, &hy, &ix, &iy);
		
		w = rectangle(x, y, hx, hy, ix, iy);
		printf("Abstand zu einer Seite kleiner als 0.5: %d\n", w);
		
		break;
		
		case 4:
		/** Folgendes als Aufruf für die Funktion house
			Da house eine festgelegte Groeße (siehe Folie)
			hat, ist eine Eingabe unnötig. **/
			
			printf("\n"); /** Leerzeile aus aesthetischen Gruenden **/
			
			house();
			
		/** Die Funktionen line() und rectangle() wurden in house()
			nicht verwendet. Es ließe sich mithilfe dieser Funktionen
			definitv umsetzen, doch mir fehlt leider der zuendende Funke. **/
		break;
		
		default: /** Falls Eingabe des Nutzers != Vorgabe [1 - 4] **/
		
		return 0; /** return, damit main() auch bei falscher Eingabe terminiert **/
	}
			
	return 0;
}
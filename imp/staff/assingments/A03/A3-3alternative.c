#include <stdio.h>
#include <math.h>

/* moegliche Alternative Loesung */


/* 3 Punkte  
	1 Punkt Vergleich richtig , wenn a < b , 
	1 Punkt fuer korrekte Beandlung a > b 1, 
	1 Punkt Rueckgabewert korrekt */
int contained(double x, double a, double b){
/* liefert  1, falls x im geschlossenen Intervall [a,b] liegt, sonst 0 */
	double h;
	/* hier wenn a > b dann tauschen von a und b  oder zweiter Vergleich if(x >= b && x <= a) return 1; else return 0; tauschen */
    if(a > b ) {
		h = a;
		a = b;
		b = h;
	}
	/* Test funktioniert fuer so fuer a <= b */
	if( x >= a && x <= b)
		return 1;
	else 
		return 0;
}

/* 5 Punkte  
	2 Punkte P liegt auf Gerade (Bestimmung von Parameter ab, b, c, d der Koordinatenform der Geradengleichung
        1 Punkt Normierung des Abstandes um sinnvolles d zu haben
        2 Punkte fuer Test der Koordinaten innerhalb (nutzung von a), um Begrenzung auf Strecke erreichen 
*/
int line(double x, double y, double px, double py, double qx, double qy){
	/* liefert  1, falls der Abstand des Punktes zur Strecke PQ kleiner als 0.5, sonst 0 
	Koordinatenform der Geradengleichung ay + bx = c  
		 a = py - qy;
		 b = qx - px;
		 c = qx*py - px*qy;
		 d = ay + bx - c
         da Abstand d <.05 ist dann noch Normierung bezueglich des Normalenvektors(a,b) notwendig */
	double a, b, c, fx, l;
	a = py - qy;
	b = qx - px;
	l = sqrt(a*a+b*b); /* Laenge zur Normierung */
	a = a/l;
	b = b/l;
	c = b*py + a*px;
	fx = a*x + b*y - c;
	fx = sqrt(fx*fx);
	/* Abstand kleiner als 0.5 und im Klipprechteck von den Punkten P und Q */
    if((fx<0.5)&&contained(x,px,qx)&&contained(y,py,qy)) 
		return 1; else return 0;

}
/* Auch Loesung ohne line ist moeglich, Problem dort Abstand von 0.5 pruefen, hier einfach Abschneiden auf int-Grenzen 
int rectangle1(double x, double y, double lx, double ly, double rx, double ry){
	// liefert  1, falls der Abstand des Punktes und einer der 4 Seiten kleiner als 0.5  ???
	// Hier x oder y stimmt mit Zeile oder Spalte ueberein und anderer Wert im Intervall der anderen Koordinate 
	if((( x == lx )||( x == rx))&&(contained(y, ly, ry)) ||((( y == ly) || (y == ry))&&(contained(x, lx, rx)))) 
		return 1; else return 0;
}
*/

/* 5 Punkte  
	 je 1 Punkt Vergleich richtig fuer jede Seite des Rechtecks,  
	 1 Punkt Rueckgabewert ( Verbindung der Ergebnisse mit or oder geschachtelten ifs korrekt 
*/
int rectangle(double x, double y, double lx, double ly, double rx, double ry){
	/* liefert  1, falls der Abstand des Punktes und einer der 4 Seiten kleiner als 0.5  ???*/
	/* Hier x oder y stimmt mit Zeile oder Spalte ueberein und anderer Wert im Intervall der anderen Koordinate */
	return (line(x,y, lx, ly, lx, ry)||line(x,y, rx, ly, rx, ry)||line(x,y, lx, ly, rx, ly)||line(x,y, lx, ry, rx, ry)); 
}

/* 15 Punkte  Bild zeichnen - Bildaufbau hier 9 Punkte in Funktion imBild oder imBild1 spaeter in main  Ausgabe 6 Punkte 
    Bildaufbau: fuer jede halbwegs plausible Position eines Rechtecks 1 Punkte = 5 Punkte
	fuer jede der 3 Anschlusskanten des Dachs je 1 Punkt = 3 Punkte
	1 Punkte fuer sinnvolle Verknuepfung der Funktionen 
*/

int imBild(double x, double y){
	/* Koordinatenursprung links unten */
	if (rectangle(x, y, 0, 0, 30, 15) || rectangle(x, y, 3, 5, 9, 12) || 
			rectangle(x, y, 12, 0, 18, 10) || rectangle(x, y, 21, 5, 27, 12) || rectangle(x, y, 9, 20, 14, 24)|| line(x, y, 0 ,15, 5, 20)
			||line(x,y, 25, 20, 30, 15)||line(x,y, 6,20, 25,20))
			return 1; else return 0;
}
int imBild1(double x, double y){
	/* Koordinatenursprung links unten */
	if (rectangle(x, y, 0, 0, 30, 15)) return 1;/* Haus */ 
		else if (rectangle(x, y, 3, 5, 3, 12)) return 1;  /* Fenster */ 
		   else if (rectangle(x, y, 12, 0, 18, 10)) return 1; /* Tuer */ 
		      else if (rectangle(x, y, 21, 5, 27, 12)) return 1; /* Fenster */ 
		          else if (rectangle(x, y, 9, 20, 14, 24)) return 1; /* Schornstein */ 
		             else if  (line(x, y, 0 ,15, 5, 20)) return 1; /* Dachschraege */
		               else if (line(x,y, 25, 20, 30, 15)) return 1; /* Dachschraege */
					      else if (line(x,y, 6, 20, 25, 20)) return 1; /* Dachfirst */
					   else return 0;
}


/*Ausgabe des Bildes  6 Punkte
 		1 Punkt Schleife in y Zeilen des Bildes
   		1 Punkt Schleife in x Spalten des Bildes
   		1 Punkt beachte Ausgabe der Koordinaten von oben nach unten
   		1 Punkt Ausgabe bei 1 * 
   		1 Punkt Ausgabe bei 0 Leerzeichen
   		1 Punkt Ausgabe Zeilenvorschub fuer naechste Zeile 
*/
int main() {
int i, j;	
	/* Ausgabe zeilenweise, deshalb Ausgabe von oben nach unten */
	for(i=35; i>=0;i--) {
	     for(j=0; j<=35;j++) {
			 if( imBild(j, i)) printf("*"); else printf(" ");
		 }
		 printf("\n");
	}
	return(0);
}

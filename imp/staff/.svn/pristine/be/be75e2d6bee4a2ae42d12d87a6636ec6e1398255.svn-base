#include <stdio.h>
#include <math.h>
/* originale Musterloesung Prof Kirste  mit Kommentaren versehen von b. Karstens*/

/* 3 Punkte  
	1 Punkt Vergleich richtig , wenn a < b , 
	1 Punkt fuer korrekte Beandlung a > b 1, 
	1 Punkt Rueckgabewert korrekt */
int contained(double x, double a, double b) {
  return a < b ? (x >= a && x <= b) :  (x >= b && x <= a);
}

/* 8 Punkte  
	4 Punkte P liegt auf Gerade (Bestimmung von Parameter a, b, c, d der Koordinatenform der Geradengleichung
        2 Punkt Normierung des Abstandes um sinnvolles d zu haben
        2 Punkte fuer Test der Koordinaten innerhalb (nutzung von a), um Begrenzung auf Strecke erreichen  */
int line(double x, double y, double px, double py, double qx, double qy) {
  double nx, ny, l, a, b, c, d;

  nx = py - qy;
  ny = qx - px;
  l  = sqrt(nx*nx + ny*ny);
  a  = nx / l;
  b  = ny / l;
  c  = -(a*px + b*py);
  d  = a*x + b*y + c;

  return sqrt(d*d) < 0.5 && contained(x,px,qx) && contained(y,py,qy);
}


/* 5 Punkte  
	 je 1 Punkt Vergleich richtig fuer jede Seite des Rechtecks,  
	1 Pungt Rueckgabewert ( verbindung der Ergebnisse mit or oder geschachtelten ifs korrekt */
int rectangle(double x, double y, double lx, double uy, double rx, double oy) {
  return line(x,y,lx,uy,lx,oy)
    ||   line(x,y,rx,uy,rx,oy)
    ||   line(x,y,lx,uy,rx,uy)
    ||   line(x,y,lx,oy,rx,oy)
    ;
}

/* 15 Punkte  Bild zeichnen - Bildaufbau hier 9 Punkte -Ausgabe spaeter noch 6 Punkte
    fuer jede halbwegs plausible Position eines Rechtecks 1 Punkte = 5 Punkte
	fuer jede der 2 Anschlusskanten je 1 Punkt = 3 Punkte
	1 Punkte fuer sinnvolle Verknuepfung der Funktionen */
int figure(double x, double y) {
  return rectangle(x,y,5,0,35,15) /* body of house */
    ||   rectangle(x,y,17,0,23,10) /* door */
    ||   rectangle(x,y,8,5,14,12)  /* left window */
    ||   rectangle(x,y,26,5,32,12)  /* left window */
    ||   line(x,y,5,15,10,20)  /* roof left */
    ||   line(x,y,35,15,30,20) /* roof right */
    ||   line(x,y,10,20,30,20) /* roof top */
    ||   rectangle(x,y,14,20,18,24); /* chimney */
}


int main() {
  double xx;
  double yy;
/* hier Ausgabe des Bildes  restliche 6 Punkte
   1 Punkt Schleife in y
   1 Punkt Schleife in x
   1 Punkt beachte Ausgabe der Koordinaten von oben nach unten
   1 Punkt Ausgabe bei 1 * 
   1 Punkt Ausgabe bei 0 Leerzeichen
   1 Punkt Ausgabe Zeilenvorschub fuer naechste Zeile */
  for(yy=24;yy>=0;yy-=1) {
    for(xx=0;xx<=40;xx+=1)
      putchar(figure(xx,yy)?'*':' ');
    putchar('\n');
  }
  return 0;
}

#include <stdio.h>
#include <math.h>

#define PI 3.141528
/* Eigentlich sollen sie den Algorithmus aus dem Struktogramm aus Blatt 1 implementieren */
/* 2 Punkte sollten fuer die Uebereinstimmung vergeben werden, wobei es zulaessig ist, hier eine geandertes Struktogramm zu verwenden,
wenn es mit angegeben wird 

Die Schwierigkeit fuer die Studienerenden ist die mangelde Kenntnis von Taylorreihen und der Umgang mit der Fakultaetsberechnung.
Bei der 13-Fakutaet erfolgt bei int der Ueberlauf, der durch Verwendung von double durch fehlende Nachkommastellung auch nur unzureichend kompensiert wird.
Die Summenformel also genau so umzusetzen, wie sie beschrieben ist mit einem grossen n, liefert falsche Ergebnisse, ist aber formal eine richtige Losung.
Korrekte Loesungen kommen durch die Betrachtung der Aenderung des Reihengliedes von Schrit n zu n+1, woraus folgt re_neu =rg_alt * (-1) *x*x/(2n*(2n+1))  */
)
int main(void) {
  double x; /* originale Eingabe */
  double x2; /* gleicher Winkel zwischen -180 und 180 Grad oder -pi und pi zu besseren Konvergenz */
  double rg; /* aktuelles Reihenglied */
  double sinx = 0;
  int n2 = 0;
  printf("x Angabe in Grad? "); /* laut Aufgabe nicht klar, ob Winkel in Bogenmass eingegeben wird oder in Gradmass, hier Annahme Grad */
  scanf("%lg",&x); /* Vorgabe aus Aufgabenblatt */
  x2 = x;
  /* Diese Optimierung kann nicht gefordert werden, Sinus ist periodische Funktion, daher im Umgebung Ursprung bessere Konvergenz */
  while(x2>180) /* Bessere Konvergenz im Intervall -180 bis +180 bei zu grossen Winkel */
	  x2=x2-360;
  while(x2>180) /* Bessere Konvergenz im Intervall -180 bis +180 bei zu kleinen (negativen) Winkeln */
	  x2=x2+360;
  x2 = x2 *2*M_PI/360;/* Umwandlung in Bogenmass */
  
  /* Ab hier Berechnung des Sinus aus einem Winkel in Bogenmass */
  rg = x2; /* Startwert - erste Reihenglied oder bei sinx schon ersten Reihenglied als Startwert 1 Punkt */
  x2 = -x2*x2; /* Bildung von - x hoch 2 */
  //printf("rg=%lf\n", rg);
 while((rg>0.00001)||(rg<-0.00001)){ /* Solange nicht Genauigkeit erreicht, berechne neue Werte, kann auch für grosse n formuliert werden 2 Punkte*/
    sinx = sinx + rg; /* 2 Punkte Aktualisierung der Reihensumme */
    n2 = n2 + 2; /* Aktualisierung fuer Fakultaetsberechnung */
    rg = rg * (x2 / (n2 * (n2+1))); /* Aktualisierung Reihenglied - Unterschied -x^2/(2n*2n-1) 2 Punkte aktualisierung Reihenglied */
  }
  /* Ausgabe des Wertes 1 Punkt, der Vergleich zur Sinus-Funktion ist nur zur opitischen Kontrolle*/
 printf("mysin_degree(%lg) = %lg  zum Vergleich die sin-Funktions aus Bibliothek, sin(%lg) = %lg\n", x,sinx,x,sin(x*2*M_PI/360));



/* Hier Alternativen */
 
  
/* Hier die Berechnung, wenn Nutzer nur Bogenmass eingeben */	 
  printf("x Bogenmass? ");
  scanf("%lg",&x);
  x2 = x;
  n2 = 0;
  sinx =0;
  while(x2>M_PI) /* Bessere Konvergenz im Intervall -PI bis +PI */
	  x2=x2-2*M_PI;
  while(x2<-M_PI) /* Bessere Konvergenz im Intervall -PI bis +PI */
	  x2=x2+2*M_PI;
 
  rg = x2; /* Startwert - erste Reihenglied */
  x2 = -x2*x2; /* Bildung von - x hoch 2 */
 while((rg>0.00001)||(rg<-0.00001)){ /* Solange nicht Genauigkeit erreicht, berechne neue Werte */
    sinx = sinx + rg;
    n2 = n2 + 2; /* Aktualisierung fuer Fakultaetsberechnung */
    rg = rg * (x2 / (n2 * (n2+1))); /* Aktualisierung Reihenglied - Unterschied -x^2/(2n*2n-1) */
  }
  printf("mysin_radians(%lg) = %lg zum Vergleich die sin-Bibliothek  sin(%lg) = %lg\n",
	 x,sinx,x,sin(x)); 
	
	
	
	
	 /* Naive fehlerhafte Berechnung durch formale Umsetzung Summenformel, das koennen die Studierenden aber noch nicht wissen, da Taylorreihen und deren Konvergenz unbekannt
	 formal ist die folgende Umsetzung der Reihenentwicklung richtig ( auch die Punkte für richtig vergeben), liefert nur falsche Ergebnisse */
  printf("x Bogenmass? ");
  scanf("%lg",&x); /* Eingabe x */
  int i, j, n, minus1;
  double xn, fakn=1; 
  sinx = x;
  n = 100; /* grosses n - gewaehlt */
	for(i=1;i < n ; i++){
		/* Berechnung x hoch n  und 2n +1- Fakultaet */
		xn = x;
		fakn = 1;
		minus1;
		for(j = 1; j < i ; j++) {
			xn = xn*x;
			fakn = fakn *2*n*(2*n+1);
			minus1=minus1*(-1);
		}
		sinx = sinx +minus1*xn/fakn;
	}
 
  printf("mysin_naiv(%lg) = %lg (sehr ungenau, da Fakultaetsberechnung ungenau )\n", x,sinx);
	 
	 
  return 0;
}
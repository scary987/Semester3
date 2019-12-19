#include <stdio.h>



/* Was das Programm macht:
Das Programm wandelt eine im Dezimalsystem angegebene Zahl X zu einer anderen Basis (W) um,
wenn W groesser gleich 2 (3 Punkte).
Die Stellen werden dabei in korrekter Reihenfolge ausgegeben (höherwertig zu niederwertig) (3 Punkte).
X ist die Ausgangszahl, W ist die Zielbasis (1 Punkt).
*/

/* Wie macht das Programm das - Kommentare im Quelltext */

main() {
  int w, x, y, z;
  /* Einlesen der der Zielbasis X (1 Punkt) */
  printf("W? ");
  scanf("%d",&w);
  /* Einlesen der Zahl X im Dezimalsystem (1 Punkt) */ 
  printf("X? ");
  scanf("%d",&x);

  /* Bestimmung der größten Potenz n mit y=w^n mit y <= x (3 Punkte) */
  y=1;
  while(y<=x) y=y*w; /* bei Ende der Schleife gilt: y >= x */
  y=y/w; /* Einmal durch y- Dividieren um wieder kleiner als x zu sein: y größte Zahl w^n mit y <= x */

  /* ab jetzt gilt: (z = x / y) in {1..w-1} wobei "/" ganzzahlige Division */
  while(y > 0) {
    z = x/y; /* nächste Ziffer berechnen und ausgeben (1 Punkt) */
    printf("%d",z);
    x = x - y*z; /* zu konvertierenden Rest berechnen (1 Punkt) */
    y = y/w; /* nächsten Teiler berechnen (1 Punkt) */
  }
  printf("\n");
}

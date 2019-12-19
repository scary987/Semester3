#include <stdio.h>

/*
Das Programm wandelt eine im Dezimalsystem angegebene Zahl X
in eine Zahl zur Basis W um. Die Stellen werden dabei in korrekter
Reihenfolge ausgegeben (höherwertig zu niederwertig).
*/

main() {
  int w, x, y, z;
  /* Einlesen der der Zielbasis w */
  printf("W? ");
  scanf("%d",&w);
  /* Einlesen der Zahl im Dezimalsystem */
  printf("X? ");
  scanf("%d",&x);

  /* Bestimmung der größten Zahl y=w^n mit y <= x  */
  y=1;
  while(y<=x) y=y*w; /* bei Ende der Schleife gilt: y >= x */
  y=y/w; /* Jetzt: y größte Zahl w^n mit y <= x */

  /* ab jetzt jetzt gilt: (z = x / y) in {1..w-1} wobei "/" ganzzahlige Division */
  while(y > 0) {
    z = x/y; /* nächste Ziffer berechnen und ausgeben */
    printf("%d",z);
    x = x - y*z; /* zu konvertierenden Rest berechnen */
    y = y/w; /* nächsten Teiler berechnen */
  }
  printf("\n");
}

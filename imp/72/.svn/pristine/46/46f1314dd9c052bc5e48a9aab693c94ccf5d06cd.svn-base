 #include <stdio.h>

int rectangle(double _lx, double _uy, double _rx, double _oy, double _x, double _y);

 int main() {
 double lx;
 double uy;
 double rx;
 double oy;
 double x;
 double y;

printf("Eingabe lx: ");
 scanf("%lf", &lx);
 printf("Eingabe uy: ");
 scanf("%lf", &uy);
printf("Eingabe rx: ");
 scanf("%lf", &rx);
 printf("Eingabe oy: ");
 scanf("%lf", &oy);

 /* prüfung rechteck */

 printf("Eingabe x: ");
 scanf("%lf", &x);
 printf("Eingabe y: ");
 scanf("%lf", &y);

int ergebnis = rectangle(lx, uy, rx, oy, x, y);
printf("Ergebnis: %d", ergebnis);

 return 0;
 }

/* Funktion für die Prüfung */
 int rectangle(double _lx, double _uy, double _rx, double _oy, double _x, double
_y) {
 if (_x - _lx < 0.5) {return 1;};
 if (_rx - _x < 0.5) {return 1;};
 if (_y - _uy < 0.5) {return 1;};
 if (_oy - _y < 0.5) {return 1;};

 return 0;
}
 
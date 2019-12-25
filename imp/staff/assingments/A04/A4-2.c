/* Musterlösung für die Sortierung mittels zweier Schleifen 
sehr viele Punkte zu verteilen ! */
#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

/* 1 Punkt: Deklaration der Funktion */
/* 1 Punkt: zu sortierendes Array als Übergabeparameter */
/* 1 Punkt: Anzahl Elemente  als Übergabeparameter */
void sortiere(int a[], int n) {
  int swapped = 1; /* Tausch durchgeführt oder nicht */
  int i; /* Schleifenzähler */

  /* 2 Punkte: Schleifenausführung abbrechen, wenn im letzten Durchlauf kein Tausch gemacht wurde */
  while (swapped == 1) {
    swapped = 0;

     /* 2 Punkte: Sortierung durch (mehrfache) Iteration des Arrays  */
    for (i = 0; i < n - 1; i++) {

      /* 2 Punkte: Vergleiche aktuelles Element mit Folgelement */
      if (a[i] > a[i + 1]) { 

        /* 2 Punkte: Nutzung der swap Funktion zum Tausch der Elemente */
        /* 2 Punkte: Tausch des aktuellen Elements mit Folgeelement */
        /* 2 Punkte: Übergabe beider Elemente als Referenz (nicht als Kopie)*/
        swap(&a[i], &a[i + 1]);

        swapped = 1; /* Tausch durchgeführt */
      }
    }
  }
}

int main() {
  /* Test-Array */
  int a[] = {3, 2, 8, 1, 9, 7, 0, 5, 4, 6}; /* unsortiertes Array */
  int size = sizeof(a) / sizeof(int); /* Anzahl Elemente */
  int i; /* Schleifenzähler */

  printf("Unsortiert: ");
  for (i = 0; i < size; i++)
    printf("%d ", a[i]);

  sortiere(a, size); /* rufe Soritierfunktion mit Test-Array auf */

  printf("\nSortiert:   ");
  for (i = 0; i < size; i++)
    printf("%d ", a[i]);
	return 0;
}

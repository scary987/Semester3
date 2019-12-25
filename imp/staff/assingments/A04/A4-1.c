#include <stdio.h>
#include <stdlib.h>

/* 1 Punkt: Alphabet als Char-Array */
char elems[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int np=0;

void swap(int i, int j) {
  char tmp = elems[i];
  elems[i] = elems[j];
  elems[j] = tmp;
}

/* 1 Punkt: Defintion einer Funktion */
/* 1 Punkt: Parameter für Anzahl der zu permutierenden Buchstaben */
/* Umsetzung von Pseudocode - Haeps algorithm https://en.wikipedia.org/wiki/Heap%27s_algorithm */
void perm(int n) {
  int i;

  /* 2 Punkte: Abbruchkriterium der Rekursion */
  if(n==0) 
    printf("%d: %s\n",++np,elems);

  else {

    /* 2 Punkte: Permutationen für die ersten (n-1) Elemente per rekursiven Aufruf erzeugen */
    /* (letztes Zeichen bleibt dabei an seiner Position) */
    perm(n-1); 

    /* 4 Punkte: Umsetzung des "Heap's algorithmus" */ 
    for(i=n-2;i>=0;--i) {      
      swap(i,n-1); /* leztes Zeichen zuerst mit vorletzem, dann vorvorletztem, ... und schließlich mit erstem Zeichen tauschen */
      perm(n-1); /* rekursiver Aufruf für neue Reihenfolge mit getauschten Zeichen */
      swap(i,n-1); /* ursprüngliche Reihenfolge wiederherstellen */
    }
    
  }
}

int main(int argc, char *argv[]) {
  int n;

  if(argc < 2 || (n = atoi(argv[1])) < 0) {
    printf("Usage: %s <number-of-elements>\n",argv[0]);
    return -1;
  }

  elems[n] = '\0'; /* 1 Punkt: Alphabet-Array für Ausgabe bei n abschneiden */
  perm(n);
  printf("%d permutations\n",np);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* strndup ist nicht Bestandteil von Mingw C Standardbibliothek, sonst in string.h 
Kopiere n -Zeichen aus s und fuege Zeichenkettenende hinzu */

char *strndup(const char *s, size_t n) {
    char *p = memchr(s, '\0', n);
    if (p != NULL)
        n = p - s;
    p = malloc(n + 1);
    if (p != NULL) {
        memcpy(p, s, n);
        p[n] = '\0';
    }
    return p;
}
/* Funktion zum Vergleich von 2 Zeichenketten,  genutzt im Aufruf von qsort sortiert aufsteigend */
int cmpf(const void *a, const void *b) { return strcmp(*(char **)b,*(char **)a); }

/* bestimme die Laenge der goessten Uebereinstimmung */
int difflen(char *a, char *b) {
  int l = 0;
  while(*a && *a == *b) {l++; a++; b++;}
  return l;
}

void err(int c, char *msg) {
  if(c) {fprintf(stderr,"Error: %s\n",msg); exit(-1);}
}


int main() {
char *chars;
char **pointers;
  long nch, i, nmatch=0, n;
  long anz;
  long maxi;
  char *m;

  err(fseek(stdin,0,SEEK_END) < 0, "Unable to seek EOF of stdin\n");

  nch = ftell(stdin); /* Bestimmung Anzahl der Zeichen der Datei */
  printf("*** File has %ld characters\n",nch);
  /* Speicher fuer 2 Felder reservieren eines fuer die Zeichen, eines fuer die Pointer */ 
  err(!(chars = malloc(nch)) || !(pointers = (char **)malloc(nch*sizeof(char *))), "Unable to get memory\n");
  fseek(stdin,0,SEEK_SET);
  /* err(fread(chars,1,nch,stdin) != nch,  "Unable to read all characters\n"); */
  anz = fread(chars,1,nch,stdin); /* Anzahl der eingelesenene Zeichen */
  printf("*** Read %ld characters\n",anz);
  for(i=0;i<nch;i++) 
      pointers[i] = chars+i;
  printf("*** File read and pointers set, sorting ...\n");
  qsort(pointers,nch,sizeof(char *),cmpf); /* Aufsteigende Sortierung */
  printf("*** Searching self-plagiarisms ...\n");
  for(i=0;i<nch-1;i++) { /* bestimme laengste Uebereinstimmung */
     if((n=difflen(pointers[i],pointers[i+1])) > nmatch) { /* neues Maximum gefunden */  
      	nmatch = n;
	maxi = i;
     }
  }
  m = strndup(pointers[maxi],nmatch); /* Kopiere Maximum im Feld m */
  printf("Length = %ld '%s' (%ld,%ld)\n",nmatch,m,pointers[maxi]-chars,pointers[maxi+1]-chars);
  free(m);
  printf("*** DONE.\n");
 return 0;
}

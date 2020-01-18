/*Mohamad Algoabra, Matrikelnummer : 219204154
Bashar Almukdad, Matrikelnummer : 219204329
Bakhadyr Saimbetov, Matrikelnummer: 219204800
Mostafa Ahmed Adlan, Matrikelnummer: 219204887
*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) /*aufgabe 4*/
{
    const char *a_ = *(const char **)a;
    const char *b_ = *(const char **)b;
    return strcmp(a_, b_);
}

long int len (FILE *x){ /*aufgabe 2*/
  long int c;
  x =fopen("a.txt", "r");
  fseek(x, 0, SEEK_END);
  c = ftell(x);
  fclose(x);
  return c;
}


int main()
	{
    int i;
    long int l;
    FILE *text;
    text =fopen("a.txt", "r");
    l = len(text);
    char *ptr[l] ; /*aufgabe 2*/
    char *string = (char*)malloc(sizeof(char)*l);
    char cc;
    for ( i = 0; i<l; i++) { /*aufgabe 1*/
      cc = fgetc(text);
      if (cc != '\0') {
        string[i] = cc;
      }
    }
    for ( i = 0; i < l; i++) { /*aufgabe 3*/
      if (string[i] != '\0') {
          ptr[i] = string + i;
        }
  }

  qsort( ptr , l , sizeof(char*), compare); /*aufgabe 4*/


  free(string);
  fclose(text);
	return  0;
	}

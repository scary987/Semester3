#include <stdio.h>
#include <stdlib.h>
/*
Erik Esins 219204576
Sebastian Seifert 219203783
Richard Högemann 219204837
Darleen Koblitz 218203452
*/

void swap (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort (int n[],int a){
  int i,k ;

  while (i<a){
    i++;
    k= i;
    while (k>0) {
      k--;
      if(n[k]>n[k-1]){
        swap(&n[k-1],&n[k]);
      }
    }
  }
}


void printArray (int a [],int n){
  int i = 0;
  printf("[");
  while (i<n-1){
    i++;
    printf("%d,",a[i]);
  }
  printf("%d] \n",a[n-1]);
}

int main (int argc , char * argv []) {
  int sorta[] = {1,2,7,5,4,6,3};
  printArray(sorta,7);
  sort(sorta,7);
  printArray(sorta,7);
  return 0;
}

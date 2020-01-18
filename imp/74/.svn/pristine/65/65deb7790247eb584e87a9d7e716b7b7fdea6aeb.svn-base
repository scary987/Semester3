/* Norbert Scheffler			219202871
   Luca Ziesemer				219201733
   Joost Rehder				    219202865
   Tim Apelt					219203222 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EINGABE "moby-dick.txt"
#define M 1

/*please execute programm in the same directory as file EINGABE*/

/*adapt strcmp to fit qsort parameters*/
int cstring_cmp(const void *a, const void *b){
  const char **ia = (const char **)a;
  const char **ib = (const char **)b;
  return strcmp(*ia,*ib);
}

/*function for checking how long two strings stay the same*/
int comlen(char *p, char *q){
  int i = 0;
  while (*p && (*p++ == *q++)){
    i++;
  }
  return i;
}


int main(){
  char *string;
  char **pointers;
  int size = 0, i, maxlen = -1, maxi, j ,k,found;
  FILE *fp;
  char c;

  /*open file*/
  fp = fopen(EINGABE,"r");

  /*Laenge der Datei*/
  /*fseek(fp, 0, SEEK_END);
  size = ftell(fp); *//*funktioniert nicht*/

  while((c = getc(fp)) != EOF){
    size++;

  }


  printf("The text is of %d bytes size.\n", size);

  /*set file pointer back to beginning of file*/
  fseek(fp, 0, SEEK_SET);

  /*allocate memory for string (for saving whole text)*/
  string = malloc(sizeof(char) * size);

  /*save text in string*/
  for(i=0;i<size;i++){
    string[i] = fgetc(fp);
  }
string[i] = 0;

  /*allocate memory for pointer array*/
  pointers = malloc(sizeof(char *) * size);

  /*set pointers to string*/
  for(i=0;i<size;i++){
    pointers[i] = string + i;
  }

  /*printf("%s", pointers[0]);*/

  /*quicksort pointers*/
  qsort(pointers,size,sizeof(char *),cstring_cmp);

  printf("-----------------------------------------------------\n");

  for (i = 0; i < size-M; i++)

        if (comlen(pointers[i], pointers[i+M]) > maxlen) {

            maxlen = comlen(pointers[i], pointers[i+M]);

            maxi = i;

        }

  printf("The longest passage has the same %d characters\n(Developer info: first appearance in sorted string: %d)\n", maxlen,maxi);  /*, a[maxi]);*/

  printf("The longest duplicated Passage in file %s:\n\n", EINGABE);

  /*print the duplicated passage*/
	for(j=0;j<maxlen;j++){
		printf("%c",pointers[maxi][j]);
	}
	
	printf("\n\n");
  /*find the appearences in the original*/
	for(j=0; j <size - maxlen; j++){
		found = 1;
		for(k=0; k < maxlen;k++){
			if(string[j+k] != pointers[maxi][k]){
				found = 0;
				break;
			}
		}
		if(found == 1){
			printf("found at index: %d \n", j);
		}
	}

  /*Close the file and free up the allocated space*/
  fclose(fp);
  free(string);
  free(pointers);
  return 0;
}

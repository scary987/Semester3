/* Norbert Scheffler			219202871
   Luca Ziesemer				219201733
   Joost Rehder				    219202865
   Tim Apelt					219203222 */

   
#include <stdlib.h>
#include <stdio.h>

void swap(int a, int b, char *array){
char tmp = array[a];
array[a] = array[b];
array[b] = tmp;
}

void permutate(int k, char *arr){
	int i;
	if (k == 1)
	{
		printf("%s\n",arr);
	} 
	else 
	{
		
		for(i=0;i<k;i++){
			
			
			permutate(k-1,arr);
			
			
			if (k%2 == 0){
				
				
			swap(i,k-1, arr);
			
			
			}
			else {
				
				swap(0,k-1,arr);
				
			}
			
		}
	}
}

int fakulti(int l){
	if (l == 1)
		return 1;
	return l * fakulti(l-1);
}


int main(int argc, char *argv[]) {
 
  int laenge, k,i;
char string[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char *array;

if (argc != 2){
printf("Dummbatz");
return 1;
}
else{
laenge = atoi(argv[1]);
}

k = laenge;
array = malloc(sizeof(char)*laenge);

for(i=0;i<laenge;i++){
	array[i]=string[i];
}
array[i]='\0';


permutate(k,array);


printf("%d permutations\n",fakulti(laenge));

free(array);

  return 0;
}
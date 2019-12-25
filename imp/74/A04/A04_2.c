/* Norbert Scheffler			219202871
   Luca Ziesemer				219201733
   Joost Rehder				    219202865
   Tim Apelt					219203222 */

   
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 14

void swap(int a, int b, int *arr)
{
   int tmp = arr[a];
   arr[a] = arr[b];
   arr[b] = tmp;
}
void sort(int *string,int length){
	int i;
	int durch = 1;
	while(durch){
		for(i=0;i<length -1;i++){
			if(string[i]>string[i+1]){
				swap(i,i+1,string);
				durch++;
			}		
		}
		durch--;
	}
}

int main(int argc, char *argv[])
{
	int i,d;
	int *string;
	
	printf("\n");
	printf("\t\t\t\t!!Sortierer!!\n\n");
	printf("Wie viele Zeichen sollen sortiert werden? Ganze Zahl eingeben:");
	scanf("%d", &d);
	printf("\n");
	string = malloc(sizeof(int) * d);
	
	for(i=1;i<=d;i++){
	printf("%d. Zahl eingeben: ",i);
	scanf("%d", &string[i-1]);
	printf("\n");
	}
	printf("\n");
	/*scanf("%d", string);*/
	sort(string,d);
	
	printf("In aufsteigender Reihenfolge:\n\n");
	
	for(i=0;i<d-1;i++)
	printf(" %d,",string[i]);
	printf(" %d",string[i]);
	printf("\n");
  return 0;
}

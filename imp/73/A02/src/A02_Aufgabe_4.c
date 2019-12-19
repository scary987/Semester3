/*1. Name:	   Maximilian Schlatter
    Matrikel-Nr.: 219204787
2. Name:	   Franz Grundei
    Matrikel-Nr.: 218201018
3. Name:	   Maximilian Vogler
    Matrikel-Nr.: 219303168
4. Name:	   Robby Hoeft
    Matrikel-Nr.: 218203372*/

#include <stdio.h>

int main(){

int rest;
int dezimal;

printf("\nBitte geben Sie eine Dezimalzahl ein: ");
scanf("%d", &dezimal);
printf("\nDie Binaerzahl Ihrer Zahl lautet:");

while(dezimal != 0){
	rest = dezimal % 2;
	dezimal = dezimal / 2;
	if(rest>=1){
		printf("1");
		}
		else{
		printf("0");
		}
	}
getchar();
getchar();
return 0;
}

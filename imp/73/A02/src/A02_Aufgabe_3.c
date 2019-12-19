/*1. Name:	   Maximilian Schlatter
    Matrikel-Nr.: 219204787
2. Name:	   Franz Grundei
    Matrikel-Nr.: 218201018
3. Name:	   Maximilian Vogler
    Matrikel-Nr.: 219303168
4. Name:	   Robby Hoeft
    Matrikel-Nr.: 218203372*/

#include <stdio.h>
#define Wechselkurs 1.10

int main(){
double e,d;
while (e!=0){
	printf("Bitte geben Sie einen Betrag in Euro ein(Abbruch mit 0):");
	scanf("%lf",&e);
	d = e*Wechselkurs;
	printf("Der Betrag entspricht %5.2f USD:\n",d);
	}
return 0;
}
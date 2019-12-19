#include <stdio.h>
int main()
{
	float e;
	printf(" Bitte geben Sie eine Zahl ein \n Hinweis: Geben Sie Kommazahlen mit einem Punkt an der Kommastellen an! \n Beispiel: 9.56 statt 9,56.\n Mit der Eingabe 0 beenden Sie das Programm\n");
	scanf("%f",&e);
	float u;
	u=e*1.11;
	if(e != 0)
		printf("Sie erhalten fuer %f Euro  %f Dollar \n",e,u);
	else
		printf("Vielen Dank fuer Ihren Besuch \n");
}

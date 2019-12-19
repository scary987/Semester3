#include <stdio.h>
#include <math.h>
#include <stdio.h>

/*

Erik Esins 219204576
Sebastian Seifert 219203783
Richard Högemann 219204837
Darleen Koblitz 218203452

Die Potenz-funktion wird unten noch verwendet
*/

 int potenz (int n,int a){
 int erg = 1;
 int i;
	for(i=n;i>=1;i--) {
	erg = a*erg;
 }
 return erg;
 }
 
 /*Die Fakultät-funktion wird unten noch verwendet*/

 double fakultaet(double x){
    double ergebnis = 1; 
    if(x > 0){
       ergebnis =  x * fakultaet(x-1); 
    }
    return ergebnis;
 }
 
/*Nr.1)


In C sind für das bennennen von Variablen erlaubt:


Als ersten Buchstaben und für den Rest nur Alphabetischebuchstaben in Groß- und Kleinschreibung sowie der 
Unterstrich. Zusätzlich dürfen alle nicht ersten Zeichen auch Zahlen von 0-9 sein.
Damit ist Foo&bar nicht legitim da es das Sonderzeichen "&" enthält das nicht für die Bennenung von Variablen 
oder Funktionen erlaubt ist.
*/

/*
Nr.2) 


Könnte es sein, dass sehr lange Variablennamen in C aus bestimmten Gründen problematisch sind?
Was sagt der ANSI-Standard bzw. das Kernighan-Ritchie Buch hierzu?
*/ 


/*
Nr.3)
*/
int Umrechnung () {
float f = 1;
float q = 1.1;
	
while(f!=0){
	float e;
	printf("Bitte geben Sie einen Betrag in Euro ein (Abbruch mit 0): ");
	scanf("%f",&f);
	e = f*q;
	printf("Der Betrag entspricht %f USD \n",e);
}
return 0;
}

/*Nr.4)

 Schreiben Sie ein Programm, das eine positive ganze Zahl in das binäre Zahlensystem übersetzt. 
 Dabei dürfen Sie die Binärstellen in umgedrehter Reihenfolge ausgeben 
 (d.h., niederwertigste Stelle zuerst), so dass Sie etwa für die Zahl 13^^10 die Ausgabe 1011^^2 erhalten
 (in normaler Reihung wäre die Ausgabe 1101^^2).
*/ 

 
 int binaer(int a){
 int i = 0;
 int rest = a;
 int erg = 0;
 while (rest!=0){
	 erg = erg + (rest%2) * potenz(i, 10);
	 i++;
	 rest = rest/2;
 }
 return erg;
 }
 
/*
Nr.5)
 
* Erläutern Sie, was das Programm macht.
* Erläutern Sie, wie es das Programm macht – d.h., welchen Algorithmus das Programm verwendet,
 um seine Aufgabe zu erfüllen. 
 
 1.)
 Das Programm berechnet den Modulo von zwei Zahlen. Dabei gibt es den Modulo nicht als Kommazahl an, 
 sondern als Hintereinanderreihung von Int. Dabei ist die erste Ausgabe die Anzahl, wie oft Zahl a in Zahl b reinpasst, und die zweite Angabe
 der Rest. 21 Heißt also, dass die Zahl a 2 Mal in Zahl b hineinpasst und 1 als Rest übrig bleibt.
 In Fällen, in denen die erste Angabe größer ist als 9, sind die ersten beiden Int die Häufigkeit und die letzte der Rest.
 Dabei ist das Programm aber nur in der Lage ganze Int auszugeben, weswegen Mod mit 2 falsche Ausgabewerte liefert.
 Negative Zahlen funktionieren auch nicht und es wird keine Ausgabe geliefert.
 Weiterhin wird X ausgegeben wenn W größer als X ist.
 
 2.)
 Es nimmt 2 Zahlen, X und W. 
 Dann wird Y bestimmt als das größte vielfache von W, dass noch in X enthalten ist.
 Durch erstmalige division von X/Y wird damit zuerst die normale division X/W erzielt ohne den rest zu beachten da jeder rest als Int wegfällt
 X ist danach der Rest der Division da das X (mit Rest) - Z*Y (ohne Rest) als X definiert wird
 Y wird durch W dividiert
 Der Rest X wird nun wieder durch X/Y gerechnet und es wird der Nächste Rest Ausgegeben und der Algorithmus wiederholt sich bis ein Rest 0 entsteht.
 
 
 Nr.6)
*/ 

double sinus (double x){
    int i;
    double ergebnis = 0;
    for(i = 0; i  < 100; i++){
        ergebnis += (pow(-1, i) * ((pow(x, 2 * i + 1)) / (fakultaet(2 * i + 1))));

    }
    return ergebnis;
}

 int main (){

	double x;
	printf("Gib den Winkel fuer den Sinus in Bogenmass ein (nicht ueber 2Pi)\n");
	scanf("%lf",&x);
	printf("der sinus ist: \n");
	printf("%f",sinus(x));
	printf("\n");
	return 0;
	

	
 
 }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Anzahl der Worte in moby-dick.txt **/
#define Count 216829

/**
	Bearbeitender Student:
	John-Patric Palent, MNR: 219203122
**/

int main()
{
	/** Initialisierung der Variablen **/
	/**int z = 0;**/
	int i;
	int x;
	long length = 0;

	char message[Count];
	/*char pointers[length];*/

	/** Oeffnen des "moby-dick.txt" **/
	FILE *file_in;
	file_in=fopen("moby-dick.txt", "r");

	/** for-Loop zum Einlesen des Texts **/
	for(i=0; i<=Count; i++)
	{
		fscanf(file_in,"%s", message);
	}

	for(x=0; x<=Count; x++)
	{
		length = length + strlen(&message[x]);
	}

	printf("%ld", length);

    return 0;


}

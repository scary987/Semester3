/*
Aufgabe 1
Name:
	Schuemann, Hauke. Matrikelnr.: 219203901
	Hoang Anh, Pham. Matrikelnr.: 219204706
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int cmpstr(const void *a, const void *b) {
	char *str1 = *(char **)a;
	char *str2 = *(char **)b;
	return strcmp(str1,str2);
}

/*
How2Use: A05.exe<[dateiname].txt


Ergebniss für "moby-dick.txt":
"
This eBook is for the use of anyone anywhere at no cost and with
almost no restrictions whatsoever.  You may copy it, give it away or
re-use it under the terms of the Project Gutenberg License included
with this eBook or online at www.gutenberg.org
"

*/

int main() {
	int len;
	int i, i2;
	int place, eq_amount;
	char c;
	char* text;
	char** pointers;
	/*Determine file length*/
	fseek(stdin, 0, SEEK_END);
	len = ftell(stdin);
	fseek(stdin, 0, SEEK_SET);
	/*Create arrays*/
	text = malloc((len + 1)*sizeof(char));
	
	/*Assign chars and pointers*/
	for(i = 0; i < len; i++) {
		c = getc(stdin);
		if(c == EOF) {
			text[i] = '\0';
			break;
		}
		text[i] = c;
	}
	len = i;
	pointers = malloc(len*sizeof(char*));
	for(i = 0; i < len; i++) {
		pointers[i] = text + i;
	}
	/*Sort the pointers*/
	qsort(pointers, len, sizeof(char*), cmpstr);
	eq_amount = 0;
	place = 0;
	for(i = 1; i < len; i++) {
		i2 = 0;
		while(pointers[i-1][i2] == pointers[i][i2]) { /*This is save since no two of these strings ever have the same length.*/
			i2++;
		}
		if(i2 > eq_amount) {
			place = i;
			eq_amount = i2;
		}
	}
	/*Crop output at the correct location*/
	pointers[place][eq_amount] = '\0';
	printf("Laengstes Duplikat:\n---------------\n%s\n---------------", pointers[place]);
	return 0;
}


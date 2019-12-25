#include <stdio.h>
/** Es wird angenommen, dass vom User nur sinnvolle Eingaben gemacht werden.
	
	Bearbeitender Student:
	John-Patric Palent, MNR: 219203122
	
**/

/** Als Shortcut und Vereinfachung **/
#define Ss(s) scanf("%s", s)

/** Zur Vereinfachung des Abrufs **/ 
#define MAX_LEN 26

/** Globale Aufgrund des Zeitgleichen Zugriffs noetig **/
int count;

void print_swap(int a, int b, int n) 
{
	
	int i;
	printf("%d ", count++);

	for(i = 0; i < n - 1; i++)
	{
		if(a == i)
		{
			printf("|--");
		}
		else if(a < i && i < b)
		{
			printf("---");
		}
		else
		{
			printf("|  ");
		}
		printf("|");
	}
}

/** 
	Referenzfunktion, die die Werte 
	innerhalb des Arrays durchtauscht.
**/
void swap(char *s, int a, int b) 
{
	char t = s[a];
	s[a] = s[b];
	s[b] = t;
}

void h(char *s, int n, int len) 
{
  int i;
  for(i = 0; ; i++) 
  {
    if(n > 2)
      h(s, n - 1, len);
    if(i == n - 1)
      break;
    if(n % 2 == 0) 
	{
      swap(s, i, n - 1);
      print_swap(i, n - 1, len);
    } else 
	{
      swap(s, 0, n - 1);
      print_swap(0, n - 1, len);
    }
    printf(" %s\n", s);
  }
}

void heap(char *s, int len) 
{
	
	/** Abfangschleife fuer kleine Werte **/
	if(len < 2) 
	{
		printf("Die Permutation ist %s\n", s);
		return;
	}
	
	count = 1;
	print_swap(-1, -1, len);
	printf(" %s\n", s);
	h(s, len, len);
}

int main() 
{
	char s[MAX_LEN];
	int len;
	
	printf("Geben Sie die zu permutierende Zahl ein.\n");
	/** Siehe Oben **/
	Ss(s);
	
	for(len = 0; s[len] != '\0'; len++);
	{
		heap(s, len);
	}
	
	return 0;
}
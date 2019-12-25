#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f = fopen ("moby_dick.txt", "r");
	char zeichen = getc(f);
	int arr[1][1][1] = 
	{
		{
			{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
			{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},
			{' ','.',','}
		}
	};
	int i=0;
	char a, b, c;
	
	do
	{
		zeichen = getc(f);
		
		a = getc(f);
		b = a + 1;
		c = b + 1;
		
		printf("%d %d %d", a, b, c);
	
		
		printf("%d\n", i);
	}
	while (zeichen != EOF);
	
	
	return 0;
}
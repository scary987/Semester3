#include <stdio.h>
/** Es wird angenommen, dass vom User nur sinnvolle Eingaben gemacht werden. **/

void swap()
{
	int x; /** Counter **/
	int temp;
	int i;
	int arr[]={1, 7, 3, 6, 4, 9, 5, 2, 8};

	for(x=0; x!=9; x++) /** Sortschleife **/
	{
		temp = arr[0];

		if(temp > arr[1])
		{
			arr[1]=temp;
			arr[0]=arr[1];
		}
		/* Ueber Referenzen loesen */
	}
	for(i=0; i < 10; i++) /** Printschleife **/
	{
		printf("%d\n", arr[i]);
	}
}

int main()
{
	swap();

	return 0;
}

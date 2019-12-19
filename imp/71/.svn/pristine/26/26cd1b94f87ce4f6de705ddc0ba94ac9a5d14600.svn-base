#include <stdio.h>
/*Mohamad Algoabra, Matrikelnummer : 219204154 
Bashar Almukdad, Matrikelnummer : 219204329 */

int main()
{
    int dec, bin, x=2;
   
    printf("Bitte geben Sie eine positive ganze Zahl:");
    scanf("%d",&dec);
    if(dec == 0){
        printf("0");
    }else
    {
       while (dec != 0)
       {
           if(dec%x == 0){
               bin=0;
           }else
           {
               bin=1;
               dec = dec -(dec%x);
           }
           
           printf("%d", bin);
           x = x*2;
       }
    }
    return 0;
}

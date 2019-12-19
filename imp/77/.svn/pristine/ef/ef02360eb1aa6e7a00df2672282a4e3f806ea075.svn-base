/* Sebastian Kaddatz (219203768)    Dennis Stehle (219203998)*/
#include <stdio.h>

int main(){
    int zahl, rest;
    
    printf("Bitte geben Sie eine Dezimalzahl ein: ");
    scanf("%d", &zahl);
    
    if(zahl == 0){
        printf("Die Binaerzahl lautet: 0");
    }
    else{
        printf("Die Binaerzahl lautet: ");
        while(zahl>0){
            rest=zahl%2;
            zahl=zahl/2;
            if(rest>=1){
                printf("1");
            }
            else{
                printf("0");
            }
        }
    }
    return 0;
}


#include <stdio.h> 
#include <stdlib.h>

int tat (char a){
switch(a){
case 46: return 0;
case 44: return 1;
case 32: return 2;
default:{ if(97<=a<=122){
            return (a-94);
           }
          else if (65<=a<=90){
            return (a-36);
            }          
        }
}
}


void analyse (char n[],float stat[][55][55]){
int k= 2;
    while(n[k]!=':'){
    stat[tat(n[k-2])][tat(n[k-1])][tat(n[k])] += 1;
    k++;
    }
}

void cube (float stat [][55][55] , float n){
for (int i=0;i<55;i++){
for (int k=0;k<55;k++){
for (int j=0;j<55;j++){
stat[i][k][j]=stat[i][k][j]/n;
}
}
}

}

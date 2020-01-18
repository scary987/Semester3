#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

Erik Esins 219204576
Sebastian Seifert 219203783
Richard Högemann 219204837
Darleen Koblitz 218203452

*/

int cmp (const void * a, const void * b){
char* erst = *(char**) a;
char* zweit = *(char**)  b;
return(strcmp(erst,zweit));
}


int equalcmp (char* a, char* b){
int i=0;
while(a[i]!='\0' && b[i]!='\0'){
if(a[i]==b[i])i++;
else
return i;
}
return i;
}
int countChar (FILE* file){
int zahl=0;
while(fgetc(file)!=EOF)
zahl++;
rewind(file);
return zahl;
}


int main (){

FILE* mobydick = fopen ("moby-dick.txt","r");

if(mobydick == NULL ){
    printf("cant open \n");
   return 1;}

else{
int i=0;
int maxequal =0;
int maxspot =0;
int count = countChar(mobydick);
char* book =(char*)malloc(2000000*sizeof(char));
char** pointer =(char**)malloc(2000000*sizeof(char*));

for(i=0;i<count;i++){
book[i]=fgetc(mobydick);
pointer[i]=&book[i];
}
rewind(mobydick);
printf("das ist die laenge des Files %d \n",count);
i=0;

qsort(pointer,count,sizeof(char*),cmp);

for(i=0;i<count-1;i++){
if(equalcmp(pointer[i],pointer[i+1])>maxequal){
maxequal=equalcmp(pointer[i],pointer[i+1]);
maxspot=i;
}
}
printf("laengste Uebereinstimmung %d an der stelle %d\n",maxequal,maxspot);



fclose(mobydick);
return 1;
}
}

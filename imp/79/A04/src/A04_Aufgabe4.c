/*Name, Matrikelnummer: Anna-Sophie Jankowsky, 219200582;
						Tim Ole Tegler, 219204149;
						Tobias Wolters, 219203310;
						Felix Schenk, 219200574 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void arrayfill(double (*charwahr)[29][29][29],int *count,double (*wahrscheinlich)[29][29][29]){
char text[55501],text2[55501];
int i,j,c=0,d=0,e;
FILE *f = fopen("moby-dick.txt","r");
text[0]=getc(f);
text[1]=getc(f);

for(e=0;c <= 28;e++){ /*array putzen*/
	
	(*charwahr)[c][d][e]=0;
	(*wahrscheinlich)[c][d][e]=0;
	if(e==28){d++;e=-1;}
	if(d==29){c++;d=0;}
	if(c==29 && d==0 && e==-1){break;}

	
	
	
}
for(i=2;c != EOF;i++){ /*erste füllschleife*/
	text[i]=getc(f);
	c = text[i];
	d = text[i-1];
	e = text[i-2];
	
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z'){
		(*charwahr)[e-'a'][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z'){
		(*charwahr)[e-'A'][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e =='.'){
		(*charwahr)[26][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e ==','){
		(*charwahr)[27][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e ==' '){
		(*charwahr)[28][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e =='.'){
		(*charwahr)[26][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e ==','){
		(*charwahr)[27][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e ==' '){
		(*charwahr)[28][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && e >= 'a' && e <= 'z' && d =='.'){
		(*charwahr)[e-'a'][26][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && e >= 'a' && e <= 'z' && d ==','){
		(*charwahr)[e-'a'][27][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && e >= 'a' && e <= 'z' && d ==' '){
		(*charwahr)[e-'a'][28][c-'a']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && e >= 'A' && e <= 'Z' && d =='.'){
		(*charwahr)[e-'A'][26][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && e >= 'A' && e <= 'Z' && d ==','){
		(*charwahr)[e-'A'][27][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && e >= 'A' && e <= 'Z' && d ==' '){
		(*charwahr)[e-'A'][28][c-'A']+=1;
		(*count)++; }
	if(d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z' && c =='.'){
		(*charwahr)[e-'a'][d-'a'][26]+=1;
		(*count)++; }
	if(d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z' && c ==','){
		(*charwahr)[e-'a'][d-'a'][27]+=1;
		(*count)++; }
	if(d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z' && c ==' '){
		(*charwahr)[e-'a'][d-'a'][28]+=1;
		(*count)++; }
	if(d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z' && c =='.'){
		(*charwahr)[e-'A'][d-'A'][26]+=1;
		(*count)++; }
	if(d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z' && c ==','){
		(*charwahr)[e-'A'][d-'A'][27]+=1;
		(*count)++; }
	if(d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z' && c ==' '){
		(*charwahr)[e-'A'][d-'A'][28]+=1;
		(*count)++; }
	if(d == ' ' && e >= 'A' && e <= 'Z' && c =='.'){
		(*charwahr)[e-'A'][28][26]+=1;
		(*count)++; }
	if(d == ' ' && e >= 'a' && e <= 'z' && c =='.'){
		(*charwahr)[e-'a'][28][26]+=1;
		(*count)++; }
	if(d == ' ' && c >= 'A' && c <= 'Z' && e =='.'){
		(*charwahr)[26][28][c-'A']+=1;
		(*count)++; }
	if(d == ' ' && c >= 'a' && c <= 'z' && e =='.'){
		(*charwahr)[26][28][c-'a']+=1;
		(*count)++; }
	if(c == ' ' && c >= 'a' && c <= 'z' && d =='.'){
		(*charwahr)[e-'a'][26][28]+=1;
		(*count)++; }
	if(c == ' ' && c >= 'A' && c <= 'A' && d =='.'){
		(*charwahr)[e-'A'][26][28]+=1;
		(*count)++; }
	if(i==55500){break;}}
text2[0]=getc(f);
text2[1]=getc(f);
for(j=2;c != EOF;j++){ /*backup füllschleife*/
	text2[j]=getc(f);
	c = text2[j];
	d = text2[j-1];
	e = text2[j-2];
	
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z'){
		(*charwahr)[e-'a'][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z'){
		(*charwahr)[e-'A'][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e =='.'){
		(*charwahr)[26][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e ==','){
		(*charwahr)[27][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && d >= 'a' && d <= 'z' && e ==' '){
		(*charwahr)[28][d-'a'][c-'a']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e =='.'){
		(*charwahr)[26][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e ==','){
		(*charwahr)[27][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && d >= 'A' && d <= 'Z' && e ==' '){
		(*charwahr)[28][d-'A'][c-'A']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && e >= 'a' && e <= 'z' && d =='.'){
		(*charwahr)[e-'a'][26][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && e >= 'a' && e <= 'z' && d ==','){
		(*charwahr)[e-'a'][27][c-'a']+=1;
		(*count)++; }
	if(c >= 'a' && c <= 'z' && e >= 'a' && e <= 'z' && d ==' '){
		(*charwahr)[e-'a'][28][c-'a']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && e >= 'A' && e <= 'Z' && d =='.'){
		(*charwahr)[e-'A'][26][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && e >= 'A' && e <= 'Z' && d ==','){
		(*charwahr)[e-'A'][27][c-'A']+=1;
		(*count)++; }
	if(c >= 'A' && c <= 'Z' && e >= 'A' && e <= 'Z' && d ==' '){
		(*charwahr)[e-'A'][28][c-'A']+=1;
		(*count)++; }
	if(d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z' && c =='.'){
		(*charwahr)[e-'a'][d-'a'][26]+=1;
		(*count)++; }
	if(d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z' && c ==','){
		(*charwahr)[e-'a'][d-'a'][27]+=1;
		(*count)++; }
	if(d >= 'a' && d <= 'z' && e >= 'a' && e <= 'z' && c ==' '){
		(*charwahr)[e-'a'][d-'a'][28]+=1;
		(*count)++; }
	if(d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z' && c =='.'){
		(*charwahr)[e-'A'][d-'A'][26]+=1;
		(*count)++; }
	if(d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z' && c ==','){
		(*charwahr)[e-'A'][d-'A'][27]+=1;
		(*count)++; }
	if(d >= 'A' && d <= 'Z' && e >= 'A' && e <= 'Z' && c ==' '){
		(*charwahr)[e-'A'][d-'A'][28]+=1;
		(*count)++; }
	if(d == ' ' && e >= 'A' && e <= 'Z' && c =='.'){
		(*charwahr)[e-'A'][28][26]+=1;
		(*count)++; }
	if(d == ' ' && e >= 'a' && e <= 'z' && c =='.'){
		(*charwahr)[e-'a'][28][26]+=1;
		(*count)++; }
	if(d == ' ' && c >= 'A' && c <= 'Z' && e =='.'){
		(*charwahr)[26][28][c-'A']+=1;
		(*count)++; }
	if(d == ' ' && c >= 'a' && c <= 'z' && e =='.'){
		(*charwahr)[26][28][c-'a']+=1;
		(*count)++; }
	if(c == ' ' && c >= 'a' && c <= 'z' && d =='.'){
		(*charwahr)[e-'a'][26][28]+=1;
		(*count)++; }
	if(c == ' ' && c >= 'A' && c <= 'A' && d =='.'){
		(*charwahr)[e-'A'][26][28]+=1;
		(*count)++; }
		if(j==55500){break;}
		}



/* printf("zeichen: %d\n",*count);	*/
} 


void testen(double (*wahrscheinlich)[29][29][29],int *count){
 double test=0;
 int c,d,e;
 c=0;
 d=0;
 for(e=0;;e++){
	
	test+=(((*wahrscheinlich)[c][d][e]));
	if(e==28){d++;e=-1;}
	if(d==29){c++;d=0;}
	if(c==29 && d==0 && e==-1){break;}


}
printf("test var: %f\n",test);
	
}

void prozent(double (*charwahr)[29][29][29],int *count, double (*wahrscheinlich)[29][29][29]){
int c=0,d=0,e;
for(e=0;;e++){ 
	
	(*wahrscheinlich)[c][d][e]=((*charwahr)[c][d][e] / *count);
	if(e==28){d++;e=-1;}
	if(d==29){c++;d=0;}
	if(c==29 && d==0 && e==-1){break;}

}

/* printf("the in prozent: %f\n",(*wahrscheinlich)[19][7][4]); */





}	

void tim(int *z1,int *z2,int *z3, double (*wahrscheinlich)[29][29][29]){
   time_t t;
   srand((unsigned)time(&t));
		*z1=rand()%29;
		*z2=rand()%29;
		*z3=rand()%29;
	/*if( (*wahrscheinlich)[*z1][*z2][*z3] <= 0){tim(z1,z2,z3,wahrscheinlich);} crasht gelegentlich*/
	while((*wahrscheinlich)[*z1][*z2][*z3] == 0){
	*z1=rand()%29;
	*z2=rand()%29;
	*z3=rand()%29;
	}	
}

int textgen( double (*wahrscheinlich)[29][29][29],int x1,int x2,int x3){
	time_t t;
	int i,j=0;
   srand((unsigned)time(&t));
	for(i=0;i<29;i++){
		if((*wahrscheinlich)[x1][x2][i] !=0 && (*wahrscheinlich)[x1][x2][i] > (*wahrscheinlich)[x1][x2][j]) {
		j=i;}
		
	}
	return j;
}

void schreiben(double (*charwahr)[29][29][29], double (*wahrscheinlich)[29][29][29],int *x1,int *x2,int *x3){ /*teil 3*/
	int c,d,e,i,tmp;
	putchar(46);
	putchar(32);
		c=*x3;
		d=*x2;
		e=*x1;
	for(i=0;i<50;i++){ /* textlaenge*/
		if(c==26)c=-51;
		if(c==27)c=-49;
		if(c==28)c=-65;

		putchar(c+'a');
		if(c==-51){c=26;}
		if(c==-49){c=27;}
		if(c==-65){c=28;}

		tmp=d;		
		d=c;
		e=tmp;
		
		
		c=textgen(wahrscheinlich,e,d,c);
		
	}
	
	
	
	
}

int main() {

int count,z1,z2,z3,x1=26,x2=28;
double charwahr[29][29][29];
double wahrscheinlich[29][29][29];

arrayfill(&charwahr,&count,&wahrscheinlich); /*3d vektor teil 1*/

prozent(&charwahr, &count,&wahrscheinlich); /*erstellt wahrscheinlichkeiten zwischen 0 und 1*/

/* testen(&wahrscheinlich,&count);  summiert alle wahrscheinlichkeiten, kommt auch 1 raus =) */

tim(&z1,&z2,&z3,&wahrscheinlich); /*teil 2 zufallszahlengenerator*/

schreiben(&charwahr,&wahrscheinlich,&x1,&x2,&z3);


return 0;
} 
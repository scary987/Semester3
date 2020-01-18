// © Tobias Reincke, Rostock, 13.1.20
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sonder = 100;
void printvektor(int a[], int size )
{   cout <<" { ";
    for (int i = 0; i<size; i++)
    {
        if (a[i]==sonder)
        {
            cout<<(char) 157 <<" ";
            continue;
        }
        cout<<a[i]<<" ";
    }
    cout <<"}\n ";
}

bool checksyphon(int a[],int size)
{
    bool syph = true;
    /*cout<<"vektor:{ "; //Ein
    for(int i = 0;i<size; i++ )
    {
       cout<<a[i]<<" ";
    }
    cout <<"}\n";*/
    cout<<"Input only Transitionen: "<<endl;
    for(int i = 0; i < size ; i++)
    {
       if(a[i]>0)
       {
           if(a[i]==100) continue;
           cout<<i<<" ";
           syph= false;
       }

    }
    if(syph)cout<<"Keine. Ist Syphon.";
    cout<<endl;
    return true;
}
bool checktrap(int a[],int size)
{
    bool syph = true;
    /*cout<<"vektor:{ "; //Ein
    for(int i = 0;i<size; i++ )
    {
       cout<<a[i]<<" ";
    }
    cout <<"}\n";*/
    cout<<"Output only Transitionen: "<<endl;
    for(int i = 0; i < size ; i++)
    {
       if(a[i]<0)
       {
           if(a[i]==100) continue;
           cout<<i<<" ";
           syph= false;
       }
    }
    if(syph)cout<<"Keine. Ist Trap.";
    cout<<endl;
    return true;
}

int* vectoradd(int a[], int b[], int size )
{

    int* c  ;

    c =(int *) malloc(size +1);
    printvektor(a,size);
    cout<<"+\n";
    printvektor(b,size);

    for (int i = 0 ; i<size;i++)
    {   //
        if(a[i]==b[i])c[i]=a[i];
        else if(a[i]!=b[i] && (a[i]!=0&&b[i]!=0)) c[i]=sonder; //if none of the values equals zero and both are different -> they cancel each other out; using sonderzeichen for this  //emulating set unions
        else if(a[i]==sonder || b[i]==sonder) c[i]=sonder;  //the transtion already got canceled from the union
        else c[i]=a[i]+b[i];
    }
    cout<<"=\n";
    printvektor(c,size);
    return c;
}
int* vectorsub(int a[], int b[], int size )
{
  int* c  ;
    c =(int *) malloc(size +1);
    printvektor(a,size);
    cout<<"+\n";
    printvektor(b,size);

    for (int i = 0 ; i<size;i++)
    {
        if(a[i]==b[i])c[i]=a[i];
        else c[i]=a[i]-b[i];
    }
    cout<<"=\n";
    printvektor(c,size);
    return c;
}
//Das Programm funktioniert nicht unter der Vorraussetzung, dass es keine Kreise gibt, wo ein und diesselbe Transition von der Stelle nimmt und auf die Stelle packt
//Wenn es solche Kreise gibt, muss dem entprechend per Sonderzeichen initialisiert werden.
int main()
{   int* temp;
    int* temptemp;
    int* temptemptemp;
//  int Stelle[] = {+-t0, +-t1, +-t2, +-t3}; +- steht für out oder imput durch transitionen
    int s8 [] = {-1,-1,1,1}; //Beim senkrechtem Lesen sieht man die Transitionen, stelle als Input/Output vektor
    int s9 [] = {1, 0, -1 , 0};
    int s10[] = {0,0,-1,1};
    int s11[] = {0,1,0,-1 };

    int s12[] = {0,0,1,-1};

    int* places[5];
    places[0]=s8;
    places[1]=s9;
    places[2]=s10;
    places[3]=s11;
    places[4]=s12;
    // 4 stacked loops; a recursive solution following seems only logical
    for(int i = 1 ; i<=5;i++)
    {
        cout<<"Stellen: "<<i+7<<endl;
        checksyphon(places[i-1],4);
        checktrap(places[i-1],4);
        cout<<endl;
        for(int j = i+1 ; j<=5;j++)
        {
            cout<<"Stellen: "<<i+7<<" "<<j+7<<endl;
            temp=vectoradd(places[i-1],places[j-1],4);
            checksyphon(temp,4);
            checktrap(temp,4);
            cout<<endl;
            for(int k = j+1; k<=5;k++)
            {

                 cout<<"Stellen: "<<i+7<<" "<<j+7<<" "<<k+7<<endl;
                 temptemp=vectoradd(temp,places[k-1],4);
                 checksyphon(temptemp,4);
                 checktrap(temptemp,4);
                 for(int l = k+1 ;l<=5;l++)
                 {
                     cout<<"Stellen: "<<i+7<<" "<<j+7<<" "<<k+7<<" "<<l+7<<endl;
                     temptemptemp=vectoradd(temptemp,places[k-1],4);
                     checksyphon(temptemptemp,4);
                     checktrap(temptemptemp,4);
                 }
            }
        }
    }
}

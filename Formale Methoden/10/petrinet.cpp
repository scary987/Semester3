#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <array>
using namespace std; 
void generate (int np, int array[], int size, int toprint)
{
    if (np ==1 )
    { 
        for(int i = 0; i< toprint; i++) 
            {
                cout<<array[i];
            }    
        
    } 
    else 
    {  
        generate(np-1, array,size,toprint);
        for (int i = 0; i<np-1; i++)
        {
            if (np%2==0)
            {
                int temp;
                temp =array[np-1];
                array[np-1]=array[i];
                array[i]=temp; 
            }
            else
            {
                int temp;
                temp =array[np-1];
                array[np-1]=array[0];
                array[0]=temp; 
            }
            generate(np-1,array,size,toprint);
        }
    }
    cout<<"\n";
}
int* vectoradd(int xd[], int addition[], int size )
{
    for(int i = 0; i<size;i++)
    {
        xd[i]+= addition[i];
    }
    return xd;
}


bool issyphon(vector<int> vor ,vector<int> nach)
{
    for(int i:vor)
    { 
        if(std::find(nach.begin(), nach.end(), i) == nach.end()) {
        //in case it's no syphon
        return false;
        } 
    }
    return true;
}

/*low level petrinet */
int main(int argc, char const *argv[])
{
    
    int np,nt;      //number of places and transition per net 
    int inc,outc, temp; //number of inputs and outputs per transition
    int j;
   /* if (argc>1) //need to look up how to use argv
    {
         np=argc[0];
         nt= argc[1];
    }
    else {*/
        cout<<"Insert number of places:\n"; cin>>np;
        cout<<"Insert number of transitions:\n";cin>>nt;
    //}
    
    int net[nt+1][np] = {{0}}; //initialize the matrix
    
    for(int i = 1; i<nt+1; i++)
    {
        cout<<"Insert Transition: #income #outcome incoming_place incoming_place ... outcoming_place outcoming_place ...\n";
        cin>> inc>> outc;
        for(j= 0;j<inc;j++)
        {
            cin>>temp;
            net[i][temp]--;
        }
         for(j= 0;j<outc;j++)
        {
            cin>>temp;
            net[i][temp]++;
        }
    }
    cout<< "Insert the number of initial marks given\n";
    cin>>temp;
    cout<<temp<<"\n";
    for(int i = 0; i<temp; i++)
    {
        cout<<"Insert place of mark\n";
        cin >>j; 
        cout<<j<<"\n";
        net[0][j]++;
    }
    //matrix is build
    int xd[nt];
    for(int i = 0;i<nt+1;i++) xd[i]=i; 
    for (int i = 1; i<=nt+1;i++) {cout<<i<<" length \n"; generate(i, xd, nt+1, i);}
    //check transitions
    


    return 0;
}

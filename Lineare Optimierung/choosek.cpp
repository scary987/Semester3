#include <iostream>
#include <vector>

using namespace std; 


int main(int argc, char const *argv[])
{
    int g,m; 
    vector<int> v; 
    cin >>g>>m;
    cout<<"g = "<<g<<", "<<"m = "<<m<<endl;

    for(int i = 1; i<= m; i++)
    {
        cout<<i*g % m<<" ";
        if (i*g  %m == 1){
            cout <<endl;
            cout<<i*g <<" mod m == 1! Wähle k ="<<i; 
            v.push_back(i);
            cout<<endl;
        }

       
       
    }
    cout<<endl<<"k: "<<endl;;
     for(int i = 0; i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    return 0;
}

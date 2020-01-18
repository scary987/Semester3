#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {


  const int MAX = pow(2,31 );

  int n,m;
  int c;
  cin>>n;
  cin>>m;
  c = cin.peek();
  vector<int> [MAX] array;
  while (c != EOF){
    cin>>n;
    cin>>m;
    vector<int> [MAX] array;

    //sieb des erasthothenes
    if(m < n ){
      for(int i= 0; i< n;i++){ // for every factor in memory
        if(array[i].empty())


        for(int j = i; j<MAX;j+=i ){
          array[j ]++;
        }

      }


    }
    else{
      cout << m<<" does not divide "<<n<<"!\n";
    }



  }
  // danach teilbarkeits test von hinten




}
return 0;
}

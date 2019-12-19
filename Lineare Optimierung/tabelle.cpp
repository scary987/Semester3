#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  for(int i =1 ;i<7; i++)
  {
    if( i%7 != 0){
      cout<<endl;
      for(int j = 1 ;j<7; j++ )
      {
      if( j%7!= 0)
      {
        cout<< (i*j)%7<<" ";
      }
      }
    }


  }
  return 0;
}

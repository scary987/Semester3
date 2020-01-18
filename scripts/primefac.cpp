#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<int> v;
  int a ;
 cin>>a;
 int i = 2;




  while(a!=1){
   while(a%i==0){
     v.push_back(i);
     a = a/i ;
     cout<<""<<i<<endl;
   }
   i++;



  }
  return 0;
}

#include<iostream>
#include<cmath>
using namespace std;


int main(int argc, char const *argv[]) {


int n;
cin>>n;
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
 if(i>9){break; continue;
   cout<<"-1\n";
   v.empty();
 };



}
  return 0;
}

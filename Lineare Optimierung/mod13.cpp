#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {


    int mod = 13; int sub ; long long factor=2;
  //cin>>base>>sub;

  long long base = 12;
  mod = 13;
  int rest = 3;
  long long originbase = base;
  int power;
  for( power= 1; (factor*base)%(int)mod!=rest;power++)
  {

    cout<<factor<<" * "<<originbase<<"^"<<power<<" = "<< base<<" ~= "<<(factor*base)% (int)mod<<" (mod "<<mod<<")"<<endl;
    base=base*originbase;
  }
  cout<<power;

  return 0;
}

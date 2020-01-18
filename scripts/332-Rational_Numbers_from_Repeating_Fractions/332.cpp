#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ggt(int a , int b)
{
  if(b==0) return a;
  else return ggt(b,a%b);

}
int main(int argc, char const *argv[]) {

  string s ;
  float b;
  float c;
  int temp;

  int a;
  int count = 0;
  cin>>a;  std::string::size_type sz;
  while(a!=-1){



    cin >>s;
    b = stof (s.substr(0,s.size()-a),&sz);
    cout<<s.size()<<"\n";
    c=    pow(10,s.size()-2)* b - pow(10, s.size()-2-a)*b + stof (s.substr(s.size()-1-a,s.size()-a),&sz)*(float)pow(10,0-(s.size()-2)); //readjusting what I subtracted too much 
    a = pow(10,s.size()-2)-pow(10,s.size()-2-a);
    cout<<c<<"/"<<a<<endl;


    temp=ggt(a,c);
    a /= temp;
    c /= temp;

    cout<<"Case "<<count++<<": "<<c<<"/"<<a<<endl;
    cin>>a;
  }

  return 0;
}

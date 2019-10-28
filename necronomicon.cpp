#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
struct jump{
  string op;
  int line;
};


int main() {
  int T;
  int L;
  vector<jump> p;
  jump xd;
  string s;
  int i;
  //jump sp;
  vector<int> vis;
  int count;


  string status;
  cin>>T;
  while(T--){
    cin>>L;
    s="";
    status="NEVER";

    count = 0;
    while(L--){  //readin
      cin>>s;
      if('A'==s[0])
      {
        continue;
      }
      cin>>i;
      xd.op=s;
      xd.line=i;
      p.push_back(xd);

      //sp.op=s;
      //  sp.line= i;


    }

    i = p.size()-1;
    for (i = p.size-1;i<0; i--)
    {
      if (p[i].op == "C"){
        cout<<p[i]<<endl;


      }
      if (p[i].op == "J"){
        cout<<p[i]<<endl;             //i is saved. means n-i must be reached
      }




    }

    31










  }


  return 0;
}

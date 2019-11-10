#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool findvariables(int lower, int upper, string s)
{
  s = s.substr(lower+1,upper);

  size_t found=s.find("->");
  int i;
  int m=1;

  while(found!=string::npos)
  {



    i = found+1;
    while(i++){
      if(s[i]==',')
      {

        break;
      }
    }
    

    m = found;
    size_t found=s.find("->",found+1);
  }

  return true;
}


int main(int argc, char const *argv[]) {

  string raw;
  getline(cin,raw);
  static  map<string, int> storage;
  static vector<int> evaluation;

  int m,n;
  m = raw.size();
  while(m>0)
  {
    if(raw[m]=='{')
    {
      break;
    }


  }

  n=m-2;
  findvariables(m,raw.size(),raw);














  return 0;
}

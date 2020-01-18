#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int cases;
  cin>>cases;
  long long n; long long n1;
  cin >>n;
  vector<long long> v;
  v[0] = 1;v[1]=2; v[2]=3;
while (cases--) {
  /* code */


  for(long long i=3; i<n; i++)
  {
    v[i] = v[i-1]+v[i-2];
  }
  cout<<v[n-1]<<endl;
  while(n)
  {
    cin >> n1;
    if(n>n1)cout<<v[n1-3]<<endl<<endl;

    else { for(long long i=n1-1; i<n; i++)
      {
        v[i] = v[i-1]+v[i-2];
      }
    }
  }
}
  return 0;
}

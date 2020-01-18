#include<iostream>
#include<vector>
#include<string>
using namespace std;


/*void find(vector<int>A ,vector<int>B){
  int LCS[A.size()+ 1][B.size()+ 1];

  // if A is null then LCS of A, B =0
  for (int i = 0; i <= B.size(); i++) {
    LCS[0][i] = 0;

  }

  // if B is null then LCS of A, B =0
  for (int i = 0; i <= A.size(); i++) {
    LCS[i][0] = 0;

  }

  for (int i = 1; i <= A.size(); i++) {
    for (int j = 1; j <= B.size(); j++) {
      if (A[i - 1] == B[j - 1]) {
        //    cout<<"hit something: "<<i<<"|"<<j<<endl;
        LCS[i][j] = LCS[i - 1][j - 1] +1;
      } else {
        LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        //  if (LCS[i -1][ j] >= LCS[i][ j -1]) LCS[i][ j] = LCS[i - 1][ j] + 1;
        //else  LCS[i][ j] = LCS[i][ j - 1];
      }
    }
  }
  cout<< LCS[A.size()][B.size()]<<endl;;}*/

  int main() {
    int t;
    int n,p,q;
    int sub;
    int counter = 0;


    cin>>t;
    while(t--){
      counter++;
      cin >>n;
      cin>>p;
      cin>>q;
      vector<int >A,B ;
      p++;q++;
      while(p-->0){
        cin>>sub;
        A.push_back(sub);

      }
      while(q-->0){
        cin>>sub;
        B.push_back(sub);
      }
      int LCS[A.size()+ 1][B.size()+ 1];

      // if A is null then LCS of A, B =0
      for (int i = 0; i <= B.size(); i++) {
        LCS[0][i] = 0;

      }

      // if B is null then LCS of A, B =0
      for (int i = 0; i <= A.size(); i++) {
        LCS[i][0] = 0;

      }

      for (int i = 1; i <= A.size(); i++) {
        for (int j = 1; j <= B.size(); j++) {
          if (A[i - 1] == B[j - 1]) {
            //    cout<<"hit something: "<<i<<"|"<<j<<endl;
            LCS[i][j] = LCS[i - 1][j - 1] +1;
          } else {
            LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
            //  if (LCS[i -1][ j] >= LCS[i][ j -1]) LCS[i][ j] = LCS[i - 1][ j] + 1;
            //else  LCS[i][ j] = LCS[i][ j - 1];
          }
        }
      }
      cout<<"Case "<<counter<<": "<< LCS[A.size()][B.size()]<<endl;



























    }





































    return 0;
  }

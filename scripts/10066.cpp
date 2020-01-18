#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;


int find(vector<string>A,vector<string>B){
  int LCS[A.size()+ 1][B.size()+ 1];
  string solution[A.size()+ 1][B.size()+ 1];
  // if A is null then LCS of A, B =0
  for (int i = 0; i <= B.size(); i++) {
    LCS[0][i] = 0;
    solution[0][i] = "0";
  }

  // if B is null then LCS of A, B =0
  for (int i = 0; i <= A.size(); i++) {
    LCS[i][0] = 0;
    solution[i][0] = "0";
  }

  for (int i = 1; i <= A.size(); i++) {
    for (int j = 1; j <= B.size(); j++) {
      if (A[i - 1] == B[j - 1]) {
        LCS[i][j] = LCS[i - 1][j - 1] +1;
      } else {
        LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        //  if (LCS[i -1][ j] >= LCS[i][ j -1]) LCS[i][ j] = LCS[i - 1][ j] + 1;
        //else  LCS[i][ j] = LCS[i][ j - 1];
      }
    }
  }
  return LCS[A.size()][B.size()];




}




int  main() {

  string sub;
  int counter = 0;
  int a ,b;
  bool run = true;
  while(run){
    counter++;
    cin>>a>>b;
    if(a==0&&b==0){

      break;
      run = false;
    }

    else {
      cout <<"Twin Towers #"<<counter<<endl;
      vector<string> A;
      vector<string> B;
      string A1,B1 = "";
      A.clear();
      B.clear();


      for(int i= 0; i<a;i++){
        cin >> sub;
        A.push_back(sub) ;
        //  A1+=sub + "";

      }
      for(int i= 0; i<b;i++){
        cin >> sub;
        B.push_back(sub) ;
        //  B1+=sub + "";
      }
      //checking output


      cout<<"Number of Tiles : "<<find(A,B)<<endl<<endl;
      //  cout<<LCS1(A1,B1)<<endl;
    }

  }















  return 0;
}

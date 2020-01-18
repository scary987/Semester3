#include <iostream>
#include <string>
#include<vector>
using namespace std;



vector<int> primfac(long long a, vector<int> v) {


  v.push_back(0);
  v.push_back(0);
  for(int i = 2; i<8;i++ ){
    v.push_back(0);
    while(a%i==0){
      v[i]++;
      a = a/i ;
      cout<<i;

      //  cout<<""<<i<<endl;
    }
  }


  return v ;
}




int main(int argc, char const *argv[]) {

  int counter = 0;
  long long int a;

  vector<int> v;
  string s;
  while (a!=-1){
    scanf("%lld", &a);
    //cout<<"------------------------------------------------"<<a<<endl;
    //break;
    v.empty();
    if (a<10){
      cout<<a+10<<"\n";
    }
    else{

      v.empty();
      v = primfac(a,v);
      s = "";
      if(v.size()>=8){
        counter++;

        cout<<counter<<"There  is  no  such  number.\n"; //whatever


        //continue;

      } else{

        for(int i = 2; i<v[2];v[2]-=3){
          s = s +"8";



        }
        // saving differences of 2 used

        for(int j = 1; j<v[3];v[3]-=2)
        {
          s = s + "9";

        }
        // either difference is one or zero
        for(int ii = 0; ii<v[7]; ii++){
          s = "7"+s;


        }
        if(v[3]>0&&v[2]>0){
          s = "6"+s;
          v[2]--;
          v[3]--;
        }
        for(int ii = 0; ii<v[5];ii++){

          s = "5"+s;
        }
        if(v[2]==2){
          s = "4"+s;
          v[2]-=2;
        }
        if(v[3]==1){
          s = "3"+s; v[3]--;
        }
        if(v[2] ==1){
          s = "2"+s; v[2]--;
        }

        cout<<s<<endl;




      }








    }




  }














  return 0;
}

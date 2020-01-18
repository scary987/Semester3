#include <iostream>
#include <sstream>
#include <stdio.h>
#include <map>
#include <cstdint>
#include <cmath>
#include <string>
#include <tuple>
using namespace std;
/* Bit setzen */
#define set_bit(var, bit) ((var) |= (1 << (bit)))

/* Bit löschen */
#define clear_bit(var, bit) ((var) &= (unsigned)~(1 << (bit)))

/* Bit togglen */
#define toggle_bit(var,bit) ((var) ^= (1 << (bit)))

/* Bit abfragen */
#define bit_is_set(var, bit) ((var) & (1 << (bit)))
#define bit_is_clear(var, bit) !bit_is_set(var, bit)



struct tpl{
  int x;
  int y;
};
static tpl points[8];
map<uint8_t, tuple<int, string> > memory;





float  weg(int a, int b){
  return sqrt((points[a].x-points[b].x)*(points[a].x-points[b].x)+(points[a].y-points[b].y)*(points[a].y-points[b].y)); //pythagoras lol
}

float help( uint8_t S, int current, int size){
  map<uint8_t,tuple<int, string>>::iterator it = memory.find(S) ;
  if (it != memory.end() ){

    return get<0>(it->second);
  }
  else if (size == 2){

    int d1,d2;
    for(uint8_t d = 0; d<8; d++ ){
      if(bit_is_set(d,S)){
        d1=d;
        break;

      }

    }
    for(uint8_t d = d1+1; d<8; d++ ){
      if(bit_is_set(d,S)){
        d2=d;
        break;
      }

    }         // both
    memory[S]=make_tuple(weg(d1,d2), d2 +" " + d1) ;  //order is important, bigger endian first
    return get<0>(memory[S]);

  }
  else{
    //int  e;
    uint8_t d = 7;
    float length=0;
    while(d--){
      if(bit_is_set(d, S)){
        float we=help (toggle_bit(S,d),d,size-1)+ weg(current, d);
        if(length<we) {
          length =we;
          //  e = toggle_bit(S,d);
          string a =" "+d ; //so that gnu++ won't give me a compile error

          memory[S]=make_tuple(length , get<1>(memory[toggle_bit(S,d)]) +a);


        }
      }

    }
    return length;
  }






  // return  S ;

}







int main() {
  int c;
  int a,b;
  int counter;
  float length;
  int cases=0;

  cin >>c;
  while (c!=0) {


    tpl points[c];
    cases++;
    counter=0;
    //  tpl *ptr[c];
    uint8_t xd = 0;
    while(c--){

      counter++;
      toggle_bit(xd,counter);
      cin>>points[counter].x>>points[counter].y;
      //  ptr[counter]= &points[counter];
    }

    //have a 1111 1111 byte
    length = 0;
    for(int i = 0; i<counter;i++){
      length=max(help(xd,c,i), length);
    }
    //something loop to print this shit out im fucking tired
    //   sstream ss;
    map<uint8_t,tuple<int, string>>::iterator it = memory.find(xd) ;
    if (it==memory.end()){

      cout<<endl<<endl<<"Error: No memory of of starter map entry"<<endl;
      return 1;
    }
    stringstream ss;
    string s;

    ss<<get<1>(it->second);
    c--;
    double som;
    ss>>b;
    cout<<"**********************************************************"<<endl<<"Network #"<<cases<<endl;
    do {
      a = b;
      ss>>b;
      som = weg(a,b);
      //      s ="Cable requirement to connect ("+ points[a].x +","+ points[a].y+") to ("+points[b].x+","+points[b].y+") is "+ som+ " feet.";
      cout<<"Cable requirement to connect ("<< points[a].x <<","<< points[a].y<<") to ("<<points[b].x<<","<<points[b].y<<") is "<< som<< " feet."<<endl;



    }while (counter--);

    //cout<<"**********************************************************"<<endl<<"Network #"<<cases<<endl;

    cout<<"Number of feet of cable required is " <<length<<endl;



    memory.erase(memory.begin(), memory.end()); //alzheimer algorithm
    //call help then print it ou
    cin >>c;










  }



  return 0;
}

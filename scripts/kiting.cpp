

#include<vector>
#include<iostream>
#include <iomanip>
#include <cmath>
#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define FORS(i,a,b,s) for (int i = (a); i < (b);i=i+(s))
#define FORD(i,a,b) for (int i = int(b)-1; i >= (a);i--)
#define FORIT(i,c) for (__typeof__((c).begin()) i =(c).begin(); i != (c).end(); i++)
#define FORITD(i,c) for (__typeof__((c).end()) i =(c).end()-1; i != (c).begin()-1; i--)
const int oo = 0x3f3f3f3f;
const double eps = 1e-9;
const double PI = 2.0 * acos(0.0);



using namespace std; 
struct edge
{
    int from ;
    vector<int> to; 
    int time; 
   edge (int from_ , int to_, int time_)
     {
         from = from_;
         to= to_;
         time = time_;
     }

};
struct island
{
    int from; 
    int to; 
     island(int from_, int to_)
     {
         from = from_;
         to = to_;
         
     }
  
    
};

int main(int argc, char const *argv[])
{
    vector<edge> edges;
    int totaldistance; 
    int maxjump;
    int jumptime;
    int numberislands;
    vector <int>islands ;
    int middle;
 cin >>totaldistance>>maxjump>>jumptime;
 cin>>numberislands;
 //jump distance need to greater or equal to jumptime, surfing time ist 1 m/s
 int jumpworth = maxjump-jumptime+1; 
int l; 
int r;
 for(int i = 0; i<numberislands;i++){
     cin>>l>>r;
     for(int j =l; j<r+1; j++){
         islands.push_back(j);
     }
     
 }
 for(int i =0 ; i<islands.size(); i++)
 {
     cout<<islands[i]<<" ";
 } 
 for(int i= 0; i<totaldistance; i++)
 {
   // binarysearch
   for(int j =jumpworth;j>0;j--){
   l = 0; 
   r = islands.size()-1;
   bool found = true;
   
   while(islands[middle]!=i+maxjump)
   {
     if(islands[middle]<i+maxjump)
     {
       if(islands[middle+1]>i+maxjump){found=false ;break;}
       else {l=middle; 
       middle=(l+r)/2;}
     } 
     if(islands[middle]>i+maxjump)
     {
       if(islands[middle-1]<i+maxjump) {found=false ;break;}
       else{r=middle; 
       middle=(l+r)/2;}
     }  
   }
    if(found)continue; 
     
    edges.push_back(edge(i,i+maxjump,jumptime)); 
   }
   
 }



    return 0;
}

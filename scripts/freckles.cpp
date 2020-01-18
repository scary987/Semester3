#include<iostream>
#include<vector>

using namespace std;
struct tpl{
  int x;
  int y;
  int tree;
};
int main(int argc, char const *argv[]) {

   int cases;
   int points;
   vector<tpl> v;

   tpl nn; tpl.x=0; tpl.y=0;
   cin >> cases;
   while (cases--) {
     cin >> points;
     v.empty();
     while (points--) {
     v.push_back(nn);
     cin>>v[v.size()-1].x>>v[v.size()-1].y;


     }
   }
  return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
struct jump{
  string op;
  int line;
  int origin; //the line it supposedly lays on
};

struct graph{
	int a; 
	int b; 
	graph(int x, int y)
	{
	a = x;
    b = y;	
	} 
};


int main() {
  int T;
  int L;
  
  int left; int right;
  vector<jump> p;
  vector<graph>q;
  jump xd;
  string s;
  int i;
  //jump sp;
  //vector<int> vis;
  int count;
  string status;
  cin>>T;
  while(T--){
    cin>>L;
    s="";
    status="NEVER";

    count = 0;
    while(L--){  //reading in 
	
       cout<<" "<<count; 
	  cin>>s;
	  count++;
      if('A'==s[0])
      {
        continue;
      }
      cin>>i;
	 
      xd.op=s;
      xd.line=i;
	  xd.origin= count;
      p.push_back(xd);

      //sp.op=s;
      //  sp.line= i;


    }
   

   q.empty();
    i = p.size()-1;
    for (i = p.size()-1;i>0; i--) //creating graph with pairs;
    {
      if (p[i].op == "C"){
        cout<<p[i].op<<endl;
		q.push_back(graph(p[i].line, p[i+1].line  ));
		//binary search to find the other node
		
	 left = 0; right = p.size()-1; count = (right+left)/2;
		while(true){
			if(p[count].origin==p[i].line){
                q.push_back(graph(p[i].line, p[count].origin  ));		 //direct jump to another jump found;		
				break;
			
			}
			else if(p[count].origin<p[i].line &&p[count+1].origin>p[i].line){   //direct jump not possible
				q.push_back(graph(p[i].line, p[count+1].origin  ));               //taking the closest after
                break;				      
			}
			else if(p[count].origin<p[i].line){
				left= count; // right
				count= (left+right)/2;
			}
			else{
				right = count;   // left
				count =(left+ right)/2;
			}
		}


      }
      if (p[i].op == "J"){
        cout<<p[i].op<<endl;   

			//binary search to find the node to jump on
		
	  left = 0; right = p.size()-1; count = (right+left)/2;
		while(true){
			if(p[count].origin==p[i].line){
                q.push_back(graph(p[i].line, p[count].origin  ));		 //direct jump to another jump found;		
				break;
			
			}
			else if(p[count].origin<p[i].line &&p[count+1].origin>p[i].line){   //direct jump not possible
				q.push_back(graph(p[i].line, p[count+1].origin  ));               //taking the closest after
                break;				      
			}
			else if(p[count].origin<p[i].line){
				left= count; // right
				count= (left+right)/2;
			}
			else{
				right = count;   // left
				count =(left+ right)/2;
			}
		}
      }
	  




    }
	
	

    31









;
  }


  return 0;
}

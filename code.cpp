#include <iostream>
using namespace std;

int main(){
  int side;//side of a square
  cin >>side;
  cout<<"area="<<side*side<<endl;

float pencost,pencilcost,erasercost;//total cost
cin>>pencost;
cin>>pencilcost;
cin>>erasercost;

float totalcost=pencost+pencilcost+erasercost;

cout<<"total="<<totalcost<<endl;
cout<<"totalwith gst="<<(totalcost+(0.18*totalcost))<<endl;

float P,R,T;//prt
cin>>P;
cin>>R;
cin>>T;
cout<<"SI="<<(P*R*T)/100<<endl;

float rad;//radius
cin>>rad;
cout<<"area="<<(22/7*rad*rad)<<endl;

return 0;
}
#include <iostream>
#include<cmath>
using namespace std;


int main(){
int n =372;
int num=n;
int cubesum=0;

while(num>0){
    int lastdig=num%10;
    cubesum+= lastdig*lastdig*lastdig;
    num/=10;
}
if(n==cubesum){
    cout<<"armstrong number\n";
}else{
    cout<<"not an armstrong number\n";
}
return 0;
}
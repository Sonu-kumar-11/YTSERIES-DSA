#include <iostream>
#include<cmath>
using namespace std;

int main(){
int n=17;
bool isprime =true;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){//i is a factor of n ; i compeletely didvidesn;n is non prime 
isprime=false;
break;
    }
}
if (isprime==true){
    cout<<"number is prime"<<endl;
}else{
    cout<<"number is non prime"<<endl;
}


return 0;
}
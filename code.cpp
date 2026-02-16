#include <iostream>
using namespace std;

int main(){
    int age ;
    cout<<"enter your age:";
    cin>>age;

    if(age>=18){
        cout<<"can vote"<< endl;
    }
    
    if(age>=45){
        cout<<"contest for election \n";
    }
    else{
        cout<<"can't vote";
    }

return 0;
}
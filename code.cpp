
#include <iostream>
using namespace std;
int main(){
int a=32;
int *ptr=&a;
char ch='A';
char & cho=ch;
*ptr=ch;
cout<< cho << ch <<endl;

}

    

  
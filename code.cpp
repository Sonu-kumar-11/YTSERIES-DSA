#include <iostream>
using namespace std;

int main() {
char ch = 'A';
int n =3;
for(int i=0;i < 3; i++){
for(int j=0; j< n; j++){
    cout << ch << " ";
    ch++;
}
cout << endl;
}
cout << "after pattern :" << ch << endl;
  return 0;
}
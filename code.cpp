#include <iostream>
using namespace std;

int main() {
    char ch ='A';

int n=5;
for (int i=0;i<n;i++){
    for (int j=i+1;j>0;j--) {
        cout << j << " ";
    }
    cout << endl;
    ch++;
}

  return 0;
}
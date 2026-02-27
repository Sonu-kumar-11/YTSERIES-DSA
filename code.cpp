
#include <iostream>
using namespace std ;

bool isprime(int n) {
    if (n==1){
        return false;
    }
    for (int i=2;i*i<=n;i++){
if(n%i==0){
    return false;
}
    }
    return true;
}

void allprimes (int n){
    // all primes -> form 2 to n
    for ( int i=2; i<=n;i++){
        if ( isprime(i)){ // true
            cout<< i<< " ";
        }
    }
    cout << endl;
}
int main(){
    allprimes(150);

return 0;
}
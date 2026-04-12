#include<iostream>
#include<cstring>
using namespace std;

void ispalindrome(char str[],int n){
    int st= 0, end = n-1;
    while(st < end){
        if(str[st++] !=str[end--]) {
          cout << "not valid palindrome\n";
        

        }
        
    }
    cout << "valid palindrome \n";

}


int main(){
    char word[]="madam";
    ispalindrome(word,strlen(word));
  
   
  return 0;
}





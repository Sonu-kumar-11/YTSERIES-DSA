#include<iostream>
using namespace std;

void selectionsort(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        int minIDX=i;
        //loop for find min
        for(int j=i+1; j<n; j++){
            if (arr[j]>arr[minIDX]){
                minIDX=j;
            }
        }

    }
}
int main(){
    int arr[5]= {5,4,1,3,2};

    return 0;
}
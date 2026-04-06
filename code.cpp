#include<iostream>
using namespace std;
#include<climits>
#include<algorithm>

void countsort(int arr[], int n) {
   
int freq [100000] ={0};//range
int minval = INT_MAX, maxval= INT_MIN;
 for(int i=0;i<n;i++){
    minval =min(minval, arr[i]);
     maxval =max(maxval, arr[i]);
}

// 1st step
for(int i=0 ; i<n; i++ ){
    freq[arr[i]]++;
    
}
//2nd step  -0(range)= max-min 
for(int i= minval,j=0; i<= maxval ; i++){
    while(freq[i]>0){
        arr[j++]= i;
        freq[i]--;
    }
 
   
}

}
int main(){
    int arr[8]= {1,4,1,3,2,4,3,7};
countsort(arr,8);
int n=8;
countsort(arr,n);
cout<<"sorted array:";
for (int i=0; i<n; i++){
    cout << arr[i]<< " ";
}

    return 0;
}
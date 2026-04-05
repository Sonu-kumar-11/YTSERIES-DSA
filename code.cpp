
#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

void maxsubarraysum2(int *arr,int n){
int maxsum = INT_MIN ;

    for(int start=0;start<n;start++){//start=2
        int currsum=0;
for(int end=start;end<n;end++){// end 2,3,4,
   currsum += arr[end];
    maxsum= max(maxsum,currsum);
    
    }
    cout<< endl;
}
cout << "maximum subarray sum="<<maxsum<< endl;
}
void maxsubarraysum3(int *arr,int n){
int maxsum = INT_MIN ;
int currsum=0;
for(int i=0;i<n;i++){
    currsum += arr[i];
    maxsum=max(currsum,maxsum);
    if(currsum<0){
        currsum=0;
    }
   }
      cout << "maximum subarray sum ="<< maxsum << endl;
}
int main() {
    int arr[4]={-2,-3,-6,-5,};
    int n=sizeof(arr) / sizeof(int);
   
maxsubarraysum3(arr,n);
return 0;
}
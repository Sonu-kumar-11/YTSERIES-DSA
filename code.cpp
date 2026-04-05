
#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

void maxprofit(int *prices ,int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;

    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
       
    }
    int maxprofit =0;
    for (int i=0;i<n;i++){
        int currprofit = prices[i] - bestBuy[i];
        maxprofit = max(maxprofit ,currprofit);
    }
    //o(n+n)=o(2n)=o(n)
    cout<<"max profit ="<< maxprofit << endl;
}


int main() {
    int prices[6]={7,1,5,3,6,4};
    int n=sizeof(prices) / sizeof(int);
   
    maxprofit(prices,n);

return 0;
}
#include<bits/stdc++.h>
using namespace std;
#include<functional>
#include<algorithm>


int maxProfit(vector<int>prices){
    int buy = prices[0] ;
    int maxProfit = 0 ;
    for(int i =0 ; i < prices.size() ;i++){
        int cost = prices[i] - buy ;
        maxProfit = max(maxProfit, cost);
        buy = min(buy, prices[i]);
    }
    return maxProfit ;
}
/*
[2,4,1]
2 - buying 4 - selling
*/
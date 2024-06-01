#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findTime(vector<int>& piles , int eatSpeed){
    int totalhr = 0 ;
    for(int i = 0; i < piles.size(); i++){
        totalhr += ceil((double)piles[i] / (double)eatSpeed) ;
     }
     return totalhr ;
}

int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end()) ;
        int low = 1, high = piles[piles.size() - 1] ;
    
        while(low <= high){
            int mid = (low + high) / 2;
            int hrsSpend = findTime(piles , mid) ;
            if(hrsSpend <= high){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low ;
}

int main(){
    vector<int> app = {30,11,23,4,20};
    cout << minEatingSpeed(app , 5) ;
}
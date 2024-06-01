#include<bits/stdc++.h>
#include<map>
using namespace std;
//count the number of subarray 
int longestSubarrayWithSumK(vector<int> a, long long k) {
    unordered_map<int, int> mpp ;
    int sum =0 ;
    int count = 1;
    for(int i = 0; i < a.size() ; i++){
        sum += a[i] ;
            if(mpp[sum - k] != 0){
                count ++ ;
            }
        mpp[sum]++ ;
    }
    return count ;
}

//maxlen of subarray with sum K it is the better code not optimal
int MaxSubarrayWithSumK(vector<int> a, long long k ){
    unordered_map<long long , int> mpp ;
    int sum = 0 ; 
    int maxlen = 0 ;

    for(int i = 0; i < a.size(); i++){
        sum += a[i] ;

        if(sum == k){
            maxlen = i + 1;
        }

        if(mpp.find(sum - k) != mpp.end()){
            int len = i - mpp[sum-k] ;
            maxlen = max(maxlen , len) ;
        }
        if(mpp.find(sum) == mpp.end())
            mpp[sum] = i ;
    }

    return maxlen ;
}


//optimal code foe max subarray with sum K

int MaxSubarrayWithSumK(vector<int> & arr, long long k){
    int maxLen = 0 ; 
    int j = 0 ;
    long long sum = 0  ;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i] ;
        while(sum > k){
            sum -= arr[j++] ;
        }
        if(sum == k ){
                maxLen = max(i - j + 1, maxLen) ; 
        }
    }
    return maxLen ;
}
int main(){

}
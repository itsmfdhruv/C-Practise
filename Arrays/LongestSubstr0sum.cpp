#include<bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr){
    unordered_map<int, int> mp;
    int maxi = 0 ;
    int sum = 0 ;
    int n = arr.size() ;
    for(int i =0 ;i < n ; i++ ){
        sum += arr[i];

        if(sum ==0 )
            maxi = i+1;
        else if (mp.find(sum) != mp.end())
            maxi =max(maxi , i - mp[sum]) ;
        else
            mp[sum] = i;
}
    return maxi ;
}
int main(){
    int n ;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n ; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp) ;
    }

    cout << getLongestZeroSumSubarrayLength(arr) ;
}
// 1 -2 5 -7 5 -4 -5 2 -3

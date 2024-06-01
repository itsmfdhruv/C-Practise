#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& nums, int target){
    int s = 0; int n = nums.size() ;
    int e = n -1 ;
    int ans = -1 ;
    while(e >= s){
        int mid = ( s + e ) / 2;

        if(nums[mid] >= target){
            ans = mid ;
            e = mid -1 ;
        }else 
            s  = mid + 1;
    }
    return ans ;
}
int lowerBound(vector<int>& nums, int target){
    int s = 0; int n = nums.size() ;
    int e = n -1 ;
    int ans = -1 ;
    while(e >= s){
        int mid = ( s + e ) / 2;

        if(nums[mid] > target){
            ans = mid ;
            e = mid -1 ;
        }else 
            s  = mid + 1;
    }
    return ans ;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int ub = upperBound(nums, target) ;
    int lb = lowerBound(nums , target) ;
    
    return {ub, lb} ;
}
int main(){
    vector<int> arr = {1,1,1,2,3,3,4,5} ;
    vector<int>ans = searchRange(arr, 1) ;
    cout << ans[1] ;
}
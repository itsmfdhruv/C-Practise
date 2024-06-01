#include<bits/stdc++.h>
using namespace std;
// very good problem 
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>res ;
    sort(nums.begin(), nums.end()) ;

    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1 ; i < nums.size(); j++){
            int k = nums.size() - 1 ;
            int l = j + 1 ;
            while(k > l){
                    long int sum = nums[i];
                    sum += nums[j] ;
                    sum += nums[l] ;
                    sum += nums[k];
                    if(sum == target){
                        vector<int> temp = {nums[i] , nums[j], nums[k], nums[l]} ;
                        res.push_back(temp) ;
                        k-- ;
                        l++ ;
                        while(k > l && nums[k] == nums[k+1]) k--;
                        while(k > l && nums[l] == nums[l-1]) l++;
                }else if (sum < target){
                    l++ ;
                }
                else{
                    k-- ;
                }
                }
            }

        }
        return res ;
    }
    

int main(){
    // time limit exceeded error :()
    
}
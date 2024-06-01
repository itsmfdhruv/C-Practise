//coding ninjas
#include<iostream> 
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int>ans ;
    for(int i =0 ; i < nums.size() ; i ++ ){
        for(int j = i+1 ; j < nums.size() ; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i) ;
                ans.push_back(j) ;
            }
        }
    }

    return { ans[0] , ans[1]} ;
}
//by one-pass hash table

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int , int> numMaps ;
    int n = nums.size() ;

    for(int i = 0 ;i < n ; i++){
        int complement = target - nums[i] ;
        if(numMaps.count(complement)){
            return {numMaps[complement] , i} ;
        }
        numMaps[nums[i]] = i;
    }

    return {} ;
}


int main(){

}

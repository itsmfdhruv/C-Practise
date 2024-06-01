#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int s = 1 , n = nums.size();
      int e = n - 2;

      if(n == 1) return 0 ;
      if(nums[0] > nums[1]) return 0;
      if(nums[n-1] > nums[n-2]) return n-1;

      while(e >= s){
        int mid = (s + e)/2 ;

        if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]){
            return mid ;
        }else if (nums[mid] > nums[mid -1]){
            s = mid + 1;
        }else 
            e = mid - 1;
      }
      return -1;
    }
};
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int ans = INT_MAX;
        while (e >= s) {
            int mid = (s + e) / 2;
            // whole arr is sorted
            if (nums[e] >= nums[s]) {
                ans = min(nums[s], ans);
                break;
            }
            // left part is sorted
            if (nums[s] <= nums[mid]) {
                ans = min(nums[s], ans);
                // look for right part
                s = mid + 1;
            } else {
                ans = min(ans, nums[mid]);
                // look for left part
                e = mid - 1;
            }
        }
        return ans;
    }

int main(){
    
}
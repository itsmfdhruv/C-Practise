#include<bits/stdc++.h>
using namespace std;
// even in a rotated array one halve will alway had a sorted part
int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() -1;

        while(e >= s){
            int mid = (e + s) /2 ;

            if(nums[mid] == target){
                return mid ;
            }
            // checking which  of th ehalves is sorted to apply BS
            else if(nums[s] <= nums[mid]){
                if(nums[s] <= target && target < nums[mid]){
                    e = mid - 1;
                }else 
                    s = mid + 1;
            }else
                if(nums[e] >= target && target > nums[mid]){
                    s = mid + 1;
                }else 
                    e = mid -1 ;
            }

            return - 1;
        }

// search whther a element is present in a rotated array or not duplicate elements exists 
bool searchdup(vector<int>& nums, int target) {
      int s = 0; int n = nums.size() ;  
      int e = n - 1;
      set<int>num(nums.begin(), nums.end()) ;

      while(e >= s){
            int mid = (s + e)/2 ;

            if(nums[mid] == target){
                return true;
            }else if(nums[s] < nums[mid]){
                if(target >= nums[s] && target < nums[mid]){
                    e = mid -1 ;
                }else
                    s = mid + 1;
            }else if(nums[s] > nums[mid]){
                if(target > nums[mid] && target <= nums[e]){
                    s = mid + 1;
                }else 
                    e = mid - 1;    
            }else{
                s++ ;
            }
        }  
        return false ;
    }

int main(){

}
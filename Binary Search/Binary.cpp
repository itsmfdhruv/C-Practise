#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int h = nums.size() -1 , l = 0 ,mid ;
        while(l<=h)
        {   
            mid = (l+h)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]>target)h = mid - 1;
            else l = mid + 1;
        }
        return -1;   
    }
int lowerBound(vector<int> arr, int n, int x) {
	int s = 0 ;
	int e = n -1;
	while(e >= s){
		int mid = s + (e-s)/2 ;

		if(arr[mid] >= x){
			e = mid - 1;
		}else{
			s = mid + 1;
		}
	}
	return s ;
}
int upperBound(vector<int> &arr, int x, int n){
	int s = 0 ;
    int n = arr.size() ;
	int e = n -1;
	while(e >= s){
		int mid = s + (e-s)/2 ;

		if(arr[mid] > x){
            e = mid - 1;
        }
        else 
            s = mid + 1;
	}
	
    return s ;
    }

//search insertion position
int searchInsert(vector<int>& nums, int target) {
        // same as the lowerBound code 
    }
// finding ceil and floor of a arr
// ceil is smallest num >= x and floor and the largest num <= x
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = -1 , ceil = -1;
    int s= 0 , e= n-1;
    //finding floor
    while(e >= s){
        int mid = s + (e-s) /2 ;

        if(a[mid] <= x){
            floor = a[mid];
            s = mid + 1;
        }else
            e = mid - 1 ;
    }
    s= 0 ; e= n-1;
    //finding ceil
    while(e >= s){
        int mid = s + (e-s)/2 ;

        if(a[mid] >= x){
            ceil = a[mid]; 
            e = mid - 1;
        }else   
            s = mid + 1;
    }

    return make_pair(floor , ceil) ;
}
int main(){
    vector<int>nums={1,3,5,7} ;
    cout << searchInsert(nums, 2);
}
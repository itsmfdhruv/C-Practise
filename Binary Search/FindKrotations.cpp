#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
         int s = 0, e = arr.size() - 1;
        int ans = INT_MAX;
        int idx = -1;
        while (e >= s) {
            int mid = (s + e) / 2;
            // whole arr is sorted
            if (arr[e] >= arr[s]) {
                ans = min(arr[s], ans);
                idx= s;
                break;
            }
            // left part is sorted
            if (arr[s] <= arr[mid]) {
                ans = min(arr[s], ans);
                idx = s ;
                // look for right part
                s = mid + 1;
            } else {
                ans = min(ans, arr[mid]) ;
                idx = mid ;
                // look for left part
                e = mid - 1;
            }
        }
        return (find(arr.begin(), arr.end(), ans) - arr.begin()) ;
}

int main(){
    
}
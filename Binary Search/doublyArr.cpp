#include<bits/stdc++.h>
using namespace std;

//(even, odd) -> element on right halve and elimiante the left half 
//(odd, even) -> element on left half and eliminate the right half 

int singleNonDuplicate(vector<int>& arr){
    int s = 0, e = arr.size() -1 ;
    int n = arr.size() ;
    // edge cases 
    if(n == 1) return arr[0] ;
    if(arr[0] == arr[1]) return arr[0] ;
    if(arr[n-2] == arr[n-1]) return arr[n-1] ;

    while(e >= s){
        int mid = (e + s)/2 ;

        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid +1]){
            return arr[mid] ;
        }

        if((mid%2 == 0)&&arr[mid + 1] == arr[mid] || (mid%2!=0)&&arr[mid -1] == arr[mid]){
            // you're element is in the righ the half
            // eliminate the left half
            s =mid +1 ;
        }else   
            e =mid - 1;
    }
    return - 1;

}
int main(){

}
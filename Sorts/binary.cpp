#include<bits/stdc++.h>
using namespace std;

//recursive binary search
int binarySearchR(int arr[], int start,int end, int key){
    int mid = start + (end-start) / 2;

    if(arr[mid] == key){
        return mid ;
    }
    else if (arr[mid] > key){
        end = mid - 1;
        binarySearchR(arr, start, end ,key) ;
    }
    else{
        start = mid + 1;
        binarySearchR(arr ,start, end, key) ;
    }
}

//non-recursion binary search 
int binarySearch(int arr[], int arrSize, int key){
    int ans = -1 ;
    int s = 0 ;
    int e = arrSize - 1;
    while(e >= s){
        int mid = s + (e-s)/2 ;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key)
            e = mid -1 ;
        else
            s = mid + 1;
    }
    return ans ;
}
int main(){
    int arr[5] = {1,2,3,4,5} ;

    cout << binarySearch(arr,5,2) ;
    //fuck me 
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//better timecomplexiity than merge quick sort
void CountSort(int arr[], int n){
    int k = arr[0] ;
    for(int i = 0; i<n ; i++){
        k = max(k,arr[i]) ;
    }
    // better code for max element
    k = * max_element(arr, arr + n) ;

    int count[k+1]={0};
    for(int i =0 ; i <n ;i++){
        count[arr[i]]++ ;
    }
    for(int i = 1 ; i < n ; i ++){
        count[i]+=count[i-1];
    }
    int OutputArr[n] ;
    for(int i =0 ; i <n ; i++){
        OutputArr[--count[arr[i]]] = arr[i] ;
    }
    for(int i =0 ; i<n ;i++){
        arr[i] = OutputArr[i] ;
    }
}

int main(){
    
    int arr[10]={1,3,5,6,3,6,2,6,3,2};

    CountSort(arr, 10);
    for(int i =0 ; i< 10 ; i++){
        cout << arr[i] << " ";
    }

}
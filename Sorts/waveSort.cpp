#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int waveSort(int arr[], int n){
    for(int i = 1;i <= n-2;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i] , arr[i-1]) ;
        }
        if(arr[i]>arr[i+1] && i != n-1){
            swap(arr[i] , arr[i+1]) ;
        }
    }
}

int main(){
    int arr[] = {3,2,9,7,4,5} ;
    waveSort(arr,6) ;
    for(int i =0 ; i< 6 ;i++){
        cout << arr[i] << " " ;
    }
}
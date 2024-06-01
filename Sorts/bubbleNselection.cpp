#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,22,33,4,55,66,43,23} ;
    //using bubble sort 
    int arrSize = sizeof(arr) / sizeof(arr[0]) ;
    for(int i = 0; i < arrSize - 1; i++){
        for(int j = i+1; j < arrSize; j++){
            if(arr[i] >= arr[j])
                swap(arr[i], arr[j]) ;
        }
    }
    //using selection sort 
    for(int i = 0 ; i < arrSize -2 ; i++){
        int min = arr[i] ;
        for(int j = i + 1;j < arrSize -1; j++){
            if(arr[j] < min)
                min = arr[j] ;
        }
        swap(arr[i], min) ;
    }
    //using insertation sort
    for(int i = 1 ; i < arrSize ; i++){
        int curr = arr[i] ;
        int j = i - 1;

        while(arr[j] > curr && j >= 0){
            arr[j + 1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = curr ;
    }
}
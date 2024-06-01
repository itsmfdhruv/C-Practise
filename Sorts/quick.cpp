#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Swap(int arr[] , int i , int j){
    swap(arr[i], arr[j]) ;
}

int partition(int arr[] , int x  ,int y ){
    int pivot = arr[y] ;
    int i = x-1  ;
    for ( int j = x; j < y ;j++ ){
        if(arr[j] > pivot){
            i++ ;
            Swap(arr , i , j) ;
        }
    }
    Swap(arr, i+1, y) ;
    return i+1 ; 
}

void quickSort(int arr[],int x , int y ){
    if (x < y){
        int pi = partition(arr,x , y); 

        quickSort(arr , x , pi -1) ;
        quickSort(arr , pi+ 1, y) ;
    }
}

int main(){
    int arr[5] = {8,6,2,7,9} ;
    quickSort(arr , 0 , 4) ;

    for(int i = 0 ; i<  5 ; i++){
        cout << arr[i] << " ";
    }
}
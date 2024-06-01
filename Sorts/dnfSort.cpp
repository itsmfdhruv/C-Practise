#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dnfSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1 ;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]) ;
            low ++;
            mid ++;
        }
        if(arr[mid]==1){
            mid ++ ;
        }
        if(arr[mid] ==2 ){
            swap(arr[mid], arr[high]);
            high -- ;
        }
    }

}

int main(){
    int arr[] = {0,1,1,2,1,1,1,2,0} ;
    dnfSort(arr, 9);

    for(int i =0 ; i<9 ; i++){
        cout << arr[i] ;
    }
}
//questioable algo
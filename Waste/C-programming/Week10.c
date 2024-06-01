#include<stdio.h>

void swap(int *a , int *b){
    int tmp = * a ;
    * a = * b ;
    * b = tmp ;
}
//p2
void merge(int arr[], int l , int m , int r){
    int n1 = m - l + 1 ;
    int n2 = r - m ;

    int left_arr[n1] ;
    int right_arr[n2] ;

    for(int i = 0; i< n1 ;i ++){
        left_arr[i] = arr[l + i];
    }

    for(int j = 0; j < n2;j++){
        right_arr[j]  = arr[m +1 + j] ;
    }

    int i =0 , j = 0, k = l ;
    while(i < n1 &&  j < n2){
        if(left_arr[i] < right_arr[j]){
            arr[k] = left_arr[i++] ;
        }else 
            arr[k] = right_arr[j++];
        k++ ;
    }

    while(i < n1){
        arr[k++] = left_arr[i++] ;
    }
    while(j < n2){
        arr[k++] = right_arr[j++] ;
    }
}
void MergeSort(int arr[], int l , int r ){
    if( l < r ){
        int mid = (l + r) /2 ;

        MergeSort(arr, l, mid) ;
        MergeSort(arr, mid+1, r) ;

        merge(arr, l , mid , r) ;
    }
}
//p3
void waveSort(int arr[], int arrSize){
    for(int i = 1 ; i < arrSize -1; i++){
        if(arr[i] >= arr[i-1] && arr[i+1] >= arr[i]){
            swap(&arr[i], &arr[i+1]) ;
        }else if(arr[i] <= arr[i-1] && arr[i+1] <= arr[i]){
            swap(&arr[i], &arr[i+1]) ;
        } 
    }
    for(int i = 0 ; i < arrSize ;i++)
    printf("%d ", arr[i]) ;
}
//p4
int binarySearch(int arr[], int target, int l , int r ){

    while(l <= r){
        int mid = l  + (r - l)/2 ;

        if(arr[mid] == target){
            return mid ;
        }else if(arr[mid] > target){
            binarySearch(arr, target, l, mid -1) ;
        }else   
            binarySearch(arr, target, mid + 1, r) ;
    }
    return -1 ;
}
void sectorSort(int arr[],int n ){
    int result[n] ;
    int even[100], odd[100] ;
    for(int i = 0; i < n ; i++){
        if(!(i % 2)){
            even[i/2] = arr[i] ;
        }else
            odd[i/2] = arr[i] ;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10} ;
    printf("%d ", binarySearch(arr, 8 , 0 ,9) );
    
    return 0 ;
}
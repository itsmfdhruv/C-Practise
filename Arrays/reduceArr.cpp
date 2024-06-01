#include<bits/stdc++.h>
using namespace std;

void reducedArr(vector<int>& arr, int n){
    vector<pair<int, int>> indexData(n) ;

    for(int i = 0 ;i < n ; i++){
        indexData[i] = {arr[i], i} ;
        }

    sort(indexData.begin(), indexData.end()) ;

    for(int i =0 ; i < n ; i++){
        arr[indexData[i].second] = i ;
    }
}

int main(){
    vector<int> arr ={10,16,7,14,5,3,12,9} ;

    reducedArr(arr,arr.size()) ;

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " " ;
    }
}   
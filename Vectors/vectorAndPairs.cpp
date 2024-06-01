#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool MyCompare(pair <int , int>p1 , pair <int , int>p2){
    return p1.first < p2.first ;
}
int main(){
    vector<pair <int , int>>v;
    int arr[8] = {12,4,21,5,9,2,3} ;
    for(int i = 0 ; i <8; i++){
        v.push_back(make_pair(arr[i], i)) ;
    }
    sort(v.begin(), v.end(), MyCompare);

    for(int i =0 ; i<v.size(); i++){
        arr[v[i].second] =i ;
    }

    for(int i = 0;i<v.size(); i++){
        cout << arr[i] ;
    }

}

#include<bits/stdc++.h>
using namespace std;
//finding the element repeated more than N/2
int MooresAlgo(vector<int>v){
    int n = v.size() ;
    int count = 0;
    int ele ;
    //this will only find the element present more than half
    for(int i = 0 ; i < n ; i++){
        if(count == 0){
            ele = v[i] ;
            count ++;
        }
        else if(v[i] == ele){
            count ++ ;
        }
        else {
            count -- ;
        }
    }
    //count1 is for actual numberof times there's the repeation
    int count1 = 0 ;
    for(int i = 0; i< n ; i++){
        if(v[i] == ele){
            count1++ ;
        }
    }
    if(count1 > (v.size() / 2)){
        return ele ;
    }

    return -1 ;
}

int majorityElement(vector<int>v){
    int n = v.size() ;

    map<int , int> mpp ;

    for(int i = 0 ; i < n ; i++){
        mpp[v[i]]++ ;
    }

    for(auto it : mpp){
        if(it.second > (n/2)){
            return it.first ;
        }
    }

    return -1 ;
}

int main(){
   
}
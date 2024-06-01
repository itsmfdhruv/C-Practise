#include<bits/stdc++.h>
using namespace std ;

int subarrayWithSumK(vector<int>a , int b){
    int count = 0 ;
    map<int , int> mp;
    mp[0] = 1;
    int xsum = 0;
    for(int i = 0; i < a.size(); i++){
        xsum ^= a[i] ;
        int prefixsum = xsum ^ b ;
        count += mp[prefixsum];
        mp[xsum]++ ;
    }
    return count ;
}

int main(){


}
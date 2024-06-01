#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// in this question any time no mattar the value the valu eo fn you will alawys get the emptyArr.size() = 2 3, 4, 5.. are not possible 

vector<int> majorityElement(vector<int> v){
    sort(v.begin(), v.end()) ;
    vector<int> mera ;
    int count = 1 ;
    for(int i = 0 ; i <= v.size() - 1 ; i++){
        if(v[i] == v[i+1]){
            count ++;
        }else{
            if(count > v.size() / 3){
                mera.push_back(v[i]);
            }
            count = 1;
        }

        if(mera.size() ==2 ){
            break ;
        }
    }
    return mera ;
}
int main(){
    vector<int> v = {1,2,3,4,5,5,5,5,5,6,4,4,4,1,2,2,2,2} ;
    vector<int> ans = majorityElement(v) ;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }
}
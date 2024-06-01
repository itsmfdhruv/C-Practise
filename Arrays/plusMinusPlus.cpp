#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
    vector<int> posi , negi, output;

    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] > 0){
            posi.push_back(nums[i]) ;
        }
        if(nums[i] < 0){
            negi.push_back(nums[i]) ;
        }
    }

    int t1 = 0 , t2 = 0  , t3 = 0 ;
    while(t3 != nums.size()){
        output.push_back(posi[t1]) ;
        output.push_back(negi[t2]) ;
        t1++ ;
        t2++ ;
        t3 = t3 +2 ;
    }
    return output ;
}
int main(){
    vector<int> testCase = {3,1,-2,-5,2,-4} ;
    vector<int> output = rearrangeArray(testCase) ;
    for(int i = 0 ; i < output.size() ; i++){
        cout << output[i] ;
    }
    return 0 ;
}
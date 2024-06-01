#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans ;
vector<vector<int>> nextPermutation(vector<int> &permutation, int idx){
    if(ans.size() == permutation.size()){
        ans.push_back(permutation) ;
        return ;
    }

    for(int i = 0; i < permutation.size(); i++){
        swap(permutation[i], permutation[idx]) ;
        nextPermutation(permutation, idx +1) ;
        swap(permutation[i], permutation[idx]) ;
    }

    return ans ;
}

//shortcut code for permutations

vector<vector<int>> permutateMe(vector<int>& nums){
    sort(nums.begin(), nums.end());
    do{
        ans.push_back(nums) ;
    }while(next_permutation(nums.begin(), nums.end())) ;

    return ans;
}

int main(){

}
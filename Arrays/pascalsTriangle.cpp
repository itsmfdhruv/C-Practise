#include<bits/stdc++.h>
using namespace std;
// working coding 
    int fac(int n) {
        if (n == 0 || n == 1)
            return 1;
        return n * fac(n - 1);
    }

    int nCr(int n, int r) { 
        return fac(n) / (fac(n - r) * fac(r)); }
    int betternCr(int n , int r){
        long long res = 1 ;
        for(int i = 0 ; i < r ; i ++){
            res = res * (n-i) ;
            res = res / (i+1) ;
        }
        return res ;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> rows;
            for (int j = 0; j <= i; j++) {
                rows.push_back(nCr(i, j));
            }
            ans.push_back(rows);
        }
        return ans;
    }

    void printPascal(int row){
        int res = 1;
        for(int col = 1; col < row ; col++){
            res = res * (row - col) ;
            res /= col ;
            cout << res << " " ;
        }
    }

int main(){
    vector<vector<int>>nums = generate(4) ;
    for(int i = 0 ; i <nums[nums.size()-1].size() ; i ++){
        for(int j = 0; j <= i ; j++){
           cout << nums[i][j] << " " ;
        }
       cout << endl ;
    }
    printPascal(5) ;

    //cout << nCr(0,0) ;
}
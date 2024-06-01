#include<bits/stdc++.h>
using namespace std;
//yeee i'll rotate yo uby 90 degree anitclockwise n* n mtx
// maaa kasam bohot tagda algoritm hai 
//fuck the above code !

void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                swap(matrix[i][j], matrix[j][i]) ;
                swap(matrix[i][j], matrix[i][n-1-j]) ;
            }
            
        }
        

    }

// row col
// col row_end - row
//row_end - row , col_end + 1 - row
//col_end + 1, row
int main(){
    vector<vector<int>> mtx = {{1,2,3},
                               {4,5,6},
                               {7,8,9}} ;
    rotate(mtx) ;
    for(int i = 0 ; i < mtx[0].size(); i++){
        for(int j = 0 ; j < mtx.size(); j++){
            cout << mtx[i][j] ;
        }
        cout << endl ;
    }
}
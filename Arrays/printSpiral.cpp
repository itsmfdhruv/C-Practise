#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_start = 0;
        int col_start = 0;
        int col_end = matrix[0].size() - 1;
        int row_end = matrix.size() - 1;
        vector<int> ans;
        while (row_start <= row_end || col_start <= col_end) {
            for (int i = col_start; i <= col_end; i++) {
                ans.push_back(matrix[row_start][i]);
            }
            row_start++;

            for (int i = row_start; i <= row_end; i++) {
                ans.push_back(matrix[i][col_end]);
            }
            col_end--;
            if (row_end >= row_start) {
                for (int i = col_end; i >= col_start; i--) {
                    ans.push_back(matrix[row_end][i]);
                }
                row_end--;
            }

            if (col_end >= col_start) {
                for (int i = row_end; i >= row_start; i--) {
                    ans.push_back(matrix[i][col_start]);
                }
                col_start++;
                // cout << row_start <<" "<< row_end << " " << col_start <<"
                // "<<col_end ;
            }
        }
        return ans ;
    }

int main(){
    vector<vector<int>>mtx = {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}} ;

    vector<int> result = spiralOrder(mtx) ;
    for(int i = 0 ; i < result.size(); i++){
        cout << result[i] << " " ;
    }
  
}
///code works
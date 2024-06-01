#include<bits/stdc++.h>
using namespace std;

void makeZeros(vector<vector<int>>& mtx , int x , int y ){
    // making the col zero 
    for(int i = 0; i <mtx[0].size(); i++){
        mtx[x][i] = 0;
    }
    // making the row zero 
    for(int i = 0; i <mtx.size(); i++){
        mtx[i][y] = 0;
    }
}

void setZeroes(vector<vector<int>>& matrix) {
    vector<vector<int>>copy_mtx = matrix ;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j <matrix[0].size() ; j++){
                if(copy_mtx[i][j] == 0){
                    makeZeros(matrix , i , j) ;
                }
            }
        }
    }
// best opitmal solution for setZeros 
class OptimalSolution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    if(j!=0)
                        matrix[0][j] = 0;
                    else
                        col0=0;
                }
            }
        }
         for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<m;j++) matrix[0][j]=0;
        }
        if(col0==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};
int main(){
    vector<vector<int>> matrice = {{0, 1, 2, 0},{3, 4, 5, 2},{1 ,3, 1, 5} };
    setZeroes(matrice) ;

    for(int i = 0 ; i < matrice.size() ; i++){
            for(int j = 0 ; j <matrice[0].size() ; j++){
                cout << matrice[i][j] << " " ;
            }
            cout << endl ;
    }

    return 0 ;
}

/*
find the zeros in the mtx
1 2 5 3
2 4 0 5
1 2 3 7 
9 8 6 2
*/
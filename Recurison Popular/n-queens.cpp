#include <iostream>
#include <vector>

using namespace std;

int display(vector<vector<int>> & board){
    for (auto row : board){
        for (auto element : row ){
            cout << element << " ";
        }
        cout << endl ;
    }
    cout << endl ;
}

bool isSafe(vector<vector<int>> & board , int x , int y , int n) {
    // checking for the rows in arbitutary col 
    for(int row = 0 ; row < n ; row++ ){
        if(board[row][y] == 1){
            return false ;
        }
    }

    //checking for upper diagonal fo the maze
    int row = x ; 
    int col = y ;
    while(row > 0 && col > 0){
        if(board[row][col] == 1){
            return false ;
        }
        row -- ;
        col -- ;
    } 
    //checking for lower diagonal of the maze 
    while(row < n && col >= 0){
        if(board[row][col] == 1){
            return false ;
        }
        row ++;
        col -- ;
}
    return true ;
    }

bool n_queen(vector<vector<int>> &board, int x , int n){
    if(x >= n){
        display(board) ;
        return false  ;
    }

    for(int col = 0 ;col < n ; col ++){
        if(isSafe(board, x , col , n )){
        board[x][col] = 1 ;

        if(n_queen(board , x + 1, n)){
            return true ;
        }

        board[x][col] = 0 ;

        }
    }
    return false ;
}
int main(){
    int n;
    cin >> n ;
    vector<vector<int>>board(n , vector<int>(n , 0)) ;
    n_queen(board , 0 , n) ;

}

//improvement can be done 
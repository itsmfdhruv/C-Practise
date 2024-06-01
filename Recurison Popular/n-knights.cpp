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
}
bool isValid(int row , int col,vector<vector<int>>&board ){
    if(row >=0 && row < board.size() && col >=0 && col < board[0].size()){
        return true ;
    }
    return false ;
}

bool isSafe(vector<vector<int>>&board , int row , int col){
    if(isValid(row , col , board )){
        if(board[row-2][col+1] == 1){
            return false ;
        }
    }
    if(isValid(row , col , board )){
        if(board[row-2][col-1] == 1){
            return false ;
        }
    }
    if(isValid(row , col , board )){
        if(board[row-1][col+2] ==1 ){
            return false ;
        }
    }
    if(isValid(row , col , board )){
        if(board[row+1][col+2]== 1){
            return false ;
        }
    }
    return true ;
}



bool n_knights(vector<vector<int>>&board , int row , int col , int knights){
    if(knights == 0){
        display(board) ;
        return false ;
    }

    if(col == board[0].size() ){
        
        return n_knights(board, row + 1, 0, knights) ;
    }

    if(isSafe(board , row , col )){
        board[row][col] =1 ; 
        if(n_knights(board , row, col +1 , knights -1 )){
            return true ;
        }
        board[row][col] =0 ;
    }
    n_knights(board , row, col + 1, knights) ;

}


int main(){


    int n;
    cin >> n ;
    vector<vector<int>>board(n , vector<int>(n , 0)) ;
    n_knights(board, 0 , 0 , 4) ;
}

//unsolved 
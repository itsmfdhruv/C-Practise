#include <iostream>
#include <vector>
using namespace std;

bool searchRow(vector<vector<int>>& board,int y,int target){
    for(int i = 0 ; i  <= 8 ; i++){
        if( board[i][y]== target ){
            return true ;
        }
    }
    return false ;
}

bool searchCol(vector<vector<int>>& board,int x,int target){
    for(int i = 0 ; i  <= 8 ; i++){
        if( board[x][i]== target ){
            return true ;
        }
    }
    return false ;
}

bool searchBox(vector<vector<int>>& board, int x , int y , int target){

}

int main(){
    vector<vector<int >>board ={
        {5,3,0},{0,7,0},{0,0,0},
        {6,0,0},{1,9,5},{0,0,0},
        {0,9,8},{0,0,0},{0,6,7},
        {8,0,0},{0,6,0},{0,0,3},
        {4,0,0},{8,0,3},{0,0,1},
        {7,0,0},{0,2,0},{0,0,6},
        {0,6,0},{0,0,0},{2,8,0},
        {0,0,0},{4,1,9},{0,0,5},
        {0,0,0},{0,8,0},{0,7,9}
    };
    int n ;
    cin >> n ;
}

/* ***CHECKLIST***
make a board 
func search
    search row + col + box
recursion
next 
*/
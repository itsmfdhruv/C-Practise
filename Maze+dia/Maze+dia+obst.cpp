#include <iostream>
#include <vector>

using namespace std;

void allPaths(string paths , int row, int col , vector<vector<bool>>& mazeObs){
    if(row == mazeObs.size() -1 && col == mazeObs[0].size() -1){
        cout << paths << endl ;
    }

    if(!mazeObs[row][col]){
        return ;
    }
    //I am considering this square in my path so mark as false 
    mazeObs[row][col] = false ;
    if(row < mazeObs.size() -1 ){
        allPaths(paths + "D", row + 1, col , mazeObs) ;
    }
    if(col < mazeObs[0].size() -1){
        allPaths(paths + "R", row, col +1 , mazeObs) ;
    }
    if(row >0){
        allPaths(paths + "U", row - 1, col , mazeObs) ;
    }
    if(col > 0){
        allPaths(paths + "L" , row , col -1 , mazeObs) ;
    }
    // everythin ends here
    // you need to undo the changes yo udid for th esecond case so (backtracking)
    mazeObs[row][col] = true ;
}

int main() {
    int row, col;
    cin >> row >> col;

    vector<vector<bool>> mazeObs(row, vector<bool>(col, true));

    mazeObs[0][2] = false;
    mazeObs[1][0] = false;
    allPaths("", 0, 0, mazeObs);
    return 0;
}


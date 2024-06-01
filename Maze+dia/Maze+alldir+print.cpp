#include <iostream>
#include <vector>

using namespace std;



void allPaths(string paths , int row, int col , vector<vector<bool>>& mazeObs, vector<vector<int>>& Printpath, int step ){
    if(row == mazeObs.size() -1 && col == mazeObs[0].size() -1){
        Printpath[row][col] = step ;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << Printpath[i][j] << " ";
            }
            cout << endl;
        }
        cout << paths << endl;
    }

    if(!mazeObs[row][col]){
        return ;
    }
    //I am considering this square in my path so mark as false 
    mazeObs[row][col] = false ;
    Printpath[row][col] = step ;
    if(row < mazeObs.size() -1 ){
        allPaths(paths + "D", row + 1, col , mazeObs,Printpath,  step +1) ;
    }
    if(col < mazeObs[0].size() -1){
        allPaths(paths + "R", row, col +1 , mazeObs,Printpath,  step +1) ;
    }
    if(row >0){
        allPaths(paths + "U", row - 1, col , mazeObs,Printpath,  step +1) ;
    }
    if(col > 0){
        allPaths(paths + "L" , row , col -1 , mazeObs,Printpath,  step +1) ;
    }
    // everythin ends here
    // you need to undo the changes yo udid for th esecond case so (backtracking)
    mazeObs[row][col] = true ;
    Printpath[row][col] = 0 ;
}

int main() {
    int row, col;
    cin >> row >> col;

    vector<vector<bool>> mazeObs(row, vector<bool>(col, true));

    mazeObs[0][2] = false;
    mazeObs[1][0] = false;

    
    vector<vector<int>> Printpath(3 , vector<int>(3 , 0)) ;

    allPaths("", 0, 0, mazeObs, Printpath,1);
    return 0;
}


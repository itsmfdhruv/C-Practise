#include <iostream>
#include <vector>
 
using namespace std;
void count(string path , int row , int col){

    
if(row == 1 && col == 1 ){
    cout << path  << endl  ;
}
if(row > 1 && col > 1){
    count(path + "dia", row -1, col -1) ;
}

if(row > 1){
    count(path + "D" , row -1 , col) ;
}
if(col > 1){
    count(path + "R", row, col -1  ) ;
}

}
int main() {
    int row , col ;
    cin >> row >> col ;
    count("" ,row , col) ;
}

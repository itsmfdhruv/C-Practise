#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>squares ;
    
    for(int i = 0; i * i < 7; i++){
        squares.push_back(i*i);
    }
    for(int i = 0; i < squares.size();i++){
        cout << squares[i] ;
    }
    return 0 ;
}
/*
make a array whoes sqaure
*/
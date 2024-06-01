#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char ResistorColors[10] = {'k','b','r','o','y','g','B','v','G','w'} ;
    char InputColors[3] ;
    

    for(int i = 0 ; i < 3 ; i++){
        cin >> InputColors[i] ; 
        //first two are digits and last one is for multiplier
        }

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            if(InputColors[i] == ResistorColors[j]){
                InputColors[i] =  j + '0' ;
            }
        }
    }


    int ans = ((InputColors[0] - '0') * 10 + (InputColors[1] - '0')) * pow(10 , (InputColors[2] - '0')) ;
    cout << ans ;
}
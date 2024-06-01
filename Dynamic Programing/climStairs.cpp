#include<bits/stdc++.h>
using namespace std;
// recursion + dp 
int climbStairs(int n , unordered_map<int, int>&memo){
        if(n == 0||n == 1){
            return 1;
        }
        if(memo.find(n) == memo.end()){
            memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo) ;
        }

        return memo[n] ;
    }
    int climbStairs(int n) {
    unordered_map<int, int> memo;  
    return climbStairs(n, memo) ;
    }

// tabular method 

int climbStairs(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    int prev = 1 , curr = 1;
    for(int i = 2; i <= n ; i++){
        int temp = curr ;
        curr = prev + curr ;
        prev = temp ;
    }
    return curr ;
}
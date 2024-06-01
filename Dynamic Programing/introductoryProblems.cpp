#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int>& dp){
    if(n == 0 || n == 1){
        return n ;
    }
    if(dp[n] != -1) return dp[n] ;

    return dp[n] = fib(n- 1, dp) + fib(n- 2, dp) ; 
}

int main(){
    // for fib with dp array 
int n ;
cin >> n ;
vector<int>dp(n, -1) ;
cout << dp[2];

    // fib with O(1) space
int prev2 = 0;
int prev = 1;

for(int i=2; i<=n; i++){
int cur_i = prev2+ prev;
prev2 = prev;
prev= cur_i;
}
cout<<prev;

}
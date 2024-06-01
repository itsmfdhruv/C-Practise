#include<iostream>
#include<math.h>
using namespace std;


int floorSqrt(int n){
    int low = 1, high = n ;
    int res = - 1;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if (mid * mid <= n){
            low = mid + 1;
            res = mid ;
        }
        else 
            high = mid -1 ;
    }
    return res ;
}
//returning the mth root of the number n

int func(int mid, int n){
    long long ans = 1 ;
    while(n > 0){
        if(n % 2 == 1){
            ans = ans * mid ;
            n = n- 1;
        }else{
            mid = mid * mid ;
            n /= 2;
        }
    }
    return ans ;
}

int pow(int num, int expo){
    if(expo == 0){
        return 1;
    }
    return num * pow(num, expo -1 );
}

int NthRoot(int n , int m ){
    int low = 1, high = m ;

    while(low <= high){
        int mid = (low + high) /2 ;
        int midN = func(mid, n ) ;
        if(midN ==m){
            return mid ;
        }else if(midN< m)
            low = mid + 1 ;
        else 
            high = mid -1 ;
    }
    return -1 ;
}

int main(){
    cout << NthRoot(27 , 3) ;
    
}
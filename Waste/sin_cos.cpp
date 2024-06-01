#include<stdio.h>

long double fac(long double n){
    if(n == 1 || n == 0){
        return 1 ;
    }

    return n * fac(n-1);
}

long int power(int n , int expo){
    if(expo == 1){
        return n ;
    }
    if(expo == 0){
        return 1 ;
    }
    long int ans = n * power(n , expo-1) ;
    return ans ;
}

int main(){
    float sin = 0 , cos = 0 ;
    long double x ;//x is angle 
    float n ; 
    scanf("%f\n", &x) ;
    scanf("%lf", &n) ;

    for(int i =0 ; i <= n ; i++){
        sin += power(-1 , i) * power(x, 2 * i) / fac(2 * i) ;
    }
    for(int i =0 ; i <= n ; i++){
        cos += power(-1 , i) * power(x, 2 * i + 1) / fac(2 * i +1) ;
    }

    printf("%f\n", sin);
    printf("%f", cos);
}

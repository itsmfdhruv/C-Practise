#include<stdio.h> 

int fib(int n){
    int t1 = 0 ;
    int t2 = 1 ;
    int t3 , ans;
    for(int i =1; i <= n ; i++){
        ans = ans + t2 ;
        int temp 
    }
}

int main(){
    for(int row = 1; row <= 5; row++){

        //printing spaces 
        for(int space = 1; space <=5 - row; space++){
            printf(" ") ;
        }
        //printing star after it 
        for(int star=1 ; star <= row ; star ++){
            printf("* ");
        }
        //goto next column 
        printf("\n") ;
    }
}
/*
*/
#include<stdio.h>
#include <math.h>
//basic swap functions
void swap(int matrix[][3], int row1, int col1, int row2, int col2) {
    int temp = matrix[row1][col1];
    matrix[row1][col1] = matrix[row2][col2];
    matrix[row2][col2] = temp;
}
//p1
void lowertrangular(int n , int arr[][n]){
    for(int line = 0; line < n; line++ ){
        for(int i = 0 ; i<= line; i++){
            printf("%d ", arr[line][i]) ;
        }
        printf("\n") ;
    }
}

//p2
void RotateMe(int arr[][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j =0 ; j < 3 && i != j; j++ ){
            swap(arr, i , j , j , i) ;
        }
    }
    for ( int col = 0 ; col < 3 ; col++){
        swap(arr, 0 , col , 2, col) ;
    }
    for(int i = 0; i< 3 ; i++){
        for(int j = 0;j < 3 ; j++){
            printf("%d ", arr[i][j]) ;
        }
        printf("\n") ;
    }
}
//p3 here i have done arrA mulitple by arrB
void multiply(int n1 ,int n2 , int n3, int arrA[][n2], int arrB[][n3]) {
    int arr[n1][n3] ;
    for(int i = 0 ; i < n1 ; i++){
        
        for(int k = 0; k < n3 ; k++){
            int sum = 0 ;
            for(int j= 0 ; j < n2 ; j++){
                sum += arrB[i][j] * arrA[j][k] ;
            }
            arr[i][k] = sum ;
        }
    }
    //print arr
    for(int i = 0;i < n1; i++ ){
        for(int j = 0; j <n3 ;j++){
            printf("%d ", arr[i][j]) ;
        }
        printf("\n") ;
    }
}

//p4
void findAvgMatrix(int n ,int m ,  int arr[n][m]){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int sum = 0 , count = 0;

            for(int di = i - 1; di <= i+ 1; di ++){
                for(int dj = j - 1; dj <= j + 1; dj ++){

                        if(di >= 0 && di < n && dj < m && dj >= 0){
                            sum += arr[di][dj] ;
                            count ++ ;
                        }
                    
                }
            }    
            arr[i][j] = count ? (sum / count) : 0 ;
        }
    }
}
int main(){

    //please as according to your wish update main function and see the other functions working 
    int n1, n2 ;
    int n2, n3 ;
    int arrA[n1][n2], arrB[n2][n3] ;


    for(int i = 0 ; i< n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            scanf(" %d", arrA[i][j]) ;
        }
    }

    for(int i = 0 ; i< n2 ; i++){
        for(int j = 0 ; j < n3 ; j++){
            scanf(" %d", arrB[i][j]) ;
        }
    }

    muliply(n2 , n3, arrA, arrB) ;
    return 0 ;
}

/*
1 4 7  3 6 9
2 5 8  2 5 8
3 6 9  1 4 7


*/
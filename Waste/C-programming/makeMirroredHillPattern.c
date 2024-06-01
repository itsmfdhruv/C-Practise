#include<stdio.h>


int main(){
    for(int row = 1 ; row <= 5 ; row ++){
        for(int star = 1 ; star <= row ; star++){
            if((star + row ) % 2 == 0)
                printf("* ") ;
            else
                printf("  ") ;
        }
        for(int space = 9 - 2 * row; space >=0 ;space --){
            printf("  ");
        }
        for(int star = row ; star >= 1; star--){
            if((star + row ) % 2 != 0)
                printf("  ") ;
            else
                printf(" *") ;
        }
        printf("\n") ;
    }
    for(int row = 4 ; row >= 1 ; row--){
        for(int star = 1 ; star <= row ; star++){
            if((star + row ) % 2 == 0)
                printf("* ") ;
            else
                printf("  ") ;
        }
        for(int space = 9 - 2 * row; space >=0 ;space --){
            printf("  ");
        }
        for(int star = row ; star >= 1; star--){
            if((star + row ) % 2 != 0)
                printf("  ") ;
            else
                printf(" *") ;
        }
        print("\n") ;
    }
}
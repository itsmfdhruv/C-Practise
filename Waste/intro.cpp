#include<stdio.h>
//medium beginer level question for noobs

int pow(int n, int expo){
    int result = 1;
    for(int i =1 ; i <= expo  ; i++){
        result *= n ;
    }
    return result ;
}


int main(){
    char resistorColor[] = {'k', 'b' ,'r', 'o', 'y', 'g', 'B', 'v', 'G', 'w'} ;

    char ansNum[3];

    for(int i = 0; i <=2 ; i++ ){
        scanf(" %c", &ansNum[i]) ;
        for(int j = 0; j < 9 ; j++){
            if(ansNum[i] == resistorColor[j]){
                ansNum[i] = j + '0';   
                }
        }
    }

   int result = ((ansNum[0] - '0')* 10 + (ansNum[1] - '0'))* pow(10 , ansNum[2] - '0') ;
   printf("%d", result ) ;

    
}

//get a deci an octa decimal number print the hexa of the result


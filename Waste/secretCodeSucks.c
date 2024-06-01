#include <stdio.h>
#include <string.h>

int deciToBinary(char * binary){
    int x = 1 ;
    int ans = 0;
    for(int i = strlen(binary) - 1; i >= 0; i--){
        if(binary[i] == '1'){
            ans += x ;     
        }
        x *= 2 ;
    }
    return ans ;
}

int main() {
    char binaryCode[100] ;
    int arrIdx =0 ;
    do{
        char input ;
        scanf("%c", &input) ;
        if(input == '-'){
            binaryCode[arrIdx++] = '1'; 
        }else if(input == '.'){
            binaryCode[arrIdx++] = '0';
        }else if(input == '*'){
            binaryCode[arrIdx] = '\0' ;
            printf("%d ", deciToBinary(binaryCode)) ;
            arrIdx = 0 ;
            
        }

        if(input=='#'){
            binaryCode[arrIdx] = '\0';
            printf("%d \n", deciToBinary(binaryCode)) ;
            break;
        }
    }while(1) ;

    return 0;
}
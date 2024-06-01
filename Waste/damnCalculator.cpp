#include<stdio.h>
#include<bits/stdc++.h>

// this code needs some corrections for var result ;
int octaToDeci(int octaNum ){
    int x = 1;
    int result = 0;
    int maxPower = 1 ;
    while(maxPower <= octaNum){
        maxPower *= 16 ;
    }
    maxPower /= 16 ;

    while(octaNum > 0){
        int last_digit = octaNum / maxPower;
        octaNum -= maxPower * last_digit ;
        maxPower /= 16 ;
        result = result* 10 + last_digit ;
    }

    return result ;

}   

char* deciToHexa(int deciNum){
    char * result = "" ;

    int x = 1;
    while(x <= deciNum){
        x *= 16 ;
    }
    x/= 16 ;


    while(deciNum > 0 ){
        int last_digit = deciNum / x ;
        deciNum -= last_digit * x ;
        x /= 16 ;

        if(last_digit <= 9){
            result += last_digit - '0' ;
        }else if(last_digit >= 10 && last_digit <= 15){
            result = result + ((last_digit - '0')) ;
        }
        return result ;

    }

}

int main(){
    int deciNum, octaNum ;
    char sign ;

    scanf("%d\n", deciNum ) ;
    scanf("%c\n", sign) ;
    scanf("%d", octaNum) ;
}
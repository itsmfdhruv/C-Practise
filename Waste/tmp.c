#include<stdio.h>

int main(){
    char * s = "abc" ;
    char * t = "abcc" ;

    for(; *s == *t ; ++s, ++t){
        if(*s == '\0'){
            printf("return");
        }
    }
    return 0 ;
}
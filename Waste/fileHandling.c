#include <stdio.h> 

int main(){
    FILE *fp ;
    char s[80] ;
    fp = fopen("hellofuckers.txt", "w") ;//w for wrting the file 

    if(fp = NULL){
        printf("there's a error " ) ;

        return 1 ;// one can also use exit(); or exit(1) ; exist the program with error code 1 
    }

    printf("enter the set of values for wrting the file: ") ;

    while( strlen(gets(s)) > 0 ){
        fputs(s, fp) ;
        fputs("\n", fp) ;
    }
    //wrting done 
    fclose(fp) ;
    return 0 ;

}
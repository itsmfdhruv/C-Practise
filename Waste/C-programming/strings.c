#include<stdio.h>
#include<string.h>
//p1
void RevString (char* str, int len){
    char *revStr; 
    int i ;
    for(i = 0; str[i] != '\0' ; i++){
        revStr[i] = str[len-1-i] ;
    }
    revStr[i] = '\0' ;
    printf("%s", revStr) ;
}
//p2
void displayVowel(char str[], int len) {
    int vowel = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == (char)'a' || str[i] == (char)'e' || str[i] == 'i' || str[i] == (char)'o' || str[i] == 'u') {
            vowel++;
        } else if (str[i] == ' ') {
            len--;
        }
    }
    printf("%d %d", vowel, len - vowel);
}
//p3
int isPalindrome(char str[], int len){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != str[len - 1 - i]){
            return 0;
        }
    }
    return 1;
}
//p4
void removeChar(char str[], char remove){
    for(int i = 0;str[i] != '\0'; i++){
        if(str[i] != remove)
            printf("%c", str[i]) ;
    }
}
//p5
typedef struct{
    int key ;
    int data ;
}arr ;

int maxSubStrlen(char str[], int len){
    char * strans ;
    for(int i = 1; i < len ; i++){
        
    }
    return strlen(strans) ;
}
//p6
char *concatenate(char str1[], char str2[]){
       int i = 0;
       int l1 = strlen(str1) ;
       while(str2[i] !='\0'){
        str1[l1 + i]  = str2[i] ;
        i++ ;
       } 
       str1[l1 + i] = '\0' ;
       
       return str1 ;
    }

int main(){
    char str1[] = "hello ";
    char str2[] = "world" ;
    printf("%s", concatenate(str1, str2)) ;
    return 0 ;
}
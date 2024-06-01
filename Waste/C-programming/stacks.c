#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
typedef struct {
    int size ;
    int top ;
    int * arr ;
}Stack ;

bool isEmpty(Stack * st){
    if(st->top == -1){
        return true ;
    }
    return false ;
}

bool isFull(Stack * st){
    if(st->top == st->size - 1){
        return true ;
    }
    return false ;
}

int pop(Stack * st){
    if(isEmpty(st)){
        printf("Stack underFlow") ;
        return -1; 
    }else{
        int tmp = st->arr[st->top] ;
        st->top = st->top - 1 ;
        return tmp ;
    }
}

void push(Stack * st, int val){
    if(isFull(st)){
        printf("Stack Overflow") ;
        return ;
    }else{
        st->top = st->top + 1;
        st->arr[st->top] = val ;
    }
}

int count(Stack * st){
    return st->top + 1 ;
}

int peek (Stack * st , int pos ){
    if(isEmpty(st) || pos > st->size ){
        return -69 ;
    }else{
        return st->arr[pos - 1] ;
    }
}
int prec(char ch){
    if(ch == '*' || ch ==  '/'){
        return 3 ;
    }else if(ch == '+' || ch == '-'){
        return 2 ;
    }else 
        return 0 ;
}

bool isoperator(char ch){
    if( ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return true ;
    }else 
    return false ;
}

char * InfixtoPostfix(char * infix){
    Stack * st = (Stack*)malloc(sizeof(Stack));
    st->size = 80 ;
    st->top = - 1;
    st->arr = (int *) malloc(st->size * sizeof(int)) ;
    char * postfix = (char * )malloc((strlen(infix) +1)*sizeof(char ));
    int i = 0 ; 
    int j = 0 ;
    while(infix[i] != '\0' ){
        if(!isoperator(infix[i])){
            postfix[j++] = infix[i++];
        }else{
            if(prec(infix[i]) > peek(st, 0)){
                push(st, infix[i++]) ;
            }else {
                postfix[j++] = pop(st) ;
            }
        }
    }
    while(!isEmpty(st)){
        postfix[j++] = pop(st) ;
    }
    postfix[j] = '\0' ;
    free(st->arr) ;
    free(st); 
    return postfix;
}
int main(){

    char * st = "a+b/c+c/d" ;
    printf("%s", InfixtoPostfix(st)) ;
    return 0 ;
}

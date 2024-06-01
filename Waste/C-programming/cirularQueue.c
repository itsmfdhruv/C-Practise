#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
typedef struct{
    int size ;
    int f ;
    int r ;
    int * arr ;
}Queue;

bool isFull(Queue * q){
    return (q->size == q-> r + 1) ;
}
bool isEmpty(Queue * q){
    return (q->f == q->r) ;
}

void intialize(Queue * q){
    q-> size = 100 ;
    q -> f = q-> r = -1 ;
    q -> arr = (int * ) malloc(q -> size * sizeof(int));
}
void destroy(Queue * q){
    q->size = 0;
    q->f = q->r = -1;
    free(q->arr) ;
    
}

void enque(Queue * q, int val ){
    if(q->r+1 % q->size == q->f){
        printf("queue is overflowed and there's expansion") ;
        realloc(q, q->size* 2) ;
    }else{
        q->r = (q->r + 1) % q->size ;
        q->arr[q->r] = val ;
    }
}
int deque(Queue * q){
    if(isEmpty(q)){
        printf("the queue is empty and there's contractions") ;
        return - 1;
    }else{
        q->f =( q->f+1) % q->size ;
        return q->arr[q->f] ;
    }
}
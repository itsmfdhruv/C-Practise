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
    q -> size = 100 ;
    q -> f = q-> r = -1 ;
    q -> arr = (int * ) malloc(q -> size * sizeof(int));
}
void destroy(Queue * q){
    q->size = 0 ;
    q->f = q->r = -1 ;
    free(q->arr) ;
    
}

void enque(Queue *q, int val){
    if(isFull(q)){
        printf("Queue overflow") ;
    }else {
        q->arr[++q->r] = val ;
    }
}
int deque(Queue *q){
    if(isEmpty(q)){
        printf("Queue underflow"); 
    }else 
       return q->arr[++q->f] ;
}
int main(){
    Queue * q = (Queue *)malloc(sizeof(Queue));
    intialize(q) ;
    enque(q, 1) ;
    enque(q ,2) ;
    enque(q, 70) ;
    printf("%d", deque(q)) ;
    destroy(q) ;
    return 0 ;
}
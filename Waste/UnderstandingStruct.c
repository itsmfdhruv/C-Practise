#include<stdio.h>
#include<stdlib.h> // Include stdlib.h for malloc, realloc, and free
#include <string.h>
typedef struct {
    void **buf;
    int capacity;
    int size;
} DynArray;

void initializeDynArray(DynArray *arr, int initialCapacity) {
    arr->buf = malloc(initialCapacity * sizeof(void *));
    if (!arr->buf) {
        printf("Memory allocation failed!");
        return;
    }
    arr->capacity = initialCapacity;
    arr->size = 0;
}


void AddtoEnd(DynArray *arr, void *element) {
    if (arr->size >= arr->capacity) {
        arr->capacity *= 2;
        arr->buf = realloc(arr->buf, arr->capacity * sizeof(void *));
        if (!arr->buf) {
            printf("Memory allocation failed!");
            return;
        }
    }
    arr->buf[arr->size++] = element;
}

void AddString(DynArray * arr, const char * str){
    while(arr->size + strlen(str) >= arr->capacity){
        arr->capacity *= 2;
    }
    arr->buf = realloc(arr->buf, arr->capacity * sizeof(char *)) ;
    if(!arr->buf){
        printf("Memory allocation failed !") ;
        return ;
    }
    strcpy((char * )arr->buf+ arr->size, str) ;
    arr->size = strlen(str) + 1 + arr->size ;
}

int main() {
    DynArray arr;
    int data = 10;
    initializeDynArray(&arr, 10); // Initialize with initial capacity of 5
    AddtoEnd(&arr, &data);
    printf("Size: %d  Array element added: %d\n", arr.size, *((int *) arr.buf[0]));
   
    AddString(&arr, "I hate C language") ;
    printf("%s", (char *)arr.buf) ;
    printf("%d", arr.capacity) ;
    free(arr.buf);
    return 0;
}

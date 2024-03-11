#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10

//Allocates memory for a determined number of floating numbers
//Executes the allocation via realloc function
//Realloc will return NULL if the compiler can't allocate the memory
void aloc(float **p){
    if ((*p = (float*) realloc(*p, SIZE*sizeof(float)))==NULL){
        printf("\nAllocation error.");
        exit(0);
    }
    else {
        printf("\nMemory allocated for %d floating numbers in address %u", SIZE, *p);
    }
}
void store(float *p){
    for (int i=0; i<SIZE; i++){
        printf("\nType in the number to be stored in memory address %u: ", p+i);
        scanf("%f", p+i);
    }
}
void viewPlus30(float *p){
    for (int i=0; i<SIZE; i++){
        *(p+i) += 30.0;
        printf("\nNumber in address %u: %.2f", p+i, *(p+i));
    }
}
void main(){
    float *ptr = NULL;
    aloc(&ptr);
    store(ptr);
    viewPlus30(ptr);
}
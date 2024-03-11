#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void aloc(float **p, int size){
    if ((*p = (float*) realloc(*p, size*sizeof(float)))==NULL){
        printf("\nAllocation error.");
        exit(0);
    }
    else {
        printf("\nMemory allocated for %d numbers @ address %u.", size, *p);
    }
}
void store(float *p, int size){
    for (int i=0; i<size; i++){
        printf("\nType in the number to be allocated @ %u: ", p+i);
        scanf("%f", p+i);
    }
}
void viewReversed(float *p, int size){
    for (int i=size; i>-1; i--){
        printf("\nNumber @ %u: %.2f", p+i, *(p+i));
    }
}
void main(){
    float *ptr = NULL;
    int size;
    printf("\nType in the amount of numbers to be dynamically allocated: ");
    scanf("%d", &size);
    aloc(&ptr, size);
    store(ptr, size);
    viewReversed(ptr, size);
}
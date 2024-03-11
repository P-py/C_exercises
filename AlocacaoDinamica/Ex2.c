#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10

void aloc(float **p){
    if((*p = (float*) realloc(*p, SIZE * sizeof(float)))==NULL){
        printf("\nErro de alocacao.");
        exit(0);
    }
    else {
        printf("\nMemoria alocada para %d numeros reais em %u", SIZE, *p);
    }
}
void store(float *p){
    for (int i=0; i<SIZE; i++){
        printf("\nDigite o numero para ser armazenado no endereco %u: ", p+i);
        scanf("%f", p+i);
    }
}
void view(float *p){
    for (int i=0; i<SIZE; i++){
        printf("\nValor no endereco %u: %.2f", p+i, *(p+i));
    }
}
void main(){
    float *ptr = NULL;
    aloc(&ptr);
    store(ptr);
    view(ptr);
}
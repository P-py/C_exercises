#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void aloc(float **p, int tamanho){
    if ((*p = (float*) realloc(*p, tamanho*sizeof(float)))==NULL){
        printf("\nErro ao alocar.");
        exit(0);
    }
    else {
        printf("\nAlocado com sucesso em %u.", *p);
    }
}
void store(float *p){
    printf("\nDigite o valor para o end %u: ", p);
    scanf("%f", p);
    fflush(stdin);
}
void viewAndAverage(float *p, int tamanho){
    float soma=0;
    for (int i=0; i<tamanho; i++){
        printf("\nValor no end %u: %.2f", p+i, *(p+i));
        if (*(p+i)!=0){
            soma += *(p+i);
        }
    }
    printf("\nSoma: %.2f", soma);
    printf("\nMedia: %.2f", (soma/(float)tamanho));
}
void main(){
    char option;
    int tamanho, cont = 0;
    float *ptr = NULL;
    do{
        aloc(&ptr, cont+1);
        store(ptr+cont);
        cont++;
        printf("\nDeseja continuar (y/n)? ");
        scanf("%c", &option);
        fflush(stdin);
    }while(toupper(option)!='N');
    viewAndAverage(ptr, cont);
}
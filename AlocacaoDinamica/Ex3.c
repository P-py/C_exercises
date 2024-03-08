#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void aloc(int **p, int tamanho){
    if((*p = (int*) realloc(*p, tamanho*sizeof(int)))==NULL){
        printf("\nFalha ao alocar.");
        exit(1);
    }
    else {
        printf("\nAlocado com sucesso - End: %u", *p);
    }
}
void store(int *p){
    printf("\nDigite o valor para o end %u: ", p);
    scanf("%i", p);
    fflush(stdin);
}
void view(int *p, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf("\nValor no end %u: %i", p+i, *(p+i));
    }
}
void main(){
    char option;
    int *ptr = NULL, cont = 0;
    do{
        aloc(&ptr, cont+1);
        store(ptr+cont);
        cont++;
        printf("\nDeseja continuar (y/n)? ");
        scanf("%c", &option);
        fflush(stdin);
    }while(toupper(option)!='N');
    view(ptr, cont);
}
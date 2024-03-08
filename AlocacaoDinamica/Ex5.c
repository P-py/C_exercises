#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>

void aloc(float **p, int tamanho){
    if((*p = (float*) realloc(*p, tamanho*sizeof(float)))==NULL){
        printf("\nErro ao alocar.");
        exit(0);
    }
    else{
        printf("\nAlocado com sucesso em %u.", *p);
    }
}
void store(float *p, int numDia){
    printf("\nDigite a temperatura para o dia %d: ", numDia);
    scanf("%f", p);
    fflush(stdin);
}
void view(float *p, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf("\nTemperatura no dia %d: %.2f", i+1, *(p+i));
    }
}
void main(){
    char option;
    float *ptr = NULL; 
    int cont = 0;
    do{
        aloc(&ptr, cont+1);
        store(ptr+cont, cont+1);
    }while(toupper(option)!='N');
}
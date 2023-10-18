#include <stdio.h>
#include <conio.h>
#define TAMANHO 10
int main(){
    int vetor[TAMANHO];
    int num;
    int num2;
    int contagem=0;
    for (int i=0; i<TAMANHO; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        vetor[i]=num;
    }
    printf("\nDigite um numero para verificar se ele se repete no vetor: ");
    scanf("%d", &num2);
    for (int j=0; j<TAMANHO; j++){
        if (num2==vetor[j]){
            contagem = contagem+1;   
        }
    }
    if (contagem==0){
        printf("\nO numero nao esta incluido no vetor.");
        printf("\nVetor: ");
        for (int k=0; k<TAMANHO; k++){
            printf("\t%d", vetor[k]);
        }
        printf("\nNumero: %d", num2);
    }
    else {
        printf("\nO numero se repete %d vezes no vetor.", contagem);
        printf("\nVetor: ");
        for (int k=0; k<TAMANHO; k++){
            printf("\t%d", vetor[k]);
        }
        printf("\nNumero: %d", num2);
    }
    getch();
    return 0;
}
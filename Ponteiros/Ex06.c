#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 3

int main(){
    float vetor[SIZE], *p_vetor, soma=0;
    p_vetor = vetor;
    for (int i=0; i<SIZE; i++, p_vetor++){
        printf("Digite o elemento #%d do vetor: ", i+1);
        scanf("%f", p_vetor);
    }
    p_vetor = vetor;
    for (int i=0; i<SIZE; i++, p_vetor++){
        soma += *p_vetor;
    }
    printf("Media dos elementos: %.2f", (soma/SIZE));
    getch();
    return 0;
}
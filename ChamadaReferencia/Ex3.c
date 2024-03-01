#include <stdio.h>
#include <conio.h>

#define SIZE 3

void view(int *p_vetor){
    for (int i=0; i<SIZE; i++, p_vetor++){
        printf("\n%d", *p_vetor);
    }
}
void leitura(int *p_vetor){
    for (int i=0; i<SIZE; i++, p_vetor++){
        printf("\nValor #%d do vetor: ", i+1);
        scanf("%d", p_vetor);
    }
}
void soma(int *p_valorA, int *p_valorB, int *p_valorC){
    for (int i=0; i<SIZE; i++, p_valorA++, p_valorB++, p_valorC++){
        *p_valorC = *p_valorA+*p_valorB;
    }
}
void main(){
    int vetorA[SIZE], vetorB[SIZE], vetorC[SIZE], *p_vetorC;
    leitura(vetorA);
    leitura(vetorB);
    soma(vetorA, vetorB, vetorC);
    printf("\nVetor A:");
    view(vetorA);
    printf("\nVetor B: ");
    view(vetorB);
    printf("\nVetor C: ");
    view(vetorC);
}
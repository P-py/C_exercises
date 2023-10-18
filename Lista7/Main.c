//Ler 10 notas e armazenar um vetor. 
//Imprimir um relatorio de notas no final.
#include <stdio.h>
#include <conio.h>
#define TAMANHO 10
int main(){
    float notas[TAMANHO];
    float nota;
    for (int j=0; j<TAMANHO; j++){
        printf("\nDigite uma nota: ");
        scanf("%f", &nota);
        notas[j] = nota;
    }
    printf("\nAluno\tNota");
    for (int i=0; i<TAMANHO; i++){
        printf("\n%i\t%.2f", i, notas[i]);
    }
    getch();
    return 0;
}
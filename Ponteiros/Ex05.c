#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10

int main(){
    float vetor[SIZE], *p_vetor, maior;
    p_vetor = vetor;
    for (int i=0; i<SIZE; i++, p_vetor++){
        printf("Digite o valor #%d do vetor: ", i+1);
        scanf("%f", p_vetor);
    }
    p_vetor = vetor;
    for (int i=0; i<SIZE; i++, p_vetor++){
        if (i==0){
            maior = *p_vetor;
        }
        else{
            if (*p_vetor>maior){
                maior = *p_vetor;
            }
        }
    }
    printf("%.2f", maior);
    getch();
    return 0;
}
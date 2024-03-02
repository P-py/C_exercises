#include <stdio.h>
#include <conio.h>

#define SIZE 3

void leitura(float *p_vetor){
    for (int i=0; i<SIZE; i++, p_vetor++){
        printf("Temperatura do dia %d: ", i+1);
        scanf("%f", p_vetor);
    }
}
void view(float *p_vetor){
    for (int i=0; i<SIZE; i++, p_vetor++){
        printf("\n%.2f", *p_vetor);
    }
}
void maiorFunc(float *p_vetor){
    float maior;
    int index;
    for (int i=0; i<SIZE; i++, p_vetor++){
        if (i==0){
            maior = *p_vetor;
            index = i;
        }
        else {
            if (*p_vetor>maior){
                maior = *p_vetor;
                index = i;
            }
        }
    }
    printf("\nMaior temperatura: %.2f, dia: %d", maior, index+1);
}
float mediaFunc(float *p_vetor){
    float soma=0;
    for (int i=0; i<SIZE; i++, p_vetor++){
        soma += *p_vetor;
    }
    printf("\nMedia = %.2f", soma/(float)SIZE);
    return (soma/(float)SIZE);
}
void inferioresMediaFunc(float *p_vetor, float media){
    for (int i=0; i<SIZE; i++, p_vetor++){
        if (*p_vetor<media){
            printf("%.2f - dia %d", *p_vetor, i+1);
        }
    }
}
void main(){	
    float temperaturas[SIZE];
    leitura(temperaturas);
    view(temperaturas);
    maiorFunc(temperaturas);
    float media = mediaFunc(temperaturas);
    printf("\nValores abaixo da media: \n");
    inferioresMediaFunc(temperaturas, media);
}

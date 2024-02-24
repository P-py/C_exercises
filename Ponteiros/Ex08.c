#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 30

int main(){
    float temperaturas[SIZE], *p_temperaturas, maiorTemp, soma, inferioresMedia[SIZE], *p_inferioresMedia;
    int indiceMaiorTemp, contagemInferiores=0, indicesInferiores[SIZE], *p_indicesInferiores;
    p_temperaturas = temperaturas;
    for (int i=0; i<SIZE; i++, p_temperaturas++){
        printf("Digite o elemento #%d do vetor: ", i+1);
        scanf("%f", p_temperaturas);
    }
    p_temperaturas = temperaturas;
    for (int i=0; i<SIZE; i++, p_temperaturas++){
        soma += *p_temperaturas;
        if (i==0){
            maiorTemp = *p_temperaturas;
            indiceMaiorTemp = i+1;
       }
        else {
            if(*p_temperaturas>maiorTemp){
                maiorTemp = *p_temperaturas;
                indiceMaiorTemp = i+1;
            }
        }
    }
    p_temperaturas = temperaturas;
    p_inferioresMedia = inferioresMedia;
    p_indicesInferiores = indicesInferiores;
    for (int i=0; i<SIZE; i++, p_temperaturas++){
        if (*p_temperaturas<(soma/SIZE)){
            *p_inferioresMedia = *p_temperaturas;
            *p_indicesInferiores = i+1;
            p_inferioresMedia++;
            p_indicesInferiores++;
            contagemInferiores++;
        }
    }
    p_inferioresMedia = inferioresMedia;
    p_indicesInferiores = indicesInferiores;
    printf("Maior temperatura: %.2f - dia %d\n", maiorTemp, indiceMaiorTemp);
    printf("Media: %.2f\n", soma/SIZE);
    printf("Temperaturas abaixo da media: \n");
    for (int i=0; i<contagemInferiores; i++, p_inferioresMedia++, p_indicesInferiores++){
        printf("%.2f - dia %d\n", *p_inferioresMedia, *p_indicesInferiores);
    }
    getch();
    return 0;
}
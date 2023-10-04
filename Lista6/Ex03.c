#include <stdio.h>
#include <conio.h>

int main(){
    float nota1, nota2;
    float media;
    printf("\nDigite a nota no modulo 1: ");
    scanf("%f", &nota1);
    if (nota1 < 0.0 || nota1 > 10.0){
        while (nota1 < 0.0 || nota1 > 10.0){
            printf("\nPor favor digite uma nota valida (entre 0.0 e 10.0): ");
            scanf("%f", &nota1);
        }
    }
    printf("Digite a nota no modulo 2: ");
    scanf("%f", &nota2);
    if (nota2<0.0 || nota2>10.0){
        while (nota2<0.0 || nota2>10.0){
            printf("\nPor favor digite uma nota valida (entre 0.0 e 10.0): ");
            scanf("%f", &nota2);
        }
    }
    media = (nota1+nota2)/2;
    printf("\nA media final: %.2f", media);
}
#include <stdio.h>
#include <conio.h>

int main(){
    int contadorNegativos=0, contadorPositivos=0;
    int number;
    for (int x=1; x<=10; x++){
        printf("\nDigite um numero inteiro: ");
        scanf("%i", &number);
        if (number<0){
            contadorNegativos+=1;
        }
        else if(number>0){
            contadorPositivos+=1;
        }
        else{
            printf("\nO numero digitado \x82 0 e nao sera contabilizado.");
        }
    }
    printf("\nNumeros negativos->%i\nNumeros positivos->%i", contadorNegativos, contadorPositivos);
}
#include <stdio.h>
#include <conio.h>

int main(){
    float soma;
    float numero, maiorNumero=0;
    int opcao=1, contador=0;
    do{
        printf("\nDigite um numero: ");
        scanf("%f", &numero);
        soma+=numero;
        printf("\nDeseja continuar?\n1 - SIM\n2 - NAO\n>");
        scanf("%d", &opcao);
        if (contador==0){
            maiorNumero = numero;
        }
        else if (contador!=0){
            if (numero>maiorNumero){
                maiorNumero = numero;
            }
        }
        contador++;
    }while(opcao!=2);
    printf("\nA media dos numeros digitados: %.2f", (soma/contador));
    printf("\nO maior numero digitado: %.2f", maiorNumero);
    getch();
    return 0;
}
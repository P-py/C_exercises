#include <stdio.h>
#include <conio.h>
int main(){
    float maior=0, soma=0;
    float numero=0;
    int opcao, contagem=0;
    do{
        printf("\nDigite um numero: ");
        scanf("%f", &numero);
        printf("\nDeseja continuar?\n1-Sim\n2-Nao\n->");
        scanf("%i", &opcao);
        soma+=numero;
        if (contagem==0){
            maior=numero;
        }
        else {
            if (numero>maior){
                maior=numero;
            }
        }
        contagem++;
    }while(opcao!=2);
    printf("\nMaior numero: %.2f\nMedia dos numeros: %.2f", maior, (soma/(contagem)));
}
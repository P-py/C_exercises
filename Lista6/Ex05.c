#include <stdio.h>
#include <conio.h>

int main(){
    int opcao;
    float num1, num2;
    do{
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &num1);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &num2);
        printf("\nDigite o tipo de calculo\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n>");
        scanf("%i", &opcao);
        switch(opcao){
            case(1):
                printf("\nResultado: %f", (num1+num2));
                break;
            case(2):
                printf("\nResultado: %f", (num1-num2));
                break;
            case(3):
                printf("\nResultado: %f", (num1*num2));
                break;
            case(4):
                printf("\nResultado: %f", (num1/num2));
                break;
            case(5):
                printf("\nPrograma encerrado.");
                break;
            default:
                printf("\nOpcao invalida");
                break;
        }
    }while(opcao!=5);
    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>

int main(){
    float saldo;
    float valor;
    int codigo = 0;
    printf("\nDigite o saldo da sua conta: ");
    scanf("%f", &saldo);
    do{
        printf("\nQual o tipo de operacao deseja realizar?");
        printf("\n1 - Deposito\n2 - Retirada\n3 - Cancelar");
        printf("\n->");
        fflush(stdin);
        scanf("%d", &codigo);
        switch(codigo){
            case(1):
                printf("\nDigite valor para ser depositado: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("\nO SEU NOVO SALDO: %f", saldo);
                break;
            case(2):
                printf("\nDigite valor para ser depositado: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("\nO SEU NOVO SALDO: %f", saldo);
                break;
            case(3):
                break;
            default:
                printf("\nDigite um valor valido seu mula do caralho.");
                break;
        }
    }while(codigo!=3);
    getch();
    return 0;
}
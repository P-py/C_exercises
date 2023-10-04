#include <stdio.h>
#include <conio.h>

int main(){
    float saldo=0;
    float valor;
    int codigo = 0;
    printf("\nSALDO DA CONTA: R$%.2f\n", saldo);
    do{
        printf("\nQual o tipo de operacao deseja realizar?");
        printf("\n1 - Deposito\n2 - Retirada\n3 - Cancelar");
        printf("\n>");
        fflush(stdin);
        scanf("%d", &codigo);
        switch(codigo){
            case(1):
                printf("\nDigite valor para ser depositado: R$");
                scanf("%f", &valor);
                saldo += valor;
                printf("\nO SEU NOVO SALDO: %f\n", saldo);
                break;
            case(2):
                printf("\nDigite valor para ser retirado: R$");
                scanf("%f", &valor);
                saldo -= valor;
                printf("\nO SEU NOVO SALDO: %f\n", saldo);
                break;
            case(3):
                printf("\nSALDO: %.2f\n", saldo);
                if (saldo>0){
                    printf("\nSTATUS: CONTA PREFERENCIAL.\n");
                }
                else if (saldo<0){
                    printf("\nSTATUS: CONTA ESTOURADA.\n");
                }
                else if (saldo==0){
                    printf("\nSTATUS: CONTA ZERADA.\n");
                }
                break;
            default:
                printf("\nDigite um valor valido.");
                break;
        }
    }while(codigo!=3);
    getch();
    return 0;
}
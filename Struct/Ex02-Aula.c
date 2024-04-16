#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#define DATABASE_SIZE 10

struct conta{
    char nome[100];
    int conta;
    float saldo;
};

void retirada(int conta, int cont, struct conta database[DATABASE_SIZE]){
    int i;
    float valor;
    for (i=0; i<cont; i++){
        if (database[i].conta == conta){
            printf("\nNome: %s \nSaldo: %.2f", database[i].nome, database[i].saldo);
            printf("\nValor da retirada: ");
            scanf("%f", &valor);
            if (database[i].saldo < valor){
                printf("Valor insuficiente.");
            }
            else {
                database[i].saldo -= valor;
                printf("\nDeposito realizado com sucesso\nSaldo atualizado - %.2f", database[i].saldo);
            }
            break;
        }
        else {
            printf("\nConta nao encontrada.");
            break;
        }
    }
}

void deposito(int conta, int cont, struct conta database[DATABASE_SIZE]){
    int i;
    float valor;
    for (i=0; i<cont; i++){
        if (database[i].conta == conta){
            printf("\nNome: %s \nSaldo: %.2f", database[i].nome, database[i].saldo);
            printf("\nValor do deposito: ");
            scanf("%f", &valor);
            database[i].saldo += valor;
            printf("\nDeposito realizado com sucesso\nSaldo atualizado - %.2f", database[i].saldo);
            break;
        }
        else {
            printf("\nConta nao encontrada.");
            break;
        }
    }
}

struct conta cadastro(int cont){
    struct conta contaObj;
    fflush(stdin);
    printf("\nNome: ");
    fflush(stdin);
    gets(contaObj.nome);
    fflush(stdin);
    contaObj.conta = cont;
    contaObj.saldo = 0;
    return contaObj;
}

int main(){
    struct conta database[DATABASE_SIZE];
    int cont = 0, option, num_conta;
    do {
        printf("\n[1] Cadastro\n[2] Deposito\n[3] Retirada\n[4] Sair\nOpcao -> ");
        fflush(stdin);
        scanf("%i", &option);
        fflush(stdin);
        switch(option){
            case 1:
                if (cont<DATABASE_SIZE){
                    fflush(stdin);
                    database[cont] = cadastro(cont);
                    cont++;
                    break;
                }
                else {
                    printf("\nCadastro cheio.");
                    break;
                }
            case 2:
                printf("\nNumero da conta: ");
                fflush(stdin);
                scanf("%i", &num_conta);
                fflush(stdin);
                deposito(num_conta, cont, database);
                break;
            case 3:
                printf("\nNumero da conta: ");
                fflush(stdin);
                scanf("%i", &num_conta);
                fflush(stdin);
                retirada(num_conta, cont, database);
                break;
            case 4:
                exit(0);
        }
    }while(option!=4);
    return 0;
}
#include <stdio.h>
#include <conio.h>

int main(){
    int somaSalarios=0, somaFilhos=0, contador500=0, codeMaiorSalario=0;
    int filhos;
    float maiorSalario;
    float salario;
    float tamanhoCidade;
    printf("\nDigite a quantidade de cidadaos na cidade: ");
    scanf("%f", &tamanhoCidade);
    for(int i=1; i<=tamanhoCidade; i++){
        printf("\nDigite o numero de filhos do cidadao %i: ", i);
        scanf("%d", &filhos);
        somaFilhos+=filhos;
        printf("\nDigite o salario do cidadao %i: R$", i);
        scanf("%f", &salario);
        somaSalarios+=salario;
        if (salario>maiorSalario){
            maiorSalario = salario;
            codeMaiorSalario = i;
        }
        if (salario<=500){
            contador500++;
        }
    }
    printf("\nA media salarial da cidade: R$%.2f", (float)somaSalarios/tamanhoCidade);
    printf("\nA media de filhos da cidade: %.2f", (float)somaFilhos/tamanhoCidade);
    printf("\nO maior salario pertence ao cidadao: %i, sendo R$%.2f", codeMaiorSalario, maiorSalario);
    getch();
    return 0;
}
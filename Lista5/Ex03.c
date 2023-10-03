#include <stdio.h>
#include <conio.h>

int main(){
    int number=0, soma=0, quantidade=0, contadorNegativos=0;
    printf("\nQuantos numeros deseja usar para calcular a media? ");
    scanf("%i", &quantidade);
    for (int i=1; i<=quantidade; i++){
        printf("\nDigite o numero %i: ", i);
        scanf("%d", &number);
        if (number>0 || number == 0){
            soma = soma+number;
        }
        else if (number<0){
            printf("\nEsse numero \x82 negativo e nao sera contabilizado na media.");
            contadorNegativos++;
        }
    }
    printf("%i\n", soma);
    printf("%i\n", quantidade);
    printf("%i\n", contadorNegativos);
    printf("A media \x82: %f", ((float)soma/(float)(quantidade-contadorNegativos)));
    getch();
    return 0;
}
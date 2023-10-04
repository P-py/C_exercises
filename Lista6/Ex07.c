#include <stdio.h>
#include <conio.h>

int main(){
    int finalIntervalo, inicialIntervalo, divisor, contador;
    printf("\nDigite o valor do divisor: ");
    scanf("%d", &divisor);
    printf("\nDigite o inicio do intervalo: ");
    scanf("%d", &inicialIntervalo);
    printf("\nDigite o final do intervalo: ");
    scanf("%d", &finalIntervalo);
    contador = inicialIntervalo;
    printf("\nNumeros divisiveis por %i no intervalo de %i a %i:\n", divisor, inicialIntervalo, finalIntervalo);
    do{
        if (contador%divisor==0){
            printf("%i ", contador);
            contador++;
        }
        else{
            contador++;
        }
    }while(contador<=finalIntervalo);
    getch();
    return 0;
}
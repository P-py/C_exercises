#include <stdio.h>
#include <conio.h>

int main(){
    int maior=0, number=0, menor=0;
    for (int x=1; x<=10; x++){
        printf("\nDigite o numero %i: ", x);
        scanf("%i", &number);
        if (x==1){
            maior = number;
            menor = number;
        }
        else {
            if (number<menor){
                menor = number;
            }
            if (number>maior){
                maior = number;
            }
        }
    }
    printf("\nO maior numero: %i\nO menor numero: %i\n", maior, menor);
    getch();
    return 0;
}
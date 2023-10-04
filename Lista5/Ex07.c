#include <stdio.h>
#include <conio.h>

int main(){
    int tamanho;
    printf("Digite o tamanho da piramide: ");
    scanf("%i", &tamanho);
    for (int i=1; i<=tamanho; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
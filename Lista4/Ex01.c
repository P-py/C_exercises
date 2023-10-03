#include <stdio.h>
#include <conio.h>

int main(){
    float number;
    for (int x=1; x<=10; x++){
        printf("\nDigite um número: ");
        scanf("%f", &number);
        printf("\nO seu dobro: %.2f", (number*2.0));
    }
    getch();
    return 0;
}
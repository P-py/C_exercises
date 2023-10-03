#include <stdio.h>
#include <conio.h>

int main(){
    int number;
    printf("\nDigite um numero para ver sua tabuada: ");
    scanf("%d", &number);
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, number, (i*number));
    }
    getch();
    return 0;
}
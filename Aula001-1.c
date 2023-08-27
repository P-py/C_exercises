#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2, num3;
    printf("\n Type in a number: ");
    scanf("%d", &num1);
    printf("\n Type in another number: ");
    scanf("%d", &num2);
    printf("\n Type in the last number: ");
    scanf("%d", &num3);
    printf("\n The multiplication of your 3 numbers: %d", num1*num2*num3);
    getch();

    return 0;
}
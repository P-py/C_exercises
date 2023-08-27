#include <stdio.h>
#include <conio.h> 

int main() {
    float num1, num2;
    printf("\n Type in the first number: ");
    scanf("%f", &num1);
    printf("\n Type in the second number: ");
    scanf("%f", &num2);

    printf("\n The average of your two numbers: %f", (num1+num2)/2);
    getch();

    return 0;
}
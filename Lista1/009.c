#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float num1;
    printf("\n Type in a number: ");
    scanf("%f", &num1);
    printf("\n The square root of your number is: %f", sqrt(num1));
    printf("\n The eigth power of your number is: %f", pow(num1, 8));

    getch();

    return 0;
}
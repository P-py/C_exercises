#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int num1, num2, num3;
    printf("Type in the first number: ");
    scanf("%d", &num1);
    printf("Type in the second number: ");
    scanf("%d", &num2);
    printf("Type in the last number: ");
    scanf("%d", &num3);

    if (num1 == num2){
        printf("There are 2 equal numbers.");
    }
    else if (num2 == num3){
        printf("There are 2 equal numbers.");
    }
    else if (num3 == num1){
        printf("There are 2 equal numbers.");
    }
    else {
        printf("None of the numbers are equal.");
    }

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>

int main(){
    float num1, num2, num3;
    printf("Type in the first number: ");
    scanf("%f", &num1);
    printf("Type in the second number: ");
    scanf("%f", &num2);
    printf("Type in the third number: ");
    scanf("%f", &num3);

    if (num1 == num2 && num2 == num3){
        printf("The triangle is equilateral.");
    }
    else if (num1 == num2 || num2 == num3 ||  num1 == num3){
        printf("The triangle is isosceles.");
    }
    else if (num1 != num2 && num2 != num3 && num1 != num3){
        printf("The triangle is scalene.");
    }

    getch();
    return 0;
}
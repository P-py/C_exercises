#include <stdio.h>
#include <conio.h>

int main(){
    int num1, num2, num3;
    printf("Type in the first number: ");
    scanf("%d", &num1);
    printf("Type in the second number: ");
    scanf("%d", &num2);
    printf("Type in the third number: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3){
        printf("The numbers are equal");
    }
    else {
        if (num1 > num2){
            if (num1 > num3){
                printf("The number 1 is the biggest.");
            }
            else {
                printf("The number 3 is the biggest.");
            }
        }
        else if (num2 > num1){
            if (num2 > num3){
                printf("The number 2 is the biggest");
            }
            else {
                printf("The number 3 is the biggest");
            }
        }
    }
    getch();
    return 0;
}
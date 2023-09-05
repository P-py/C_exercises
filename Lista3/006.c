#include <stdio.h>
#include <conio.h>

int main(){
    float num1, num2, option;
    printf("Type in the first number: ");
    scanf("%f", &num1);
    printf("Type in the second number: ");
    scanf("%f", &num2);
    printf("The operations are: 1 - addition, 2 - subtraction, 3 - multiplication, 4 - division");
    printf("Type in the math operation option: ");
    scanf("%f", &option);

    if (option == 1){
        printf("The result is: %f", (num1+num2));
    }
    else if (option == 2){
        printf("The result is: %f", (num1-num2));
    }
    else if (option == 3){
        printf("The result is: %f", (num1*num2));
    }
    else if (option == 4){
        printf("The result is: %f", (num1/num2));
    }

    getch();
    return 0;
}
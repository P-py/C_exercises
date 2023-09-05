#include <stdio.h>
#include <conio.h>

int main(){
    float num1;

    printf("Type in a number: ");
    scanf("%f", num1);
    
    if (num1 == 0){
        printf("The number is null.");
    }
    else if (num1 > 0){
        printf("The number is positive.");
    }
    else {
        printf("The number is negative.");
    }

    getch();
    return 0;
}
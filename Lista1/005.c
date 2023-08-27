#include <stdio.h>
#include <conio.h>

int main(){
    int num1, num2;
    printf("\n Type in a number (needs to be a integer): ");
    scanf("%d", &num1);
    printf("\n Type in the second number: ");
    scanf("%d", &num2);

    printf("\n The division of your numbers is: %d", (num1/num2));
    printf("\n The rest of the division is: %d", (num1%num2));

    getch();

    return 0;
}
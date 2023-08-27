#include <stdio.h>
#include <conio.h>

int main(){
    float base, heigth;
    printf("\n Type in the base length of your triangle: ");
    scanf("%f", &base);
    printf("\n Type in the heigth of your triangle: ");
    scanf("%f", &heigth);

    printf("\n The area of your triangle: %f", (base*heigth)/2);
    getch();

    return 0;
}
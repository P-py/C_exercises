#include <stdio.h>
#include <conio.h>

int main(){
    float metros;
    printf("\n Type in a length in meters (it can be a float): ");
    scanf("%f", &metros);

    printf("\n The converted centimeters for your length is: %f", (metros*100));
    getch();

    return 0;
}
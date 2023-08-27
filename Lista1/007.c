#include <stdio.h>
#include <conio.h>

int main(){
    float temperature_f;
    printf("\n Type in a temperature in fahrenheit: ");
    scanf("%f", &temperature_f);
    printf("\n The converted temperature to celsius is: %f", (temperature_f-32)/1.8);

    getch();

    return 0;
}
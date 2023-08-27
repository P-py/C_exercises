#include <stdio.h>
#include <conio.h>

int main(){
    float distance_traveled, fuel_used;
    printf("\n Type in the distance you have traveled: ");
    scanf("%f", &distance_traveled);
    printf("\n Type in the amount of fuel used: ");
    scanf("%f", &fuel_used);

    printf("\n The average consumption of fuel is: %f", (distance_traveled/fuel_used));

    getch();

    return 0;
}
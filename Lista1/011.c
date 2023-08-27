#include <stdio.h>
#include <conio.h>

int main(){
    float distance_traveled, time;
    printf("\n Type in the distance you have traveled: ");
    scanf("%f", &distance_traveled);
    printf("\n Type in the amount of time in hours it took: ");
    scanf("%f", &time);

    printf("\n The average speed in km/h is: %f", (distance_traveled/time));

    getch();

    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float radius;
    double area;
    printf("\n Type in the radius of a circunference in meters: ");
    scanf("%f", &radius);
    area = M_PI*radius*2;
    printf("\n The circunference of that radius is: %lf", area);
    
    getch();

    return 0;
}
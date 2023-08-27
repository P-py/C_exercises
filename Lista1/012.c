#include <stdio.h>
#include <conio.h>

int main(){
    float hours_worked, extra_hours_worked;

    printf("\n The company will pay 10$ per hour worked in regular time;");
    printf("\n And will also pay 15$ per hour worked in extra time;");

    printf("\n Type in the amount of hours you worked in regular work-time: ");
    scanf("%f", &hours_worked);
    printf("\n Type in the amount of extra-time hours you worked: ");
    scanf("%f", &extra_hours_worked);

    printf("\n You should receive this amount of money: %f", ((10*hours_worked)+(15*extra_hours_worked)));

    getch();

    return 0;
}
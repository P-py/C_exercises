#include <stdio.h>
#include <conio.h>

int main(){
    int days;
    float salary;

    printf("\n A company is hiring a plumber for 35$ a day;");
    printf("\n The final salary will suffer a 8 percent discount to taxes;");

    printf("\n Type in the amount of days worked: ");
    scanf("%d", &days);

    salary = (days*35)*0.92;
    printf("\n The final salary, already including the discount for taxes is: %f", salary);

    getch();

    return 0;
}
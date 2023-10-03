#include <stdio.h>
#include <conio.h>
int main(){
    float number;
    for (int x=1; x<=10; x++){
        printf("\nType in a number: ");
        scanf("%f", &number);
        if (number < 0){
            printf("\nThe number typed in is negative.");
        }
        else if (number > 0){
            printf("\nThe number typed in is positive.");
        }
        else if (number == 0){
            printf("\nThe number type in is zero.");
        }
    }
    getch();
    return 0;
}
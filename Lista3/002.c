#include <stdio.h>
#include <conio.h>

int main(){
    int num1, num2, num3;
    int start, end;
    
    printf("Type in a number: ");
    scanf("%d", &num1);
    printf("Type in another number: ");
    scanf("%d", &num2);
    printf("Type in the last number: ");
    scanf("%d", &num3);

    if (num1 > num2){
        start = num2;
        end = num1;
    }
    else{
        start = num1;
        end = num2;
    }

    if (num3 == start || num3 == end){
        printf("The number is either in the start or end of the range.");
    }
    else if (num3 > start && num3 < end){
        printf("The number is inside the range.");
    }
    else {
        printf("The number is outside the range.");
    }

    getch();
    return 0;
}
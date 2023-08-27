#include <stdio.h>
#include <conio.h> 

int main() { 
    int num;
    printf("\nType in a number: ");
    scanf("%d", &num);
    printf("\nThe double of your number is: %d", (num*2));
    getch();
}
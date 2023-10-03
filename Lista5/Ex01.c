#include <stdio.h>
#include <conio.h>
int main(){
    int numbers;
    float average;
    float soma;
    printf("\nType in the amount of numbers to calculate the average: ");
    scanf("%d", &numbers);
    for(int x=1; x<=numbers; x++){
        scanf("%f", &soma);
        average += soma;
    }
    printf("The average of the typed in numbers is: %.2f", (average/numbers));
    getch();
    return 0;
}
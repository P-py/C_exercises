#include <stdio.h>
#include <conio.h>

int main(){
    int birth_year, current_year;
    printf("\n Type in your birth year: ");
    scanf("%d", &birth_year);
    printf("\n Type in the current year: ");
    scanf("%d", &current_year);

    printf("\n You have lived about %d days", (current_year-birth_year)*365);
    getch();

    return 0;
}
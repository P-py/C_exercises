#include <stdio.h>
#include <conio.h>
int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    for(int x=num1+1; x<num2; x++){
        printf("%i\n", x);
    }
    getch();
    return 0;
}
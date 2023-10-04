#include <stdio.h>
#include <conio.h>

int main(){
    int number=0;
    while (number!=101){
        if (number%2!=0 && number !=0){
            printf("%i\n", number);
        }
        number++;
    }
}
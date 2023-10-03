#include <stdio.h>
#include <conio.h>
int main(){
    for(int x=11; x<80; x++){
        if (x%2 == 0){
            printf("%i\n", x);
        }
    }
    getch();
    return 0;
}
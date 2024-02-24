#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 3

int factorial(int value){
    if (value==0){
        return 1;
    }
    else{
        return(value*factorial(value-1));
    }
}
int main(){
    int vetorA[SIZE], vetorB[SIZE], *p_vetorA, *p_vetorB;
    p_vetorA = vetorA;
    p_vetorB = vetorB;
    for (int i=0; i<SIZE; i++, p_vetorA++, p_vetorB++){
        printf("Digite o elemento #%d do vetor: ", i+1);
        scanf("%d", p_vetorA);
        *p_vetorB = factorial(*p_vetorA);
    }
    p_vetorB = vetorB;
    for (int i=0; i<SIZE; i++, p_vetorB++){
        printf("%d\n", *p_vetorB);
    }
    getch();
    return 0;
}
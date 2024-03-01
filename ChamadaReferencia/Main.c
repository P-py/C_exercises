#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
    int a, b;
    a = 10, b = 20;
    troca(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}
void troca(int *p_a, int *p_b){
    int temp;
    temp = *p_a;
    *p_a = *p_b;
    *p_b = temp;
}
#include <stdio.h>
#include <conio.h>

int main() {
    float salario;
    printf("\n Digite o seu salario: ");
    scanf("%f", &salario);
    printf("\n O seu salario com um bonus 10%: %f", salario*1.10);
    getch();

    return 0;
}
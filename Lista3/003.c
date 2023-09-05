#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float weight, height;
    float imc;

    printf("Type in your height in centimeters: ");
    scanf("%f", &height);
    height = height/100;

    printf("Type in your height in Kg: ");
    scanf("%f", &weight);

    imc = (weight)/pow(height, 2);

    if (imc < 18.5){
        printf("You're skinny as fuck");
    }
    else if (imc >= 18.5 && imc < 25.0){
        printf("You're healthy");
    }
    else if (imc >= 25.0 && imc < 30.0){
        printf("You're kinda fat");
    }
    else if (imc >= 30.0 && imc < 35.0){
        printf("Damn bro, you fat as fuck");
    }
    else if (imc >= 35.0 && imc < 40){
        printf("shi, fat as hell");
    }
    else {
        printf("You're about to die bro");
    }

    getch();
    return 0;
}
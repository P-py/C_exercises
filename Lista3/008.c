#include <stdio.h>
#include <conio.h>

int main(){
    int age;
    int gender;
    float height;
    float weight;
    float ideal_weight;
    
    printf("Type in your age: ");
    scanf("%d", &age);
    printf("Type in your gender (1 for men, 2 for women): ");
    scanf("%d", &gender);
    printf("Type in your height (cm): ");
    scanf("%f", &height);
    height = height/100;
    printf("Type in your weight (Kg): ");
    scanf("%f", &weight);

    if (age <= 65 && age >= 12){
        if (gender == 1){
            ideal_weight = (72.7*height)-62;
            printf("%f", ideal_weight);
        }
        else if (gender == 2){
            ideal_weight = (62.1*height)-62;
            printf("%f", ideal_weight);
        }
        else {
            return 0;
        }
    }

    getch();
    return 0;
}
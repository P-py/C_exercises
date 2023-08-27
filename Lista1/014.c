#include <stdio.h>
#include <conio.h>

int main(){
    float teorical_test01, teorical_test02;
    float practical_test01, practical_test02;
    float teorical_average;
    float practical_average;
    float final_average;

    printf("\n Type in the score on the first teorical test: ");
    scanf("%f", &teorical_test01);
    printf("\n Type in the score on the second teorical test: ");
    scanf("%f", &teorical_test02);

    printf("\n Type in the score on the first practical test: ");
    scanf("%f", &practical_test01);
    printf("\n Type in the score on the second practical test: ");
    scanf("%f", &practical_test02);

    teorical_average = (teorical_test01+teorical_test02)/2;
    practical_average = (practical_test01+practical_test02)/2;

    final_average = ((teorical_average*6)+(practical_average*4))/10;

    printf("\n Your final average is: %f", final_average);

    getch();

    return 0;
}
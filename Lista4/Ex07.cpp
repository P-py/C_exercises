#include <stdio.h>
#include <conio.h>
int main(){
	float mediaTeo, mediaLab;
	float mediaFinal;
	for (int x=1; x<=30; x++){
		printf("\nType in the teorical score of the student %i: ", x);
		scanf("%f", &mediaTeo);
		printf("\nType in the lab score of the student %i: ", x);
		scanf("%f", &mediaLab);
		mediaFinal = ((4*mediaLab)+(6*mediaTeo))/10;
		printf("\nThe final score for the student %i is: %f", x, mediaFinal);
	}
	getch();
	return 0;
}

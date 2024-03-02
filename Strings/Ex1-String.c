#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

void invertString(char *p_vetor, int length){
	//int i;
	//for (i=length-1; i>-1; i--){
	//	printf("%c", *(p_vetor+i));
	//}
	int i;
	p_vetor = p_vetor+strlen(p_vetor)-1;
	for (i=0; i<strlen(p_vetor); i++, p_vetor--){
		printf("%c", *p_vetor);
	}
}
void main(){
	char stringVetor[SIZE];
	gets(stringVetor);
	invertString(stringVetor, strlen(stringVetor));
}

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

//stores a reversed string in a new vector
void invertString(char *p_vetor, char *p_vetorInvert, int length){
	//int i;
	//for (i=length-1; i>-1; i--){
	//	printf("%c", *(p_vetor+i));
	//}
	int i;
	p_vetor = p_vetor+(length-1);
	for (i=0; i<strlen(p_vetor); i++, p_vetor--, p_vetorInvert++){
		*p_vetorInvert = *p_vetor;
	}
}
void main(){
	char stringVetor[SIZE], invertedStringVetor[SIZE], *p_inverted;
    p_inverted = invertedStringVetor;
	printf("\nType in the string to invert: ");
	gets(stringVetor);
	invertString(stringVetor, invertedStringVetor, strlen(stringVetor));
    for (int i=0; i<strlen(invertedStringVetor); i++){
        printf("%c", *(p_inverted+i));
    }
}

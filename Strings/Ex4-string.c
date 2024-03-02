#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

char returnMaiuscula(char letra){
    if (letra>='a'&&letra<='z'){
        return letra-32;
    }
    return letra;
}
char returnMinuscula(char letra){
    if (letra>='A'&&letra<='Z'){
        return letra+32;
    }
    return letra;
}
void view(char *p_vetor, int length){
    printf("\n");
    for (int i=0; i<length; i++, p_vetor++){
        printf("%c", *p_vetor);
    }
}
//stores a reversed string in a the same vector
void invertString(char *p_vetor, int length){
	int i;
    char valorInvert;
	for (i=0; i<length/2; i++){
        valorInvert = *(p_vetor+(length-1-i));
        *(p_vetor+(length-1-i)) = returnMinuscula(*(p_vetor+i));
        *(p_vetor+i) = returnMinuscula(valorInvert);
	}
}
void formatString(char *p_vetor, int length){
    for (int i=0; i<length; i++, p_vetor++){
        if (i==0){
            *p_vetor = returnMaiuscula(*p_vetor);
        }
        else if (*p_vetor == ' '){
            *p_vetor = *p_vetor;
            i++;
            p_vetor++;
            *p_vetor = returnMaiuscula(*p_vetor);
        }
        else {
            *p_vetor = returnMinuscula(*p_vetor);
        }
    }
}
void main(){
	char stringVetor[SIZE], *p_vetor;
    p_vetor = stringVetor;
	printf("\nType in the string to invert: ");
	gets(stringVetor);
	invertString(stringVetor, strlen(stringVetor));
    formatString(stringVetor, strlen(stringVetor));
    view(stringVetor, strlen(stringVetor));
}
#include <stdio.h>
#include <conio.h>
#define TAMANHO_VETOR 10
int main(){
	int vetor1[TAMANHO_VETOR]={1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
	int vetor2[TAMANHO_VETOR]={};
	int cont=0;
	for (int i=TAMANHO_VETOR; i>=0; i--){
		vetor2[i-1] = vetor1[cont];
		cont++;
	}
	/*for (int j=0; j<=9; j++){
		printf("%i", vetor2[j]);
	}*/
	for (int j=0; j<=9; j++){
		if (vetor1[j]==vetor2[j]){
			printf("\n%i", j);
		}
	}
	return 0;
}

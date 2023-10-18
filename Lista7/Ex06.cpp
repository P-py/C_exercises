#include <stdio.h>
#include <conio.h>
#define TAMANHO_VETOR 12
int main(){
	int contagem_negativos;
	int vetor[TAMANHO_VETOR]={1, -2, 3, -4, 5, 6, -7, 8, 9, 10, -11, -12};
	for (int i=0; i<=(TAMANHO_VETOR-1); i++){
		if (vetor[i]<0){
			contagem_negativos++;
		}
	}
	printf("\nQuantidade de valores negativos no vetor: %i", contagem_negativos);
}

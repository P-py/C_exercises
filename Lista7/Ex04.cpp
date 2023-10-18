#include <stdio.h>
#include <conio.h>
#define TAMANHO_VETOR 15
int main(){
	int posicao;
	int vetor1[TAMANHO_VETOR]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	for (int i=0; i<=(TAMANHO_VETOR-1); i++){
		printf("\nVetor[%i]: %i", i+1, vetor1[i]);
	}	
	printf("\nDigite uma posicao dentro do vetor para visualizar o dobro do seu valor: ");
	scanf("%i", &posicao);
	if (posicao<1 || posicao>15){
		do {
			printf("\nDigite um valor valido: ");
			scanf("%i", &posicao);
		}while(posicao<1 || posicao>15);
	}
	printf("\nDobro do valor no vetor[%i]: %i", posicao, (vetor1[posicao-1])*2);
}

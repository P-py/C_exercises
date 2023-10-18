#include <stdio.h>
#include <conio.h>
int main(){
	int posicao;
	int vetor1[8]={2, 4, 8, 16, 32, 64, 128, 256};
	printf("\nDigite uma posicao do vetor para ser exibida (1~8): ");
	scanf("%i", &posicao);
	if (posicao>8 || posicao<1){
		do{
			printf("\nDigite um valor valido: ");
			scanf("%i", &posicao);
		}while(posicao>8 || posicao<1);
	}
	printf("\nValor na posicao %i: %i", posicao, vetor1[posicao-1]);
}

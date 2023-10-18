#include <stdio.h>
#include <conio.h>
#define TAMANHO 10
int main(){
	int vetor[TAMANHO];
	int soma=0;
	int input;
	for (int i=0; i<TAMANHO; i++){
		printf("\nDigite um numero para ser incluido no vetor: ");
		scanf("%d", &input);
		if (input<0){
			do{
				printf("\nDigite um numero valido (>0): ");
				scanf("%d", &input);
			}while(input<0);
			vetor[i]=input;
		}
		else {
			vetor[i]=input;
		}
	}
	for (int j=0; j<TAMANHO; j++){
		if (j%2!=0&&j!=0){
			soma+=vetor[j];
		}
	}
	printf("\nSoma: %d", soma);
	getch();
	return 0;
}

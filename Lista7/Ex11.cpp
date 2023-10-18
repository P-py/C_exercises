#include <stdio.h>
#include <conio.h>
int main(){
	int vetor[10];
	int tamanho;
	int input;
	int contagem=0;
	printf("\nDigite o tamanho do numero (limite 10): ");
	scanf("%d", &tamanho);
	if (tamanho>10){
		do{
			printf("\nDigite um numero valido: ");
			scanf("%d", &tamanho);
		}while(tamanho>10);
	}
	for (int i=0; i<tamanho; i++){
		printf("\nDigite o algarismo %d: ", i+1);
		scanf("%d", &input);
		vetor[i]=input;
	}
	int k = tamanho-1;
	for (int j=0; j<tamanho; j++){
		if (vetor[j]==vetor[k]){
			//printf("\n%d\t%d", vetor[j], vetor[k]);
			contagem++;
		}
		k-=1;
	}
	if (contagem==tamanho){
		printf("\nPALINDROMO");
	}
	else {
		printf("\nNAO PALINDROMO");
	}
}

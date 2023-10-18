#include <stdio.h>
#include <conio.h>
#define TAMANHO 10
int main(){
	int vetor[TAMANHO];
	int input;
	int num;
	int contagem=0;
	for (int i=0; i<TAMANHO; i++){
		printf("\nDigite um numero para ser inserido no vetor: ");
		scanf("%d", &input);
		vetor[i]=input;
	}
	printf("\nDigite um numero para saber se ele se repete no vetor: ");
	scanf("%d", &num);
	for (int j=0; j<TAMANHO; j++){
		if (vetor[j]==num){
			contagem++;
		}
	}
	if (contagem==0){
		printf("\nO numero nao se repete.");
	}
	else {
		printf("\nRepeticoes: %d", contagem);	
	}
	getch();
	return 0;
}

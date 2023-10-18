#include <stdio.h>
#include <conio.h>
#define TAMANHO 12
int main(){
	int vetor[TAMANHO]={1, 2, 3, -4, -5, 6, 7, 8, -9, -10, 12};
	int vetor_negativos[TAMANHO];
	int contagem_negativos=0;
	for (int i=0; i<TAMANHO; i++){
		if (vetor[i]<0){
			vetor_negativos[i]=vetor[i];
			contagem_negativos+=1;
		}
		else {
			vetor_negativos[i]=0;
		}
	}
	printf("\nForam contados %d numeros negativos.", contagem_negativos);
	printf("\nNegativos: ");
	for (int j=0; j<TAMANHO; j++){
		if (vetor_negativos[j]<0){
			printf("%d ", vetor_negativos[j]);
		}
	}
	getch();
	return 0;
}

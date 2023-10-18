#include <stdio.h>
#include <conio.h>
#define TAMANHO_VETOR 10
int main(){
	int vetor[TAMANHO_VETOR]={1,2,3,4,5,6,7,8,9,10};
	for (int i=TAMANHO_VETOR; i>=1; i--){
		printf("%i\n", vetor[i-1]);
	}
}

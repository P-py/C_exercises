#include <stdio.h>
#include <conio.h>
#define TAMANHO_VETOR 50
int main(){
	int vetor[TAMANHO_VETOR]={};
	int cont=0;
	for (int i=1; i<=100; i++){
		if (i%2==0){
			vetor[cont]=i;
			cont++;
		}
	}
	for (int i=0; i<=(TAMANHO_VETOR-1); i++){
		printf("\n%i", vetor[i]);
	}
	return 0;
}

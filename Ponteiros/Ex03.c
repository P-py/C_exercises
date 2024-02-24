#include <stdio.h>
#include <conio.h>

#define n 3 //define o tamanho dos vetores

int main(){
	float vetorA[n], vetorB[n], vetorC[n], *p_vetorA, *p_vetorB, *p_vetorC;	
	int i;
	
	p_vetorA = vetorA;
	p_vetorB = vetorB;
	p_vetorC = vetorC;
	
	for (i=0; i<n; i++, p_vetorA++){
		printf("\nDigite o valor #%i do vetor A: ", i+1);
		scanf("%f", p_vetorA);
	}
	for (i=0; i<n; i++, p_vetorB++){
		printf("\nDigite o valor #%i do vetor B: ", i+1);
		scanf("%f", p_vetorB);
	}
	
	p_vetorA = vetorA;
	p_vetorB = vetorB;
	
	for (i=0; i<n; i++, p_vetorA++, p_vetorB++, p_vetorC++){
		*p_vetorC = *p_vetorA+*p_vetorB;
	}
	p_vetorC = vetorC; //reseta o endereço de memória
	//imprimir os valores
	for (i=0; i<n; i++, p_vetorC++){
		printf("%.2f\n", *p_vetorC);
	}
	getch();
}

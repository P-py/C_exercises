#include <stdio.h>
#include <conio.h>

#define MAX_SIZE 100

main(){
	int vetor[MAX_SIZE], *p_vetor, tamanho, i;
	p_vetor = vetor;
	do{
		printf("Digite o tamanho do vetor: ");
		scanf("%d", &tamanho);
		if (tamanho>MAX_SIZE){
			printf("Digite um valor valido abaixo de 100.\n");
		}
	}while(tamanho>100);
	for (i=0; i<tamanho; i++, p_vetor++){
		printf("Digite o elemento #%d do vetor: ", i+1);
		scanf("%d", p_vetor);
	}
	p_vetor = vetor;
	for (i=0; i<tamanho; i++, p_vetor++){
		printf("%d", *p_vetor);
	}
	getch();
}

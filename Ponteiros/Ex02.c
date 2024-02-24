#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_SIZE 10

main(){
	int vetor[MAX_SIZE], *p_vetor, cont=0, i;
	char opcao='y';
	p_vetor = vetor;
	do{
		printf("\nDigite o elemento #%d: ", cont+1);
		scanf("%d", p_vetor);
		p_vetor++;
		fflush(stdin);
		printf("\nDeseja continuar (y/n)? ");
		scanf("%c", &opcao);
		switch(opcao){
			case 'y':
				cont++;
				break;
		}
	}while(opcao!='n');
	p_vetor = vetor;
	printf("\nValores do vetor: ");
	for (i=0; i<=cont; i++, p_vetor++){
		printf("\n%d", *p_vetor);
	}
	getch();
}

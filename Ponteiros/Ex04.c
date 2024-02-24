#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define QNT 2 //quantidade de alunos

main(){
	float notas1[QNT], *p_nota1, notas2[QNT], *p_nota2, medias[QNT], *p_medias, nota;
	int i, j;
	p_medias = medias;
	p_nota1 = notas1;
	p_nota2 = notas2;
	for (i=0; i<QNT; i++){
		for (j=0; j<2; j++){
			do{
				printf("Digite a nota #%d do aluno #%d: ", i+1, j+1);
				scanf("%f", &nota);
				if (nota>10||nota<0){
					printf("Digite uma nota valida entre 0 e 10.\n");		
				}
			}while(nota>10||nota<0);
			switch(j){
				case 0:
					*p_nota1 = nota;
				case 1:
					*p_nota2 = nota;
			}
		}
		*p_medias = (*p_nota1+*p_nota2)/2.0;
		p_medias++;
		p_nota1++;
		p_nota2++;
	}
	p_medias = medias;
	for (i=0; i<QNT; i++, p_medias++){
		if (*p_medias>=7){
			printf("Aluno %d - %.2f - APROVADO\n", i+1, *p_medias);
		}
		else if (7>*p_medias>=4){
			printf("Aluno %d - %.2f - EXAME\n", i+1, *p_medias);
		}
		else if (*p_medias<4){
			printf("Aluno %d - %.2f - REPROVADO\n", i+1, *p_medias);
		}
	}
}

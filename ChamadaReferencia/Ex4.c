#include <stdio.h>
#include <conio.h>

#define SIZE 3

void status(double *p_vetor){
	int i=0;
    for (i; i<SIZE; i++, p_vetor++){
        if (*p_vetor>=7){
            printf("\nAluno %d - APROVADO", i+1);
        }
        else if (4<=*p_vetor<7){
            printf("\nAluno %d - EXAME", i+1);
        }
        else if (*p_vetor<4){
            printf("\nAluno %d - REPROVADO", i+1);
        }
    }
}
void view(double *p_vetor){
	int i=0;
    for (i; i<SIZE; i++, p_vetor++){
        printf("\nAluno %d - %.2lf", i+1, *p_vetor);
    }
}
void leitura(double *p_notas1, double *p_notas2){
	int i;
    for (i=0; i<SIZE; i++, p_notas1++){
        printf("Nota 1 do aluno %d: ", i+1);
        scanf("%lf", p_notas1);
    }
    for (i=0; i<SIZE; i++, p_notas2++){
        printf("Nota 2 do aluno %d: ", i+1);
        scanf("%lf", p_notas2);
    }
}
void media(double *p_notas1, double *p_notas2, double *p_medias){
	int i;
    for (i=0; i<SIZE; i++, p_notas1++, p_notas2++, p_medias++){
        *p_medias = ((*p_notas1+*p_notas2)/2);
    }
}
void main(){
    double notas1[SIZE], notas2[SIZE], medias[SIZE];
    leitura(notas1, notas2);
    media(notas1, notas2, medias);
    printf("\n\nNotas 1: ");
    view(notas1);
    printf("\n\nNotas 2: ");
    view(notas2);
    printf("\n\nMedias: ");
    view(medias);
    printf("\n\nStatus: ");
    status(medias);
}

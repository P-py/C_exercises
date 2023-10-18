//Ler notas de 4 provas de uma sala com 10 alunos
#include <stdio.h>
#include <conio.h>
#define ALUNOS 3
#define QTD_PROVAS 4
int main(){
    float notas[ALUNOS][QTD_PROVAS];
    float AC1, AC2, AF, AG;
    float media = 0;
    for (int linhas=0; linhas<ALUNOS; linhas++){
        for (int colunas=0; colunas<QTD_PROVAS; colunas++){
            if (colunas==0){
                printf("\nDigite a nota do aluno %d na prova AC1: ", linhas+1);
                scanf("%f", &AC1);
                notas[linhas][colunas]=AC1;
            }
            else if (colunas==1){
                printf("\nDigite a nota do aluno %d na prova AC2: ", linhas+1);
                scanf("%f", &AC2);
                notas[linhas][colunas]=AC2;
            }
            else if (colunas==2){
                printf("\nDigite a nota do aluno %d na prova AF: ", linhas+1);
                scanf("%f", &AF);
                notas[linhas][colunas]=AF;
            }
            else if (colunas==3){
                printf("\nDigite a nota do aluno %d na prova AG: ", linhas+1);
                scanf("%f", &AG);
                notas[linhas][colunas]=AG;
            }
        }
    }
    printf("\nAluno\tAC1\tAC2\tAF\tAG\tMEDIA");
    for (int i=0; i<ALUNOS; i++){
        printf("\n%d", i+1);
        for (int j=0; j<QTD_PROVAS; j++){
            printf("\t%.2f", notas[i][j]);
        }
        media = (notas[i][0]*0.15)+(notas[i][1]*0.3)+(notas[i][2]*0.45)+(notas[i][3]*0.1);
        printf("\t%.2f", media);
    }
    getch();
    return 0;
}
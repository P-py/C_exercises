#include <stdio.h>
#include <conio.h>

int main(){
    int qtdAlunos=0, qtdDisciplinas=0;
    int contadorDisciplinaAproveitada=0;
    float somaDisciplinas=0;
    float notaDisciplina=0;
    printf("Qual a quantidade de alunos: ");
    scanf("%i", &qtdAlunos);
    for (int i=1; i<=qtdAlunos; i++){
        printf("\nDigite a quantidade de disciplinas cursadas no 2o semestre pelo aluno %i: ", i);
        scanf("%i", &qtdDisciplinas);
        printf("\n--- 2o SEMESTRE DO ALUNO %i ---\n", i);
        for (int j=1; j<=qtdDisciplinas; j++){
            printf("Nota final da disciplina %i (formato 9.99): ", j);
            scanf("%f", &notaDisciplina);
            somaDisciplinas+=notaDisciplina;
            if (notaDisciplina >= 5.00){
                contadorDisciplinaAproveitada++;
            }
        }
        printf("\nAPROVEITAMENTO-> %.2f%%", ((float)contadorDisciplinaAproveitada/qtdDisciplinas)*100);
        printf("\nMEDIA FINAL-> %.2f", (somaDisciplinas/qtdDisciplinas));
    }

    getch();
    return 0;
}
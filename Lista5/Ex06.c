#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    int qntPessoas, contagemHomens=0, contagemMulheres=0;
    int codeSexo, menorAlturaNumero;
    char maiorAlturaSexo[100];
    float altura, menorAltura, somaAlturasMulheres, maiorAltura;
    printf("\nDigite o tamanho do grupo de pessoas: ");
    scanf("%d", &qntPessoas);
    for (int i=1; i<=qntPessoas; i++){
        printf("\nDigite a altura do individuo %i em cm: ", i);
        scanf("%f", &altura);
        printf("\nDigite o codigo que corresponde ao sexo do individuo %i\n1 - Homem\n2 - Mulher\n->", i);
        scanf("%d", &codeSexo);
        if (i==1 && codeSexo == 1){
            menorAltura = altura;
            menorAlturaNumero = i;
            maiorAltura = altura;
            strcpy(maiorAlturaSexo, "homem");
        }
        else if(i==1 && codeSexo==2){
            menorAltura = altura;
            menorAlturaNumero = i;
            maiorAltura = altura;
            strcpy(maiorAlturaSexo, "mulher");
        }
        else {
            if(altura<menorAltura){
                menorAltura = altura;
                menorAlturaNumero = i;
            }
            else if(altura>maiorAltura && codeSexo==1){
                maiorAltura = altura;
                strcpy(maiorAlturaSexo, "homem");
            }
            else if(altura>maiorAltura && codeSexo==2){
                maiorAltura = altura;
                strcpy(maiorAlturaSexo, "mulher");
            }
        }
        if (codeSexo==2){
           somaAlturasMulheres+=altura; 
           contagemMulheres++;
        }
        else if (codeSexo==1){
            contagemHomens++;
        }
    }
    printf("\nMenor altura pertence ao individuo %i sendo %.2fcm", menorAlturaNumero, menorAltura);
    printf("\nA media de altura das mulheres: %.2fcm", (somaAlturasMulheres/contagemMulheres));
    printf("\nO numero total de homens no grupo: %i", contagemHomens);
    printf("\nO individuo com maior altura \x82 %s tendo %.2fcm", maiorAlturaSexo, maiorAltura);
    getch();
    return 0;
}
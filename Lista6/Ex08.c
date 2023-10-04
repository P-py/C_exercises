#include <stdio.h>
#include <conio.h>

int main(){
    int contadorJOSE=0, contadorMARIA=0, contadorJOAO=0, contadorBRANCO=0, contadorNULO=0;
    int contadorTOTAL=0;
    int voto;
    do{
        printf("\nDigite o seu voto: ");
        fflush(stdin);
        scanf("%d", &voto);
        switch(voto){
            case 1:
                contadorJOSE += 1;
                contadorTOTAL += 1;
                break;
            case 2:
                contadorMARIA += 1;
                contadorTOTAL += 1;
                break;
            case 3:
                contadorJOAO += 1;
                contadorTOTAL += 1;
                break;
            case 4:
                contadorBRANCO += 1;
                contadorTOTAL += 1;
                break;
            case 5:
                contadorNULO += 1;
                contadorTOTAL += 1;
                break;
        }
    }while(voto!=0);
    if (contadorJOAO == contadorJOSE && contadorJOSE == contadorMARIA){
        printf("Os três candidatos empataram.");
    }
    else{
        //JOSE
        if (contadorJOSE > contadorMARIA && contadorJOSE > contadorJOAO){
        printf("\nJOSE foi o ganhador.");
        }
        else if (contadorJOSE > contadorMARIA && contadorJOSE == contadorJOAO){
            printf("\nJOSE e JOAO empataram.");
        }
        else if (contadorJOAO > contadorJOSE && contadorJOSE == contadorMARIA){
            printf("\nJOSE e MARIA empataram");
        }
        //JOAO
        if (contadorJOAO > contadorJOSE && contadorJOAO > contadorMARIA){
            printf("\nJOAO foi o ganhador.");
        }
        else if (contadorJOAO > contadorJOSE && contadorJOAO == contadorMARIA){
            printf("\nJOAO e MARIA empataram.");
        }
        else if (contadorJOAO > contadorMARIA && contadorJOAO == contadorJOSE){
            printf("\nJOAO e JOSE empataram.");
        }
        //MARIA
        if (contadorMARIA > contadorJOSE && contadorMARIA > contadorJOAO){
            printf("\nMARIA foi a ganhadora.");
        }
        else if (contadorMARIA > contadorJOSE && contadorMARIA == contadorJOAO){
            printf("\nMARIA e JOAO empataram.");
        }
        else if (contadorMARIA > contadorJOAO && contadorMARIA == contadorJOSE){
            printf("\nMARIA e JOSE empataram.");
        }
    }
    printf("\nNumero final de votos de cada candidato\n");
    printf("\nJOSE - %d votos - %f%%", contadorJOSE, ((float)contadorJOSE/(float)contadorTOTAL)*100);
    printf("\nMARIA - %d votos - %f%%", contadorMARIA, ((float)contadorMARIA/(float)contadorTOTAL)*100);
    printf("\nJOAO - %d votos - %f%%", contadorJOAO, ((float)contadorJOAO/(float)contadorTOTAL)*100);
    printf("\nBRANCO - %d votos - %f%%", contadorBRANCO, ((float)contadorBRANCO/(float)contadorTOTAL)*100);
    printf("\nNULO - %d votos = %f%%", contadorNULO, ((float)contadorNULO/(float)contadorTOTAL)*100);
    getch();
    return 0;
}
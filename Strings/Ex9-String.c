#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

void viewJediName(char *p_jediname, int length){
    printf("\n");
    for (int i=0; i<length; i++, p_jediname++){
        printf("%c", *p_jediname);
    }
}
void createJediName(char *p_name, char *p_jediname, char *p_mothersname, char *p_cityname, int lastIndexBlank){
    for (int i=0; i<3; i++, p_jediname++){
        *p_jediname = *(p_name+i);
    }
    for (int i=0; i<2; i++, p_jediname++){
        *p_jediname = *(p_name+lastIndexBlank+1+i);
    }
    *p_jediname = ' ';
    p_jediname++;
    for (int i=0; i<2; i++, p_jediname++){
        *p_jediname = *(p_mothersname+i);
    }
    for (int i=0; i<3; i++, p_jediname++){
        *p_jediname = *(p_cityname+i);
    }
}
int verifyName(char *p_name, char *p_jediname, int lengthName){
    int lastIndex, countBlanks=0;
    for (int i=0; i<lengthName; i++, p_name++){
        if (*p_name == ' '){
            countBlanks++;
            lastIndex = i;
        }
    }
    switch(countBlanks){
        case 0:
            printf("The original name must be complete.");
            return 0;
        default: 
            return lastIndex;
    }
}
void main(){
    char name[SIZE], jediName[SIZE], mothersName[SIZE], cityName[SIZE];
    printf("\nType in the original name: ");
    gets(name);
    printf("\nType in the mothers name: ");
    gets(mothersName);
    printf("\nType in the city name: ");
    gets(cityName);
    int lastIndex = verifyName(name, jediName, strlen(name));
    if (lastIndex!=0){
        createJediName(name, jediName, mothersName, cityName, lastIndex);
        viewJediName(jediName, strlen(jediName));
    }
}
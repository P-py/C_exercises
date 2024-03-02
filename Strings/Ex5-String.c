#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

void search(char *p_search, int length, char *p_input){
    int result=0;
    for (int i=0; i<length; i++, p_search++){
        if (*p_search == *p_input){
            printf("\nThe char \"%c\" was found in position %d.", *p_input, i+1);
            result = 1;
            break;
        }
    }
    if (result==0){
        printf("\nThe char \"%c\" was not found.");
    }
}
void main(){
	char stringVetor[SIZE];
    char searchInput;
	printf("\nType in the string to search in: ");
	gets(stringVetor);
    printf("\nType in the single character to search: ");
    fflush(stdin);
    scanf("%c", &searchInput);
    search(stringVetor, strlen(stringVetor), &searchInput);
}
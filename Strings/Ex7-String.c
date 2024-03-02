#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

int searchAndCount(char *p_search, char *p_input, int length, int *p_positions){
    int count=0;
    for (int i=0; i<length; i++, p_search++){
        if (*p_search == *p_input){
            count++;
            *p_positions = i+1;
            p_positions++;
        }
    }
    return count;
}
void result(int count, char searchInput, int *p_positions){
    switch(count){
        case 0:
            printf("\nThe char \"%c\" does not occur in the string.", searchInput);
            break;
        default:
            printf("\nThe char \"%c\" occurs %d time(s) in the string.", searchInput, count);
            for (int i=0; i<count; i++, p_positions++){
                printf("\nPosition %d", *p_positions);
            }
            break;
    }
}
void main(){
    char string[SIZE], searchInput;
    int positions[SIZE];
    printf("\nInput the string to search in: ");
    gets(string);
    printf("\nType in the char/letter to search: ");
    scanf("%c", &searchInput);
    int count = searchAndCount(string, &searchInput, strlen(string), positions);
    result(count, searchInput, positions);
}
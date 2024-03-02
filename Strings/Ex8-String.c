#include <stdio.h>
#include <conio.h>
#include <string.h>

#define SIZE 100

void searchString(char *p_source, char *p_input, int *p_positions, int lengthSource, int lengthInput){
    int countInputResult = 0; 
    char *p_input_original = p_input;
    int *p_positions_original = p_positions;
    for (int i=0; i<lengthSource; i++, p_source++){
        if (*p_source == *p_input){
            for (int j=0; j<lengthInput; j++, p_input++){
                if (*p_input==*(p_source+j)){
                    countInputResult++;
                    *p_positions = i+1+j;
                    p_positions++;
                }
            }
            if (countInputResult == lengthInput){
                printf("\nThe input string was found in the source.");
                printf("\nPositions: ");
                p_positions = p_positions_original;
                for (int i=0; i<lengthInput; i++, p_positions++){
                    printf("\n%d", *p_positions);
                }
                break;
            }
            else {
                p_positions_original = 0;
                for (int i=0; i<lengthInput; i++){
                    *p_positions = -1;
                }
                countInputResult = 0;
                p_input = p_input_original;
            }
        }
    }
    if (countInputResult==0){
        printf("\nThe input string was not found in the source.");
    }
}
void main(){
    char string[SIZE], inputString[SIZE];
    int positions[SIZE];
    printf("Type in the source string: ");
    gets(string);
    printf("Type in the string to be searched: ");
    gets(inputString);
    searchString(string, inputString, positions, strlen(string), strlen(inputString));
}
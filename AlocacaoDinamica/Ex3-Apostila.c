#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void aloc(float **p, int count){
    if ((*p = (float*) realloc(*p, count*sizeof(float)))==NULL){
        printf("\nAllocation error.");
    }
    else {
        printf("\nSuccessfully allocated @ %u.", *p);
    }
}
void store(float *p, int count){
	printf("\nType in the number to store @ %u: ", p+count);
	scanf("%f", p+count);
	fflush(stdin);
}
void viewReversed(float *p, int count){
	int i;
	for (i=count-1; i>-1; i--){
		printf("\n%.2f @ %u", *(p+i), p+i);
	}	
}
void main(){
    float *ptr = NULL;
    int count = 0;
    char option;
    do {
        aloc(&ptr, count+1);
        store(ptr, count);
        count++;
        printf("\nWant to continue (y/n)? ");
        scanf("%c", &option);
        fflush(stdin);
    }while(option!='N'&&option!='n');
    viewReversed(ptr, count);
    getch();
}

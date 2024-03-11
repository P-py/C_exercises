#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void aloc(char **p, int count){
	if ((*p = (char*) realloc(*p, count*sizeof(float)))==NULL){
		printf("\nAllocation error.");
		exit(0);
	}
	else {
		printf("\nSuccessfully allocated @ %u", *p);
	}
}
void storeInversedCase(char *p, char *pInv, int count){
	printf("\nType in the letter @ %u: ", p+count);
	scanf("%c", p+count);
	if ((int)*(p+count)<=122&&(int)*(p+count)>=97){
		*(pInv+count) = toupper(*(p+count));
	}
	else if ((int)*(p+count)<=90&&(int)*(p+count)>=65){
		*(pInv+count) = tolower(*(p+count));
	}
	fflush(stdin);
	printf("\nSuccessfully stored %c @ %u", *(p+count), p+count);
}
void view(char *p, int count){
	int i;
	printf("\nNORMAL LETTER LIST");
	for (i=0; i<count; i++){
		printf("\n%c", *(p+i));
	}	
}
void viewTransformed(char *p, int count){
	int i;
	printf("\n-INVERSED CASE LETTER LIST-"); 
	for (i=0; i<count; i++){
		printf("\n%c", *(p+i));
	}
}
void main(){
	char option;
    int count = 0;
    char *ptr = NULL;
    char *ptrInverted = NULL;
    do{
        aloc(&ptr, count+1);
        aloc(&ptrInverted, count+1);
        storeInversedCase(ptr, ptrInverted, count);
        count++;
        printf("\nDo you want to continue (y/n)? ");
        scanf("%c", &option);
        fflush(stdin);
    }while(toupper(option)!='N');
    view(ptr, count);
    viewTransformed(ptrInverted, count);
}

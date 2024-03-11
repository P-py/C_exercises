#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 1000

void aloc(char **p, int size){
	if ((*p = (char*) realloc(*p, size*sizeof(float)))==NULL){
		printf("\nAllocation error.");
		exit(0);
	}
	else {
		printf("\nSuccessfully allocated char vector with size %d @ %u", size, *p);
	}
}
void store(char *p, char string[], int size){
	int i;
	for (i=0; i<size; i++){
		*(p+i) = string[i];
	}
}
void transform(char *p, int size){
	int iterations = size/2;
	int iterator;
	for (iterator = 0; iterator<iterations; iterator++){
		char aux[1];
		aux[0] = *(p+iterator);
		*(p+iterator) = *(p+size-1-iterator);
		*(p+size-1-iterator) = aux[0];
	}
}
void view(char *p, int size){
	int i;
	printf("\n");
	for (i = 0; i<size; i++){
		printf("%c", *(p+i)); 
	}
}
void main(){
	char *ptr = NULL;
	char string[SIZE];
	int i;
	printf("\nType in the string to store: ");
	gets(string);
	aloc(&ptr, strlen(string));
	store(ptr, string, strlen(string));
	transform(ptr, strlen(string));
	view(ptr, strlen(string));
    //char *ptr = NULL;
    //char string[5] = {'p', 'e', 'd', 'r', 'o'};
    //printf("\n%d", strlen(string));
    //int i;
    //for (i=0; i<5; i++){
    //	printf("%c", string[i]);
	//}
	//int iterations = 5/2;
	//printf("\n%d\n", iterations);
	//for (i=0; i<iterations; i++){
	//	char aux[1];
	//	aux[0] = string[i];
	//	string[i] = string[4-i];
	//	string[4-i] = aux[0]; 
	//}
	//for (i=0; i<5; i++){
    //	printf("%c", string[i]);
	//}
}

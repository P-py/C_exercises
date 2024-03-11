#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#define SIZE 30

void aloc(float **p, int count){
	if ((*p = (float*) realloc(*p, count*sizeof(float)))==NULL){
		printf("\nAllocation error.");
		exit(0);
	}
	else {
		printf("\nSuccessfully allocated @ %u", *p);
	}
}
void store(float *p, int count){
	printf("\nType in the temperature @ day %d: ", count+1);
	scanf("%f", p+count);
	fflush(stdin);
}
void viewHighestAndDay(float *p, int count){
	float average = 0;
	float highest = 0;
	int highestIndex = 0;
	int i;
	for (i=0; i<count; i++){
		average += *(p+i);
	}
	average = average/count;
	for (i=0; i<count; i++){
		if (i==0){
			highest = *(p+i);
			highestIndex = i+1;
		}
		else {
			if (*(p+i)>=highest){
				highest = *(p+i);
				highestIndex = i+1;
			}
		}
	}
	printf("\nHighest temperature: %.2f @ day %d", highest, highestIndex);
	printf("\nAverage: %.2f\n", average);
}
void main(){
	float *ptr = NULL;
	int count=0;
	char option;
	do{
		aloc(&ptr, count+1);
		store(ptr, count);
		count++;
		viewHighestAndDay(ptr, count);
	}while(count<SIZE);
}

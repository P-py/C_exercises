#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void aloc(float **p, int count){
    if ((*p = (float*) realloc(*p, count*sizeof(float)))==NULL){
        printf("\nAllocation error.");
        exit(0);
    }
    else {
        printf("\nSuccessfully allocated @ %u.", *p);
    }
}
void store(float *p){
    printf("\nType in the value to store @ %u: ", p);
    scanf("%f", p);
    fflush(stdin);
}
void viewAndAverage(float *p, int count){
    float sum=0;
    int i;
    for (i=0; i<count; i++){
        printf("\n%.2f @ %u", *(p+i), p+i);
        if (*(p+i)!=0){
            sum += *(p+i);
        }
    }
    printf("\nSum: %.2f", sum);
    printf("\nAverage: %.2f", (sum/(float)count));
}
void main(){
    char option;
    int count = 0;
    float *ptr = NULL;
    do{
        aloc(&ptr, count+1);
        store(ptr+count);
        count++;
        printf("\nDo you want to continue (y/n)? ");
        scanf("%c", &option);
        fflush(stdin);
    }while(toupper(option)!='N');
    viewAndAverage(ptr, count);
}

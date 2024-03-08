#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
    char *ptr = NULL;
    if ((ptr=(char*) malloc(8*sizeof(char)))==NULL){
        printf("\nErro");
    }
    int *ptr_int = NULL;
    if ((ptr_int=(int*) malloc(2*sizeof(int)))==NULL){
        printf("\nErro");
    }
}
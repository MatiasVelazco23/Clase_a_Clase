/*
 ============================================================================
 Name        : E_EjercicioMeet4NumHastaQueElUserQuiera.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//definir maximo y minimo

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0/// SIN ;

int main(void) {
	int maximo;
	int minimo;
	int bufferInt;
	int flag=TRUE;


	do{
    printf("Ingrese numero(888, finaliza el ingreso): \n");
    scanf("%d",&bufferInt);

    if(flag == TRUE){
    			maximo=bufferInt;
    			minimo=bufferInt;
    			flag= FALSE;
    		}
    		else{
    			if(bufferInt==888){
    				break;
    			}
    			if(bufferInt>maximo){
    				maximo=bufferInt;
    			}
    			if(bufferInt<minimo){
    				minimo=bufferInt;
    			}
    		}
    	}while(TRUE);   //while(TRUE)
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : E_EjercicioMeet3_MaxYMin.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//perdir 5 numeros
#define TRUE 1   // DEFINIR 1 TRUE
#define FALSE 0  //DEFINIR 0 FALSO
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int maximo;
	int minimo;
	int i;     //i=0
	int bufferInt; //bufer?
	int flag = TRUE;   //flag evitable

	for(i=0;i<5;i++){
		printf("Ingrese numero %d\n",i+1);
		scanf("%d",&bufferInt);
		if(flag == TRUE){  ///TRUE en mayuscula i==0
			maximo=bufferInt;
			minimo=bufferInt;
			flag= FALSE;
		}
		else{
			if(bufferInt>maximo){
				maximo=bufferInt;
			}
			if(bufferInt<minimo){
				minimo=bufferInt;
			}
		}
	}
	printf("El valor maximo es: %d\n y El valor minimo es: %d",maximo,minimo);

	return EXIT_SUCCESS;
}

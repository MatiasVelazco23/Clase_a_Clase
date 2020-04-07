/*
 ============================================================================
 Name        : C_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL); // todo lo que se imprima enseguida sale por acà
	int numero;          // definir variable

	printf("Ingrese nùmero:");
	scanf("%d",&numero);  //&numero pasar direccion con &
	//NO valor de variable(numero), scanf espera a que ingrese un valor, si pongo
	//(numero) solo no tendrìa valor
	printf("Ingresaste %d",numero);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : Variables_y_define.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MENSAJE  "hola mundo\n"

int main(void) {
	printf(MENSAJE); /* prints !!!Hello World!!! */

	//TIPO NOMBRE= VALOR;
	int i;  //enteros
	i=27;
	float pi; //flotantes
	pi=3.14;
	char c;   //letras
	c='A';
 //%d enteros
 //%f flotantes              Modificadores de formato
 //%c char
	printf("precio %d\n", i);  // \n salto de lineas
	printf("pi %f\n", pi);  // \n salto de lineas
	printf("letra %c\n", c);


	return EXIT_SUCCESS;
}

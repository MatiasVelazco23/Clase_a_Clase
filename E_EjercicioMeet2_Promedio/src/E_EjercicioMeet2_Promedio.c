/*
 ============================================================================
 Name        : EjercicioMeet2Pedir5Numeros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	int numero;
	int contador;
	float promedio;
	int acumulador=0;   /// iniciar acumulador en 1

	for(contador=0;contador<5;contador++){  /// iniciar contador en 1
	printf("Ingrese numero:\n");
	scanf("%d",&numero);
	acumulador=acumulador+numero;
	}

	promedio=acumulador / 5;
    printf("El promedio es %.2f", promedio);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : F_Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int b;
	int c;
	char o;
	float f;
	int direccion

	printf("El size de A es :%d", sizeof(a));//cantidad de bytes que ocupa una variable
	printf("El size de A es :%d", sizeof(o));
	printf("El size de A es :%f", sizeof(f));
	direccion= &a
	printf("La direccion de a es %p", &direccion);   	//%d muestra resultado decimal %p resultado hexa//printf("La direccion de a es %d", &a);//printf("La direccion de a es %d", &b);
	printf("La direccion de a es %p", &b);

	return EXIT_SUCCESS;
}

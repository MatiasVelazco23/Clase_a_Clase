/*
 ============================================================================
 Name        : EjercicioMeet1.c
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
	//pedir dos numeros y sacar suma resta division y multiplicacion
	int numero1;
	int numero2;
    int resultado_Resta;
    int resultado_Suma;
    int resultado_Multiplicacion;
	int resultado_Division;
	printf("Ingrese primer nùmero:\n");
	scanf("%d",&numero1);
	printf("Ingresaste %d",numero1);
	printf("Ingrese segundo nùmero:\n");
    scanf("%d",&numero2);
	printf("Ingresaste %d\n",numero2);

	resultado_Resta= numero1-numero2;

	printf("Resultado resta %d\n",resultado_Resta);

	resultado_Suma= numero1+numero2;

	printf("Resultado Suma %d\n",resultado_Suma);

	resultado_Multiplicacion= numero1*numero2;

	printf("Resultado multiplicacion%d\n",resultado_Multiplicacion);

	resultado_Division= numero1/numero2;

	printf("Resultado multiplicacion%d\n",resultado_Division);


		return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : E_EjercicioMeet5FuncionSumar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//funcion programa ya establecido que invocamos
//las funciones abtraen el còdigo
//perfite reutilizar
#include <stdio.h>
#include <stdlib.h>
int sumarConLimites(int operador1,int operador2);  // hacer prototipo siempre

int main(void) {    //
	setbuf(stdout,NULL);//otra funcion
	int numero1;// local de main
	int numero2;// local de main
	int suma;

	//resultado= sumar(4,78);

	//entra

	printf("Ingrese un numero\n;");// printf es una funcion
	//vuelve al main
	scanf("%d",&numero1);
	printf("Ingrese otro numero\n;");
		scanf("%d",&numero2);


 //  suma= numero1+numero2; //le doy argumentos
//	if(suma>100){
//		suma=100;
//}
		suma=sumarConLimites(numero1,numero2); // se copian los valores de scanf
    printf("El resultado de la suma es: %d",suma);


	return EXIT_SUCCESS;
}


//funciones auxiliares a mi programa
//definicion de la funcion sumar con limite
// int= que tipo de valor retorna mi funcion//nombre de la funcion// datos que recibe la funcion(argumentos)

int sumarConLimites(int operador1,int operador2){ //los operadores toman los valores en orden de main//
	int resultado;    // variable locales de funcion sumarConLimites
   // no puedo decir int operador1=numero 1 porque numero1 es local de main
	resultado=operador1+operador2;
			if(resultado>100){
				resultado=100;
			}
	//retornar valor
	return resultado;
}

#include <stdio.h>
#include <stdlib.h>

/*Remplazar los ' ? ' al siguiente programa [DESCARGAR], para lograr la siguiente funcionalidad.

- Limpie la pantalla
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla
*/
int main(int argc, char *argv[]) {
	setbuf(stdout,NULL);

	int a;
	int b;
	int producto;
	int cuadrado;
	int resultado_Resta;

	system("dir");  //// que?

	do{
	printf("\nIngrese 1er numero: ");
	scanf("%d",&a);
	printf("Ingresaste %d\n ",a);
		if(a==0)
		{
            printf("\nIngrese numero mayor a 0\n");
        	scanf("%d",&a);
            printf("Ingresaste %d\n",a);
		}
    }while(a==0);

	do{
	printf("\nIngrese 2\247 numero: ");
	scanf("%d",&b);
	printf("Ingresaste %d\n",b);
		if(b==0)
		{
		printf("\nIngrese numero mayor a 0\n");
		scanf("%d",&a);
		printf("Ingresaste %d\n", b);
		}
    }while(b==0);

	producto=a*b;
	cuadrado=a*a;
	resultado_Resta=a-b;

	printf("\nEl valor 1: %d\nEl valor 2\247: %d\n\nEl producto es: %d\n\nEl cuadrado del 1\247 valor %d es: %d \n",a,b,producto,a,cuadrado);
	printf("La resta es %d", resultado_Resta);


	return 0;
}

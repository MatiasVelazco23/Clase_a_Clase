#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout,NULL);
	int numero1;
	int numero2;
	int resta;

	printf("ingrese un numero:");
	scanf("%d",&numero1);
	while(numero1 == 0)
		{
		printf("ingrese numero distinto de 0:");
			scanf("%d",&numero1);
		}
	printf("ingrese segundo numero:");
		scanf("%d",&numero2);
	while (numero2 == 0)
		{
		printf("ingrese un numero distinto de 0:");
				scanf("%d",&numero2);
		}

	resta= numero1-numero2;
	printf("el restultado de la resta es %d \n",resta);
	if (resta < 0)
	{
		printf("el resultado es negativo");

	}
	else
	{
		printf("el resultado es positivo");
	}
	return EXIT_SUCCESS;
}

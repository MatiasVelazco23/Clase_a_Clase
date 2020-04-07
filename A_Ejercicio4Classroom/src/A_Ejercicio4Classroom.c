#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout,NULL);

	int numeros;
	int i=0;
	int ContadorPositivos=0;
	int ContadorNegativos=0;

	for(i=0;i<10;i++)
	{
		printf("ingrese 10 numeros:");
		scanf("%d",&numeros);
		if (numeros >= 0)
		{
			ContadorPositivos++;
		}
		else
		{
			ContadorNegativos++;
		}
	}
	printf("la cantidad de positivos es %d \n",ContadorPositivos);
	printf("la cantidad de negativos es %d",ContadorNegativos);

	return EXIT_SUCCESS;
}

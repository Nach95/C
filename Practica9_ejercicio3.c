//UNAM-Becarios
//Leal Gonzalez Ignacio
//Invertir cadena

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{	
	char *invertido, *temporal, temporal1;
	int var=0;
	printf("La cadena a invertir es: %s\n", *(argv+argc-1));/*recorremos mediante apuntadores para obtener el elemento ingresado por consola*/
	for(temporal = *(argv+argc-1); *temporal != '\0'; temporal++)//contamos cuantos caracteres es la palabra
	{
		var += 1;
	}
	printf("\nLa cadena invertida es: ");
	for(int a = 0; a <= var; a++)//leemos con apuntadores de la ultima letra a la primera letra
	{
		printf("%c", *(*(argv+1)+var-a));
	}
	printf("\n");
	return(0);
}

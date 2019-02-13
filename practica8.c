//UNAM-Becarios
//Leal Gonzalez Ignacio
//Ultimo elemento ingresado desde consola

#include<stdlib.h>
#include<stdio.h>

int main(int argc, int **argv)
{
	printf("El ultimo elemento cadena es: %s\n", *(argv+argc-1));/*recorremos mediante apuntadores para obtener el ultimo elemento ingresado por consola*/
	return(0);
}

//UNAM-Becarios
//Leal Gonzalez Ignacio
//Factorial de un numero

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char num[50];//Variable donde se guardara el numero que introduce el usuario de tipo string
	int num1;//Variable donde se guardara el numero que introduce el usuario de tipo int
	int cont=1;//Variable que servira de contador para el ciclo for
	int factorial=1;//Variable donde se guardara el fatorial
	printf("Ingrese un numero para calcular el factorial: ");
	scanf("%s", num);//Ingresa el numero el usuario
	num1 = atoi(num);//Convertimos de tipo string a int
	for (cont; cont<=num1; cont++)
	{
		factorial=factorial*cont;//Calculo del factorial	
	}
	printf("El factorial es: %i\n", factorial);//Mostramos el factorial obtenido
	return(0);
}

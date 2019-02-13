//UNAM-Becarios
//Leal Gonzalez Ignacio
//Hackea este Programa

#include<stdio.h>
#include<stdlib.h>

//Recibimos dos numeros desde consola
int main(int argc, char **argv)
{
	printf("Ingresaste el %s y el %s\n El mayor es el numero %s\n", *(argv + 1), *(argv + 2), atoi(*(argv + 1))>atoi(*(argv + 2))?*(argv + 1):*(argv + 2));
//Comparamos los dos numeros y mostramos el mayor
return(0);
}


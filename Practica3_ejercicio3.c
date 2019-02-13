//UNAM-Becarios
//Leal Gonzalez Ignacio
//ROT 13

#include<stdio.h>
#include<string.h>

int main()
{
	char nombre[80];//Variable donde se guardara el nombre de pila del usuario
	int len;//Variable donde se guardara la longitud del nombre de pila
	int rot = 13;//Variable que almacena un valor de 13
	char actual;//Variable donde se guardara caracter por caracter del nombre de pila
	char var;//Variable con el cambio de la letra del nombre de pila
	printf("Ingresa tu nombre de pila: ");//El usuario guarda el nombre de pila del usuario
	scanf("%s", nombre);
	printf("Tu nombre es: %s\n", nombre);
	len = strlen(nombre);//Longitud del nombre de pila
	printf("\nTu nombre codificado es: ");
	for(int cont = 0; cont<len; cont ++)//For donde se hace el corrimiento del nombre de pila
	{
		actual = nombre[cont];//Guardamos un caracter del nombre de pila
		var = actual + rot;
		if ((actual - 'a') + rot > 25)//Si al recorrer la letra es mayor a 26
		{
		    rot = ((actual - 'a') + rot) - 26;//Hacemos una division modulo 26 y recorremos desde el principio
		    var = 'a' + rot;
		}
		printf("%c", var);//Imprimimos el cambio de letra por la codificada
		rot = 13;//Reiniciamos la variable rot a 13
	}
	printf("\n");
	return(0);
}

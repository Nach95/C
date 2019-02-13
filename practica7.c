//UNAM-Becarios
//Leal Gonzalez Ignacio
//Comparacion de Passwords

#include<stdio.h>
#include<string.h>

int main()
{
	char password[30];	
	char contra[5] = {0x12, 0x13, 0x14, 0x15, 0x16};//hash del password correcto
    	char hash[5] = {0x21, 0x22, 0x23, 0x24, 0x25};//hash (key)
    	
	int cont=1;//Variable para contar los intentos de ingreso del password
	for (cont; cont<=3; cont++)//Ciclo 
	{
		printf("Ingrese el password: ");//El usuario introduce el password
		scanf("%s", password);//Almacenamos el password 
		for(int a = 0; a < 5; a++)//hacemos la operacion xor del password ingresado con la key
		{
			password[a] ^= hash[a];
	    	}
		if((strncmp(password, contra, 5)) == 0)/*Hacemos la comparacion del password introducido los primeros 5 elementos con el password correcto*/
		{
			printf("\nPassword correcto!!!!\n");//Caso correcto
			cont=4;//Se sale del ciclo for
		}else	
			printf("\nPassword incorrecto :(\n");//Caso incorrecto
	}
	return(0);
}

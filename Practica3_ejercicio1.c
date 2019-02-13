//UNAM-Becarios
//Leal Gonzalez Ignacio
//Comparacion de Passwords

#include<stdio.h>
#include<string.h>

int main()
{
	char password[20];//Variable donde se almacenara el password que introduce el usuario
	int cont=1;//Variable para contar los intentos de ingreso del password
	for (cont; cont<=3; cont++)//Ciclo 
	{
		printf("Ingrese el password: ");//El usuario introduce el password
		scanf("%s", password);//Almacenamos el password 
		if((strcmp(password, "hola123.,")) == 0)//Hacemos la comparacion del password introducido con el password correcto
		{
			printf("\nPassword correcto!!!!\n");//Caso correcto
			cont=4;//Se sale del ciclo for
		}else	
			printf("\nPassword incorrecto :(\n");//Caso incorrecto
	}
	return(0);
}

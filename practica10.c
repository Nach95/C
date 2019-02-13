//UNAM-Becarios
//Leal Gonzalez Ignacio
//Numero pseudoaleatorio

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	int fd, x;
	size_t tamano;
	char *archivo = "/dev/random\0";//Direccion del archivo	
	fd = open(archivo, O_RDONLY);//Abrimos el archivo en modo lectura solamente
	read(fd, &x, tamano);/*Leemos el archivo y guardamos el numero en variable x, con un tamano maximo definido en la variable tamano*/
	printf("El numero aleatorio es: %i\n", x);//Imprimimos el numero aleatorio
	close(fd);//Cerramos el archivo
	return(0);
}


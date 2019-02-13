//UNAM-Becarios
//Leal Gonzalez Ignacio
//Estructura 

#include<stdio.h>
#include<string.h>

//Definimos la estructura instructor
struct instructor 
{
   	char nombre[25];
	char curso[10];
	int edad;
	char carisma[10];
};

struct instructor ins(struct instructor i)
{
   	struct instructor l = i;
   	return l;
}

int main(void)
{
   	struct instructor i = {"Fernando", "c", 28, '\0'};
   	struct instructor j = ins(i);
	//Mostramos los elementos de la estructura
   	printf("%s\n", j.nombre);
	printf("%s\n", j.curso);
	printf("%i\n", j.edad);
	printf("%s\n", j.carisma);
   	return 0;
}



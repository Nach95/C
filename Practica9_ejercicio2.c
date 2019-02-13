//UNAM-Becarios
//Leal Gonzalez Ignacio
//Bubble sort con apuntadores

#include<stdio.h>
#include<string.h>

void bubble_sort(int * const arr, const int tam);
void orden(int *aux1, int *aux2);
int main()
{ 
	int arreglo[10] = {85, 14, 06, 01, 46, 20, 23, 04, 03, 95};//Arreglo de elementos a ordenar
	printf("Valores desordenados\n");
	for(int i=0; i<10; i++)//Mostramos los elementos
	{
		printf("%d\n", arreglo[i]);
	}
	 
	bubble_sort(arreglo, 10);//Llamamos a la funcion la cual va a ir comparando numero por numero cual es mayor
	printf("\nValores ordenados\n");
	for(int i=0; i<10; i++)//Mostramos los elementos ordenados
	{
		printf("%d\n", arreglo[i]);
	}
 	return 0;
}
 
//Funcion que va a ir comparando elemento por elemento, recibe el apuntador del arreglo y la longitud del arreglo
void bubble_sort(int * const arr, const int tam)
{
	int var, a = 0; 
	for(var = 0; var < tam-1; var++)//Comparacion de un elemento con el resto del arreglo
	{
		for(a = 0; a < tam-1; a++)
		{
			if(arr[a] > arr[a+1])
			{
            			orden(&arr[a], &arr[a+1]);//Funcion para ir cambiando los elementos
         		}
      		}
   	}
}

//Funcion que recibe dos parametros de tipo apuntador los cuales son los elementos a cambiar de posicion 
void orden(int *aux1, int *aux2)
{
	int var;
   	var = *aux1;
   	*aux1 = *aux2;
   	*aux2 = var;
}

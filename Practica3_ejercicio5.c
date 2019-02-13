//UNAM-Becarios
//Leal Gonzalez Ignacio
//Fibonacci	

#include<stdio.h>

long fibonacci(long n ;//Funcion de Fibonacci
 
int main()
{
   	long res; 
   	long num;    
  	printf( "Introduzca un entero para calcular el valor de la serie de Fibonacci: " );
   	scanf( "%ld", &num);  
	res = fibonacci(num);//Calculo del resultado
	printf( "\nFibonacci de %ld = %ld\n", num, res);
  	return 0; 
} 
 
long fibonacci(long var)//Funcion de Fibonacci si es 0 o 1 devuelve el mismo valor en caso contrario se llama asi mismo
{
   	if(var == 0 || var == 1)
	{
      		return var;   	
	} 
   	else 
	{ 
      	 	return fibonacci(var - 1) + fibonacci(var - 2);
   	} 
}

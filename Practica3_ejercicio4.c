//UNAM-Becarios
//Leal Gonzalez Ignacio
//Numero par a nivel de bits

#include <stdio.h>

int main()
{
    int num;
    printf("Ingresa un numero: ");//Le pedimos al usuario que ingrese un numero
    scanf("%d", &num);//Guardamos el numero ingresado en una variable
    if(num&1)/*Utilizamos la operacion and con el numero ingresado con el numero 1, si el resultado nos da 0 es par en caso contrario es  impar*/
        printf("%d Numero impar\n", num);
    else
        printf("%d Numero par\n", num);
    return 0;
}

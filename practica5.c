//UNAM-Becarios
//Leal Gonzalez Ignacio
//One Time Pad

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	char frase[1000], key[1000] ="estaesunafrasesegurabuenoesocreo", fkcod[1000], res[1000], fkdec[1000];/*variables para guardar lo cifrado o para descifrar, conteniendo la llave*/
	int lenf, lenk, aux = 0;
	lenk = strlen(key);//Longitud de la llave
	if(atoi(*(argv + 1)) == 1)//Opcion para codificar
	{
		printf("Ingrese la frase a cifrar: ");
		fgets(frase, 100, stdin);//Texto a codificar
		lenf = strlen(frase) - 1;//Longitud del texto
		for(int cont1 = 0; cont1 < lenf; cont1++)//Iteramos elemento por elemento el texto
		{
			if((aux + 1) == lenf || (aux + 1) == lenk)//Realizamos la operacion XOR 
			{
				aux = 0;
				fkcod[cont1] = frase[cont1] ^ key[aux];
				aux = aux + 1;
				fkcod[cont1] = fkcod[cont1] + 32;//Sumamos 32 para que sean caracteres imprimibles
			}
			else
			{
				fkcod[cont1] = frase[cont1] ^ key[aux];
				aux = aux + 1;
				fkcod[cont1] = fkcod[cont1] + 32;
			}
		}
		for(int i=0;i<lenf;i++)
	    	{
	      		printf("%c",(fkcod[i]));//Mostramos el texto codificado
	    	}
	    	printf("\n");
	}
	if(atoi(*(argv + 1)) == 2)
	{
		printf("Ingrese la frase a descifrar: ");
		fgets(frase, 100, stdin);//Texto a decodificar
		lenf = strlen(frase) - 1;//Longitud del texto
		for(int cont1 = 0; cont1 < lenf; cont1++)
		{
			if((aux + 1) == lenf || (aux + 1) == lenk)//Iteramos elemento por elemento el texto
			{
				aux = 0;
				frase[cont1] = frase[cont1] - 32;//Restamos 32 para que sean caracteres imprimibles
				res[cont1] = frase[cont1] ^ key[aux];
				aux = aux + 1;
			}
			else
			{
				frase[cont1] = frase[cont1] - 32;
				res[cont1] = frase[cont1] ^ key[aux];
				aux = aux + 1;
			}
		}
		for(int i=0;i<lenf;i++)
	    	{
	      		printf("%c",(res[i])); //Mostramos el texto decodificado
	    	}
	    	printf("\n");
	}
	return(0);
}

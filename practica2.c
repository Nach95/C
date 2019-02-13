//UNAM-Becarios
//Leal Gonzalez Ignacio
//Fecha maxima que puede almacenar una variable en unix

#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<limits.h>

int main () {
	int seg = 60, min = 60, hor = 24, year =365, years, sec, segYear, day, segDay, bi, secs, hours, mins;
	
	struct tm t, *tiempo;	
	char buffer[80];
   
	setenv("TZ", "GMT+6", 1);//Establecemos la zona horaria de Mexico
    	tzset();
	printf("El valor maximo de un entero de 32 bits es: %d\n", INT_MAX);//Valor maximo de un entero
	segDay = seg * min * hor;//Segundos en un dia
	segYear = segDay * year;//Segundos en 365 dias
	years = INT_MAX/segYear;//Years que puede almacenar
	bi = years/4;//Years bisiestos se les agrega un dia
	sec = INT_MAX - years*segYear;//Segundos restantes despues de restar los years
	sec = sec - (bi*segDay);	
	day = sec/segDay;//dia maximo 
	secs = sec - day*segDay;
	hours = secs/(seg * min);//hora maxima
	secs = secs - hours*60*60;
	mins = secs/60;	//minutos maximos
	secs = secs - mins*60;//segundos maximos

	printf("\nYears %i\n", years);	
	printf("\nDays %i\n", day);
	printf("\nHours %i\n", hours);
	printf("\nMins %i\n", mins);
	printf("\nSeg %i\n", secs);

	//EStructura para convertir la fecha	
	t.tm_year = 1970 + years - 1900;
	t.tm_mon = 1;
	t.tm_mday = day; 
	t.tm_hour = hours;
	t.tm_min = mins;
	t.tm_sec = secs;

	strftime(buffer,80,"%x - %I:%M%p", &t);//Funcion que nos da el formato de la fecha y hora con segundos 
   	printf("Formato de fecha y hora: |%s|\n", buffer );

   	return(0);
}

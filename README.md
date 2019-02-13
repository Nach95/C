# Practicas-C
Practicas realizadas en Lenguaje C y llamadas al sistema

## Practica1 
**programa.py**

_En este programa se listan numeros del 0 al 30 y si es multiplo de 3 se muestra en pantalla la palabra fizz y si es multiplo de 
5 se muestra en pantalla la palabra buzz, en el caso donde el numero sea multiplo de 3 y de 5 se muestra en pantalla la palabra 
fizzbuz._

## Practica2 
**practica2.c**
_En este programa se muestra la fecha en la zona horaria del centro de Mexico, la cual es la maxima posible guardada en un entero de 32 bits, mostrando la fecha con horas, minutos y segundos, cuando esto ocurre._

## Practica3
**ejercicio1.c**
_En este programa se compara un password correcto con el password que ingresa el usuario, si es correcto se mostrara un mensaje de password correcto en caso contrario se le volvera a pedir, el usuario tiene tres intentos para escribir el password correcto._

**ejercicio2.c**
_Programa que calcula el factorial de un numero, ingresado por el usuario._

**ejercicio3.c**
_Programa que solicita el nombre de pila del usuario y lo cambia con una codificacion ROT13, cada letra del nombre de pila se cambia por la que esta a 13 lugares del abecedario, se utilizo el becedario en ingles._

**ejercicio4.c**
_Programa que le pide al usuario un numero y muestra si es par o es impar, utilizando comparacion de bits con la operacion AND con el numero ingresado por el usuario y con el numero 1._

**ejercicio5.c**
_Programa que calcula el numero de Fibonacci dado un numero entero introducido por el usuario, de manera recursiva._

## Practica4
**practica4.c**
_En este programa se ejecuta ingresando dos numeros al momento de ejecutarlo, mostrando si es mayor el numero uno ingresado o el numero dos ingresado, todo esto se ejecuta con un printf en solo una linea dentro del int main()._
Para ejecutarlo es de la siguiente manera.
```
./practica4.exe num1 num2
```
Donde num1 y num2 son dos numeros, los cuales decidira el usuario.

## Practica5
**practica5.c**
_Este programa recibe un tipo bandera si es 1 va a codificar si es 2 va a decodificar, utiliza una llave definida en el programa la cual con la operacion XOR va a codificar el texto ingresado o a decodificar, dependiendo del tipo de bandera que utilice el usuario._
Para codificar es de la siguiente manera.
```
./practica5.exe 1
```
Para decodificar es de la siguiente manera.
```
./practica5.exe 2
```

## Practica6
Pasos para encontrar el password con gb

Encontre el password de mi programa por dos metodos.
Metodo 1:
	Una vez entrado en gdb con el comando start, nos va ejecutando el programa linea por linea mostrandonos el codigo y que es lo que 		hace esa linea en consola, con el comando next nos pasamos a la siguiente linea, al pasar por varias lineas nos muestra donde hago 		la comparacion y ahi esta el password en claro.

Metodo 2:
	En este metodo primero, ejecutamos el comando disas main para que nos muestre en ensamblador el programa, ya que nos lo mostro 		analizando los nombres de las funciones, variables, hay una funcion que tiene el nombre de strcmp@plt, lo que nos hace pensar que 		ahi se hace la comparacion del password correcto con el que ingresamos, ponemos un break point ahi con el comando break strcmp@plt y 		con el comando run, ejecutamos el programa hasta ese punto, una vez ejecutado vemos el contenido de las variables con el comando x/s 		$nombreVariable, mostrandonos en hexadecimal y en cadena el contenido de la variable, despues de analizar variables encontramos que 		la variable $rsi tiene el password correcto.

## Practica7
**practica7.c**
_En este programa se compara un password con el password que ingresa el usuario, pero por medio de hashes el password correcto lo guardamos en hexadecimal, tenemos nuestro hash que sera como nuestra llave y con la operacion xor al password ingresado deben coincidir los primeros 5 elementos del hash obtenido con el password correcto, si es correcto se mostrara un mensaje de password correcto en caso contrario se le volvera a pedir, el usuario tiene tres intentos para escribir el password correcto, lo que complica saber cual es el password correcto aun teniendo el codigo._

## Practica8
**practica.c**
_._

## Practica
**practica.c**
_._
### Pre-requisitos 📋

_Que cosas necesitas para instalar el software y como instalarlas_

```
Da un ejemplo
```

### Instalación 🔧

_Una serie de ejemplos paso a paso que te dice lo que debes ejecutar para tener un entorno de desarrollo ejecutandose_

_Dí cómo será ese paso_

```
Da un ejemplo
```

_Y repite_

```
hasta finalizar
```

_Finaliza con un ejemplo de cómo obtener datos del sistema o como usarlos para una pequeña demo_

## Ejecutando las pruebas ⚙️

_Explica como ejecutar las pruebas automatizadas para este sistema_

### Analice las pruebas end-to-end 🔩

_Explica que verifican estas pruebas y por qué_

```
Da un ejemplo
```

### Y las pruebas de estilo de codificación ⌨️

_Explica que verifican estas pruebas y por qué_

```
Da un ejemplo
```

## Deployment 📦

_Agrega notas adicionales sobre como hacer deploy_

## Construido con 🛠️

_Menciona las herramientas que utilizaste para crear tu proyecto_

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - El framework web usado
* [Maven](https://maven.apache.org/) - Manejador de dependencias
* [ROME](https://rometools.github.io/rome/) - Usado para generar RSS

## Contribuyendo 🖇️

Por favor lee el [CONTRIBUTING.md](https://gist.github.com/villanuevand/xxxxxx) para detalles de nuestro código de conducta, y el proceso para enviarnos pull requests.

## Versionado 📌

Usamos [SemVer](http://semver.org/) para el versionado. Para todas las versiones disponibles, mira los [tags en este repositorio](https://github.com/tu/proyecto/tags).

## Autores ✒️

_Menciona a todos aquellos que ayudaron a levantar el proyecto desde sus inicios_

* **Andrés Villanueva** - *Trabajo Inicial* - [villanuevand](https://github.com/villanuevand)
* **Fulanito Detal** - *Documentación* - [fulanitodetal](#fulanito-de-tal)

También puedes mirar la lista de todos los [contribuyentes](https://github.com/your/project/contributors) quíenes han participado en este proyecto. 

## Licencia 📄

Este proyecto está bajo la Licencia (Tu Licencia) - mira el archivo [LICENSE.md](LICENSE.md) para detalles

## Expresiones de Gratitud 🎁

* Comenta a otros sobre este proyecto 📢
* Invita una cerveza 🍺 a alguien del equipo. 
* Da las gracias públicamente 🤓.
* etc.



---
⌨️ con ❤️ por [Villanuevand](https://github.com/Villanuevand) 😊


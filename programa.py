#!/usr/bin/python
# -*- coding: utf-8 -*-
#UNAM-Becarios
#Leal Gonzalez Ignacio
#Fizzbuz

for var in range(31):#Intervalo del 0 al 30
	if (var%3) == 0 and (var%5)!=0:#Comparacion si el numero es multiplo de 3 pero no de 5 imprime el numero y fizz
		print var
		print 'fizz'
	elif (var%3) != 0 and (var%5)==0:#Comparacion si el numero es multiplo de 5 pero no de 3 imprime el numero y buzz
		print var
		print 'buzz'
	elif (var%3)==0 and (var%5)==0:#Comparacion si el numero es multiplo de 3 y de 5 imprime el numero y fizzbuzz
		print var
		print 'fizzbuzz'
	else: 
		print var



#!/usr/bin/python
# -*- coding: utf-8 -*-
#UNAM-Becarios
#Leal Gonzalez Ignacio
#Fizzbuz

'''
En este programa se listan numeros del 0 al 30 y si es multiplo de 3 se muestra en pantalla la palabra fizz y si es multiplo de 5 se muestra en pantalla la palabra buzz, en el caso donde el numero sea multiplo de 3 y de 5 se muestra en pantalla la palabra fizzbuzz
'''

for var in range(31):
	if (var%3) == 0 and (var%5)!=0:
		print var
		print 'fizz'
	elif (var%3) == 0 and (var%5)!=0:
		print var
		print 'buzz'
	elif (var%3)==0 and (var%5)==0:
		print var
		print 'fizzbuzz'
	else: 
		print var



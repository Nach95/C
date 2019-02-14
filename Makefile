#UNAM-Becarios
#Leal Gonzalez Ignacio
#Makefile

obj-m := practica15.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
	rm -rf *.o *.ko *.symvers *.mod.* *.order

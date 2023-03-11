CC=g++
FLAGS= -Wall -g
OBJETOS = empleados.o jornaleros.o comunes.o

ejec: main.cpp makefile $(OBJETOS)
	$(CC) $(FLAGS) -o  ppal $(OBJETOS) main.cpp 
empleados : empleados.h empleados.cpp
	$(CC) $(FLAGS) -c empleados.cpp -o empleados.o


jornaleros : jornaleros.h jornaleros.cpp
	$(CC) $(FLAGS) -c jornaleros.cpp -o jornaleros.o


comunes : comunes.h comunes.cpp
	$(CC) $(FLAGS) -c comunes.cpp -o comunes.o

clean : 
	rm -f $(OBJETOS) ppal






generador_lcg.o: generador_lcg.h generador_lcg.c

lcg3.o: lcg3.c generador_lcg.h

lcg3: lcg3.o generador_lcg.o
	gcc -o $@ $^

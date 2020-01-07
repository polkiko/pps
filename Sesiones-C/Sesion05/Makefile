CFLAGS =-Wall -g

sesion05_lcg3: sesion05_lcg3.o generador_lcg.o
	$(CC) $(CFLAGS) -o $@ $^

	generador_lcg.o: generador_lcg.c generador_lcg.h

	sesion05_lcg3.o: sesion05_lcg3.c generador_lcg.h

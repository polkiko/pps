CFLAGS =--Wall -g

lcg1: lcg1.o
	$(CC) $(CFLAGS) -o lcg1 lcg1.c

lcg2: lcg1.o generador_lcg.o
	$(CC) $(CFLAGS) -o $@ $^

generador_lcg.o: generador_lcg.c generador_lcg.h

lcg2.o: lcg2.c generador_lcg.h

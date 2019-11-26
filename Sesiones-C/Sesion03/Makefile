EJECUTABLES=basicos pruebasize
CFLAGS =-ansi -Wall -Werror -pedantic -o

default: basicos pruebasize

%: %.c
	gcc $(CFLAGS) $@ $<

clean:
	rm -f $(EJECUTABLES)

.PHONY: default clean

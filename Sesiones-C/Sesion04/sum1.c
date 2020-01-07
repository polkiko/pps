/**
 * En el siguiente ejemplo vamos a ver el comportamiento de dicho programa.
 * Vamos a crear un programa que se encargue de sumar los n números que le
 * indiquemos y nos lo muestre por pantalla.
 */

#include <stdio.h>

unsigned sum(unsigned i) {
  if (i < 1) {
    return 0;
  } else {
    return i + sum(i-1);
  }
}


int main() {
  unsigned n = 1000000;
  printf("0+1+...+%u = %u\n ", n,sum(n));
  return 0;
}

/**
 * Si vamos escribiendo un n cada vez mayor, llegará un momento que nuestro
 * programa se rompe con un 'stackoverflow' con el siguiente error:
 * Segmentation fault (core dumped), generando un voldado de toda su huella en
 * la memoria.
 * En sesiones posteriores veremos cómo corregir este inconveniente.
 */

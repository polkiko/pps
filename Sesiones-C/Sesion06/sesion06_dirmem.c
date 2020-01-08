/**
 * Sesion 06: Punteros
 *
 * En esta sesión vamos a ver qué son los punteros de C, como se ordena la memoria
 * y la relación entre punteros y arrays.
 *
 * RECOMENDADO consultar el fichero dir.c de esta sesión.
 */

#include <stdio.h>

int main() {
  /**
   * C nos permite tener un control absoluto de la memoria. Para ello utilizaremos
   * una nueva sintaxis y semántica:
   * &e = 'dirección de memoria de la expresión e'
   *
   * Para imprimir dicha dirección utilizaremos %p de printf.
   */

  int x = 42; /* Declaramos la variable x asignándole el entero 42 */

  printf("El valor de x: %d\n", x);   /* Mostramos el valor de x */
  printf("La dirección de x: %p\n", &x);  /* Mostramos la dirección de mem de x */
}
/**
 * La sesión continua con la explicación de cómo se organiza la memoria y lo que
 * son los punteros en el fichero dir.c
 */

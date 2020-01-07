/**
 * Sesion 05: Arrays y Strings
 *
 * En esta clase veremos cómo se definen los vectores (Arrays) y las cadenas
 * de carácteres (Strings), que no son más que un array de caracteres.
 *
 * Además veremos la relación existente entre punteros y arrays, conceptos
 * de mucha utilidad e importancia para entender el lenguaje C.
 */

#include <stdio.h>
#include "generador_lcg.h"

int main() {
  /**
   * La sintaxis básica que nos permite crear arrays de longitud fija es
   * similiar a la de otros lenguajes como java:
   *          tipo nombre[N];
   * O bien:
   *          tipo nombre[] = {e0, e1, ..., en-1}
   *
   * Es importante recordar que no se puede asignar arrays tal cual (a = b).
   *
   * En la siguiente sesión veremos que escribir:
   *        int numeros[]
   * es equivalente a la expresión:
   *        int *numeros
   */

  int aleatorio[M]; /* Recordemos que la M será sutituida por el define, 10 */
  /**
   * Algunas consideraciones importantes a tener en cuenta son que:
   * - Para acceder a la posición simplemente utilizamos la expresión:
   *       nombre[i],     siendo i un número entre 0 y N-1
   * - C no inicializa los datos, de manera que si consultamos lo que hay
   * reservado en aleatorio[0,(N-1)] nos saldrían números aleatorios
   * - Podemos "salirnos del array". Si introducimos un número superior a N,
   * accederemos a la siguiente casilla de memoria
   */

  int i;
  printf("M vale %d\n", M);

  /* En este primer bucle asignamos un número a cada posición del array */
  for (i = 0; i < M; i++) {
    aleatorio[i] = generar_aleatorio();
  }

  /* En este segundo bucle imprimimos por pantalla la posicón y el numero asignado */
  for (i = 0; i < M; i++) {
    printf("%i -> %i\n", i, aleatorio[i]);
  }


  /**
   * Calcular la longitud de un array
   *
   * Para calcular la longitud de un array (el número de elementos que hay),
   * podemos utilizar sizeof(), que nos devuelve el tamaño del argumento dado.
   * Si le pasamos como argumento un array, nos devuelve por tanto el tamaño
   * total del array, y no la longitud. ¿Cómo podemos solucionarlo?
   */

  printf("Longitud del array: %lu bytes\n", sizeof(aleatorio));
  /**
   * sizeof() devuelve el tamaño en bytes de lo que ocupa el array, es decir,
   * si el tamaño de nuestro array es 10 (M = 10) entonces el tamaño del array
   * es de: 10 x tamaño_int (que en una máquina de 32 bits es 4), dando como
   * resultado 40 bytes.
   */

  printf("Longitud del array: %lu bytes\n", sizeof(aleatorio) / sizeof(aleatorio[0]));
  /**
   * Si dividimos el tamaño total del array entre el tamaño que ocupa cada uno
   * de sus elementos, nos devolverá la longitud del array (es decir, M que es 10)
   */

   /* Esta solución no siempre es válida como veremos a continuación, puesto que
    * si por ejemplo queremos saber la longitud de un array desde una función...
    *
    * Para ello vamos a crear una función que nos devuelva la longitud. Consulta
    * el fichero funcion_longitud.c para seguir con la sesión.
    */


  return 0;
}

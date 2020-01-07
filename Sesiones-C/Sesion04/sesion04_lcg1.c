/**
 * Sesion 04: Módulos en C
 *
 * En esta sesión veremos cómo se organizan los diferentes módulos en C, que
 * significa #include y #define entre otras cosas
 */

#include <stdio.h>
/** La directiva #include lo único que hace es copiar y pegar lo que haya en el
 * fichero stdio.h antes de compilar.
 * Los ficheros header (.h) no tienen código, ni variables, ni funciones,
 * sólo tienen declaraciones.
 */

#define A 7
#define C 1
#define M 11
/** La directiva #define no declara una variable, lo que hace es reemplazar lo
 * que hay en A por un 7. Es como usar un 'find and replace' antes de compilar.
 */

int x = 0;
/** Se trata de la definición de una variable global 'x' de tipo entero.
 * Dicha variable existe durante la ejecución completa del programa (tiempo de
 * ejecución) y será accesible desde cualquier parte del programa (ámbito).
 */

/** Esto es una función generar_aleatorio, sin argumentos y que devuelve un int
 * Las funciones en C no se pueden anidar, y son globales.
 */
int generar_aleatorio(){
  int anterior = x;
  /** Definición de una variable local 'anterior' de tipo entero.
   * Dicha variable se crea en la pila de ejecución con cada llamada, y se
   * destruye al terminar la llamada (tiempo de ejecución); sindo sólo accesible
   * desde la propia función (ámbito de ejecución).
   */

  x = (A * x + C) % M;

  return anterior;
}


int main() {
  int i;

  for(i = 0; i < M; i++){
    printf("%i -> %i\n", i, generar_aleatorio());
  }

  return 0;
}
/**
 * En esta sesión vimos como perfeccionar el Makefile, junto a un ejemplo del
 * comportamiento de un programa cuando producimos un 'stackoverflow',
 * (consultar el archivo sum1.c para comprobarlo y ver su funcionamiento).
 *
 * La sesión continua con la explicación de lo que son los módulos en C, como
 * crearlos y organizarlos.
 *
 * Para ello decimos estructurar nuestro código del LCG en dos 'módulos':
 * - Un móduolo con la función main
 * - Un módulo con las variables globales y con la función generar_aleatorio
 *
 * Así, creamos los ficheros lcg2.c (que contendrá el main) y generador_lcg.c
 * (que contendrá las variables globales y la función generar_aleatorio).
 *
 * La explicación continúa en el fichero lcg2.c
 */

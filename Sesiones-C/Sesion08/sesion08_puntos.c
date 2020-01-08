/**
 * Sesion 08: Structs y cadenas enlazadas
 *
 * En esta sesión vamos a ver qué son los 'structs' en C, cómo se definen,
 * manejan y declaran y también veremos cómo crear cadenas enlazadas
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Supongamos que queremos representar puntos en dos dimensiones (en 2D) en un
 * plano. Para ello, cada punto deberá contar con una 'dato' x y otro 'dato' y.
 *
 * Un 'struct' en C es una colección de una o más variables (del tipo que sean),
 * agrupadas todas juntos bajo un mismo nombre.
 *
 * De esta manera podemos crear estrcuturas como la siguiente:
 */

  struct {
    int x;
    int y;
  } a;

/**
  * Este código lo que hace es:
  * - Declara la variable de nombre 'a'
  * - Como un registro 'struct'
  * - Con dos atributos 'x' e 'y' de tipo entero
  * - Que son accesbiles con la sintaxis 'a.x' y 'a.y'
  *
  * Si observas con detalle, la frase 'struct { int x; int y; };' se puede
  * considerar como un nuevo tipo, y que podemos declarar con una etiqueta:
  *
  * struct punto { int x; int y; };
  *
  * De esta manera, ahora podemos crear variables de tipo 'struct punto':
  * struct punto a;
  * Esto crea la variable a de tipo 'punto', con los atributos 'x' e 'y',
  * que son accesbiles mediante 'a.x' y 'a.y' respectivamente
  *
  *
  * En resumen, sirve para crear tipos nuevos, siendo en este caso "struct punto"
  * el nuevo tipo de variable (ya no solo tengo int, double, etc...).
  *
  * Por supuesto que se pueden declarar structs de structs y arrays de structs:
  * struct rectangulo {
  *   struct punto so;  // Creo un rectángulo con sus dos puntos so y ne
  *   struct punto ne;
  * }
  *
  * O también:
  * struct punto h[6];
  */

int main(){

  struct punto a;
  struct punto b;

  printf("Size of a: %lu\n", sizeof(a));

  /* Para acceder al elemento a, recordemos, lo hacemos con punto como en java: */
  a.x = 42;

  return 0;
}

/**
 * La sesión continua en el fichero cadenas_enlazadas.c donde veremos como
 * crear y manejar estructuras de datos de tipo 'cadenas enlazadas'
 */

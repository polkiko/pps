/**
 * Sesion 01: "Hola mundo".c
 *
 * En esta primera sesión hemos tomado nuestro primer contacto con C,
 * escribiendo el típico "Hola mundo" en este lenguaje:
 */

#include <stdio.h>

int main(){
  printf("¡Hola mundo!\n");
  return 0;
}

/**
 * Lo siguiente que debemos hacer es compilar este fichero. Para ello abrimos
 * nuestra línea de comandos (intérprete de bash) y escribimos:
 * $ gcc hola.c
 *
 * Si ahora hacemos un ls en nuestra máquina veremos que se ha creado un nuevo
 * fichero "a.out", esto es, nuestro fichero compilado.
 *
 * A continuación vamos a ejectuar nuestro programa. Para ello en bash
 * basta con dárselo por la línea de comandos (recordemos que cualquier
 * programa dado es un 'ejecutable', como "cd", "nano", "gcc"):
 * $ ./a.out
 *
 * ¿Y por qué el nombre del archivo compilado es 'a.out'?
 * Puedes cambiarlo pasándole el argumento '-o' al gcc seguido del nombre
 * que quieras para tu programa ejecutable:
 * $ gcc -o hola hola.c
 * De esta manera se generará un fichero "hola" que podrás ejectuar directamnte:
 * $ ./hola
 *
 * Lo que en realidad está ocurriendo son tres pasos:
 * 0.- Antes que nada se 'preprocesa': gcc -E hola.c
 *     Lo que hace es 'empotrar' el código de las librerías (include, define...)
 * 1.- Seguidamente, se 'compila': gcc -c hola.c
 *     Esto genera un fichero objeto 'hola.o', el cual contiene sólo el código
 *     máquina de mi programa (sin las librerias)
 * 2.- Y después se 'linkea': gcc -o hola hola.o
 *     Esto lo que hace es añadir al fichero objeto el código máquina de las
 *     librerías, generando el ejecutable
 */

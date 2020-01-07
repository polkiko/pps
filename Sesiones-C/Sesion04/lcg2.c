#include <stdio.h>
/* #include "generador_lcg.h" */

int main() {

  int i;

  for (i = 0; i < M; i++) {
    printf("%i -> %i\n", i, generar_aleatorio());
  }

return 0;

}

/**
 * Cuando tratamos de compilar este fichero, el compilador nos avisa de que
 * 'M' y la función 'generar_aleatorio' no están declaradas. Lógico, el
 * compilador no sabe lo que son ni de qué tipo.
 * De esta manera, queremos que el compilador sea capaz de compilar lcg2.c sin
 * ver lo que hay en generador_lcg.
 *
 * Convención: todo lo que sea público, se llevará a un 'header':
 *                        generador_lcg.h
 *
 * Y lo que hacemos es añadir (en este fichero basta con descomentar) un
 * #include "generador_lcg.h" al principio de este fichero y el otro.
 *
 * En el fichero generador_lcg.h escribiremos todo aquello que sea público,
 * es decir, los reemplazos de datos junto a la declaración de la función
 * generar_aleatorio() (consultar el fichero generador_lcg.h)
*/

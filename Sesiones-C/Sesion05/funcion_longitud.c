/**
 * Ahora que ya sabemos como calcular la longitud de un array, vamos a verlo
 * cómo hacerlo desde fuera de la misma función (debido al orden de la memoria).
 *
 * La solución al problema de no conocer la longitud de un array en C es sencilla:
 * añadimos un argumento con la longitud del array.
 *
 * Para ello utilizaremos size_t, que es un tipo definido en <stddef.h> (deberemos
 * importar por tanto dicha librería). Este tipo se usa para longitudes de Arrays
 * y tamaño de datos; y se trata de un unsigned probablemente de tipo long.
 */

#include <stdio.h>
#include <stddef.h> /* 'Copiamos y pegamos' la libreria stdeff.h */

void longitud_array(int a[], size_t n){
  printf("Longitud del array pasado: %lu\n", n );
}

int main() {
  int n = 20;
  int b[n];
  printf("Longitud de b: %lu\n", sizeof(b) / sizeof(b[0]) );

  longitud_array(b, n);

  /*
   * La sesión continua en el fichero strings.c, donde aprenderemos cómo se
   * manejan los strings en C.
   */

}

#include <stdio.h>
#include "generador_lcg.h"

int main() {
  int i;
  int aleatorio[M];
  /* C no inicializa los datos, de manera que si consultamos lo que hay
  reservado en aleatorio nos saldrían números ranom */
  for (i = 0; i < M; i++) {
    aleatorio[i] = generar_aleatorio();
  }

  for (i = 0; i < M; i++) {
    printf("%i -> %i\n", i, aleatorio[i]);
  }

  /* Calcular el tamaño de un array */

  printf("Longitud del array %lu\n", sizeof(aleatorio)); /* sizeOf te da el
  tamaño en bytes de lo que ocupa lo que le pases (en este caso todo el array)*/

  printf("Longitud del array %lu\n", sizeof(aleatorio) / sizeof(aleatorio[0]));
  /* Ahora sí devuelve el tamaño real al dividirlo entre lo que ocupa uno*/


  return 0;
}

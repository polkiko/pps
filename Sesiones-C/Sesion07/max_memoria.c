#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  int *datos;

  while (1) { /* Hazlo hasta que petes (¡hay un break!) */

    datos = (int *) malloc(n * 1000000 * sizeof(int));

    if(datos != NULL){
      n++;
    }else{
      break; /* Utilizar break para salirse del bucle NO es una práctica
                recomendada en programación. Aquí fue utilizada a modo de
                ejemplo rápido en clase, para que cuando al solicitar más
                memoria malloc() nos devuelva null, se termine el bucle */
    }
    free(datos);

  }

  printf("Memoria máxima: %lu Mb\n", n * sizeof(int));

  return 0;
  
}

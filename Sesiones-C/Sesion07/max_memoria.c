#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  int *datos;

  while (1) {

    datos = (int *) malloc(n * 1000000 * sizeof(int));

    if(datos != NULL){
      n++;
    }else{
      break;
    }
    free(datos);

  }

  printf("Memoria máxima: %lu Mb\n", n * sizeof(int));

  return 0;
}

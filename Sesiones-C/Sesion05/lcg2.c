#include <stdio.h>
#include "generador_lcg.h"

int main() {
  int i;

  for (i = 0; i < M; i++) {
    printf("%i -> %i\n", i, generar_aleatorio());
  }

  return 0;
}

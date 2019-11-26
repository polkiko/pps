#include "generador_lcg.h"

int x = 0;

int generar_aleatorio() {
  int anterior = x;
  x = (A * x + C) % M;
  return anterior;
}

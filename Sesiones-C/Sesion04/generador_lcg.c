/* #include "generador_lcg.h" */

#define A 7
#define C 1
#define M 11
/* Deben ser borrados los defines, puesto que los incluimos en el .h */

int x = 0;

int generar_aleatorio() {
  int anterior = x;
  x = (A * x + C) % M;
  return anterior;
}

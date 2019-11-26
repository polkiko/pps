#include <stdio.h>
#include <stdlib.h>

struct punto{
  int x;
  int y;
};

int main(){
  struct punto a;
  struct punto b;

  /* En C hacer un strcut es crear una variable que contiene todo esto. Sirve
  para crear por tanto tipos nuevos, siendo en este caso "strcutu punto" el
  nuevo tipo de variable (ya no solo tengo int, double, etc...) */

  printf("Size of a: %lu\n", sizeof(a));

  /* Para acceder al elemento a, lo hacemos con el punto como en java */
  a.x = 42;

  return 0;
}

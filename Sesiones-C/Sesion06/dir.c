#include <stdio.h>

int global1;
int global2;

void f(int arg){
  int local;
  printf("f(%i): &arg:     %p\n", arg, &arg);
  printf("f(%i): &local:   %p\n", arg, &local);
  if (arg) f(!arg);
}

int main(){
  int local;

  printf("main: &local:   %p\n", &local);
  printf("main: &global1: %p\n", &global1);
  printf("main: &global2: %p\n", &global2);
  printf("main: &f:       %p\n", &f);
  printf("main: &main:    %p\n", &main);

  f(1);

  return 0;
}
/*
int *p lo que hace es crear una caja p en la que dentro hay una dirección
de memoria (='puntero').

Por lo tanto *p, contiene lo que hay en esa dirección de memoria
*/

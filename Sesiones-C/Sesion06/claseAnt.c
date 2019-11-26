#include <stdio.h>
#include <stddef.h>

void f(int a[], size_t n){
  printf("Longitud de a: %lu\n", n );

}

int main() {
  int b[20];
  int i;
  printf("Longitud de b: %lu\n", sizeof(b) / sizeof(b[0]) );

  f(b, 20);
}

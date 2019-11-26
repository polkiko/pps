#include <stdio.h>

int main() {
  float a = 0.0001;
  float b = 0.0003;
  float f1 = a / b;
  float f2;
  a = 1.0;
  b = 3.0;
  f2 = a / b;

  if (f1 == f2) {
    printf("iguales\n");
  }else{
    printf("desiguales\n");
  }

return 0;

}

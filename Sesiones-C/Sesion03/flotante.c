/**
 * En el siguiente ejemplo vamos a ver por qué se pierde precisón.
*/

#include <stdio.h>

int main() {

  /* Declaramos dos floats con los siguientes valores: */
  float a = 0.0001;
  float b = 0.0003;

  /* Y asignamos a un tercer float el valor de su divisón: */
  float f1 = a / b;

  /* Hacemos lo mismo pero ahora entre 1 y 3: */
  float f2;
  a = 1.0;
  b = 3.0;
  f2 = a / b;

  /* Si ahora comparamos ambos resultados*/
  if (f1 == f2) {
    printf("iguales\n");
  }else{
    printf("desiguales\n"); /* Entramos en este else */
  }
  /* ¿Por qué?
   * La razón se debe a que existe una pérdida de precisón cuando tratamos
   * de dividir dos números con más o menos decimales y "guardar" el resultado.
  */

return 0;

}

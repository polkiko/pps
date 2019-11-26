#include <stdio.h> /* La directiva 'include' en C lo único que hace es
copiar y pegar lo que haya en el fichero stdio.h, que es un header de una
librería. Los ficheros .h no tienen implementaciones de C, sólo delcaraciones */

#define A 7
/* #define no declara una variable, lo que hace es reemplazar lo que hay en
A por 7. Es como usar un 'find and replace', y lo hace antes de compilar */
#define C 1
#define M 11

int x = 0; /* Es un entero, pero se trata de una variable global.
En C puedo declarar una variable en cualquier sitio. Y cuando creamos una
variable local, puedo acceder a ella desde cualquier programa
*/

int generar_aleatorio(){ /*Esto es una función que devuelve un entero sin args*/
  int anterior = x;
  x = (A * x + C) % M;
  return anterior;
}

int main() {
  int i;

  for(i = 0; i < M; i++){
    printf("%i -> %i\n", i, generar_aleatorio());
  }

  return 0;
}

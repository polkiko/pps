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

  /**
   * Para resumir y tratar de sintetizar toda la información vista en esta sesión,
   * intentaremos poner aquí la informaicón más relevante. No obstante, recomiendo
   * consultar las diapositivas correspondientes a esta sesión (transpas-sesion06)
   * de Herranz, puesto que muestra ejemplos gráficos que nos permiten hacernos
   * una idea mucho mejor del concepto de 'dirección de memoria' y 'punteros'.
   *
   *
   * Direcciones de memoria
   *
   * Como vimos anteriormente, C permite un control absoluto de la memoria. Para
   * conocer cuál es la dirección de memoria de cualquier expresión en C, lo
   * que hacemos es colocar un '&' delante de dicha expresión. Por ejemplo:
   *
   * int x = 42;
   * printf("La dirección de x: %p \n", &x); <-- Se imprimirá la dirección de memoria
   *
   *
   * Punteros
   * Los punteros son variables que contienen única y exclusivamente direcciones
   * de memoria. La sintaixis para declararlos es:
   *
   *            T *p;     (donde T hace referencia al tipo)
   *
   * p en este caso es una variable que contiene una dirección de memoria en la
   * que hay un elemento de tipo T. Es accesible utilizando la expresión '*p'.
   * Por tanto, '*p' es igual al contenido de la dirección de memoria 'p'.
   *
   * Explicado de manera gráfica (siguiendo las transparencias anteriormente
   * citadas), 'int *p' lo que hace es crear una caja 'p' en la que dentro hay una
   * dirección de memoria (es decir, 'p' es un 'puntero').
   * Por lo tanto *p, contiene lo que hay en esa dirección de memoria
   */

  int x;
  int *p;
  x = 42;
  p = &x;

  printf(" %i\n", *p);

  /**
   * ¿Qué mostrará por pantalla esta expresión? Intenta pensarlo, dibujarlo,
   * y probar a ejecutar este archivo antes de ver la solución.
   *
   * La respuesta es que mostrará por pantalla '42', puesto que:
   * - En la 1ª línea creamos una variable (una caja) de tipo int
   * - En la 2ª línea creamos una variable (una caja) de tipo 'puntero' (recuerda
   *   que 'puntero' es equivalente a 'dirección de memoria')
   * - En la 3ª línea asignamos el valor '42' a la variable 'x'
   * - En la 4ª línea asignamos la dirección de memoria de 'x' a la variable 'p'
   * - Por último imprimimos por pantalla 'el contenido de lo que haya en la
   *   dirección de memoria de p', que cómo es la dirección de x, entonces es '42'
   */



   /**
    * Relación entre punteros y arrays
    *
    * Ahora que ya conocemos cómo funcionan los punteros (recordemos, variables
    * en las que sólo se guardan direcciones de memoria) y cómo se gestiona la
    * memoria desde C, veamos qué relación existe entre los punteros y los arrays.
    *
    * Si nosotros creamos el siguiente programa: */

    int *p;
    int a[] = {1,2,3};
    p = a;

  /**
    * Lo que estamos haciendo es asignar a nuestra variable p la dirección de
    * memoria de x, de manera que *p == a[0] (es decir, lo que hay en la
    * dirección de memoria de 'p' es igual a lo que hay en el primer elmento de
    * nuestro array 'a[]', es decir, el número 1).
    *
    * Asumiento el siguiente ejemplo...
    * int a[];
    * int *p = a;
    *
    * Podemos establecer las siguientes equivalencias:
    * p = a; (la variable p es igual que a)
    * p = &a[0]; (lo que hay en la caja de p es lo mismo que la dirección de
    * memoria del primer elemento del array a)
    * *p = a[0]; ('*p' significaba, recordemos, es la expresión que nos permite
    * acceder al alemento que esté en la dirección de memoria 'p', es decir,
    * el primer elemento de nuestro array 'a[]')
    *
    * La cantidad de información de esta sesión fue bastante elevada (de hecho
    * tuvimos que partir la sesión en dos días), por lo que se recomienda tomar
    * un buen tiempo en comprender lo expuesto además de hacer los ejercicios
    * propuestos.
    */



}

/**
 * La segunda parte de la clase consiste en entender cómo trabajar con Strings.
 *
 * Lo primero que debemos saber es que en C no existe el tipo 'String', sino que
 * lo que se utiliza son arrays de caracteres (es decir, arrays de enteros que
 * caben en un byte).
 *
 * Además, si queremos utilizar algunas funciones para el manejo de arrays
 * deberemos incluir la biblioteca <strings.h>
 */

#include <stdio.h>
#include <strings.h>

int main() {
  char s[] = "mundo";
  printf("String: \"%s\"\n", s);
  printf("Longitud: %lu\n", sizeof(s) / sizeof(s[0]));
  /**
   * Si compilamos y ejecutamos este ejemplo veremos:
   * String: mundo
   * Longitud: 6
   * ¿Por qué 6 si mundo solo tiene 5 letras? Las bibliotecas estándares de c
   * asumen que los strings son NULL terminated, es decir, el string termina
   * siempre con el carácter '\0' (entero 0).
   * Esto implica que lo longitud del string está marcada por la posición del
   * carácter '\0' y que por tanto el array tiene que tener un hueco para '\0'
  */

  /* Para imprimir la longitud de un array podemos utilizar strlen() */
  printf("Longitud real del array: %lu\n", strlen(s));
}

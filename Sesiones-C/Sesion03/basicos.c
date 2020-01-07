/**
 * Sesion 03: Tipos básicos
 *
 * En esta sesión vamos a ver los tipos básicos que existen en C, puesto que
 * nos va a permitir adentrarnos tanto en la sintaxis como en la semántica de C
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

  /* En C existen los siguientes 4 tipos básicos: */
  char mi_char = 'a';           /* Enteros de un byte */
  int mi_int = 42;              /* Enteros que quepan en una palabra máquina */
  float mi_float = 1000000.0;   /* Coma flotante simple */
  double mi_double = 0.0000001; /* Coma flotante doble */

  /* Para imprimirlos utilizamos los siguientes carácteres: */
  printf("El char es: %c\n", mi_char);      /* %c = char */
  printf("El int es es: %d\n", mi_int);     /* %d = decimal */
  printf("El float es es: %f\n", mi_float); /* %f = float */
  printf("El double es: %f\n", mi_double);  /** Nos devuelve 0.000000 (con 6 0s)
                                            de manera que no vemos nuestro
                                            número, el 0.0000001, ¿por qué? */

  /* Debemos añadirle cuantos decimales queremos mostrar: */
  printf("El double es: %.7f\n", mi_double); /* Imprime 7 decimales, con el 1 */

  /* ¿Y si pongo %.24f? ¿Escribirá 0.00000010000...(hasta 24)? */
  printf("El double es: %.24f\n", mi_double);

  /** Esto último NO imprime el 0.000000100000...(hasta 24), sino:
   * 0.000000099999999999999...5
   * ¿Por qué?
   * Cuando guardamos un float, el ordenador tiene que aproximar dicho número.
   * NUNCA se debe almacenar monedas con float, porque se perderían decimales
   *
   * Por tanto, una cosa es lo que realmente hay en nuestra variable y otra cosa
   * lo que printf() imprime
   *
   * NO hay booleanos (true y false) en C, de manera que para ifs y bucles:
   * Si condicion = 0, entonces será false (entra al else)
   * Si condicion !=0, entonces será true  (entra al if)
   *
   * Char e int son enteros, de manera que podemos imprimirlos indistintamente:
  */

  printf("El char es: %.d\n", mi_char); /* Imprime 97 */
  printf("El int es: %c\n", mi_int);    /* Imprime *  */

  /**
   * Uso de sizeof
   * sizeof es un operador predefinido, y su función es devolver el tamaño del
   * argumento en bytes:
   * sizeof(int); // Devolverá 4 (en una máquina de 32 bits)
   *
   * Debemos tener en cuenta que el valor retornado por sizeof es de tipo %ld,
   * es decir, long unsigned int, y que por tanto así deberemos ponerlo en la
   * función printf():
  */
  printf("El tamaño de mi_char es: %ld\n", sizeof(mi_char));
  printf("El tamaño de mi_int es: %ld\n", sizeof(mi_int));
  printf("El tamaño de mi_float es: %ld\n", sizeof(mi_float));
  printf("El tamaño de mi_double es: %ld\n", sizeof(mi_double));

  return 0;

}
  /** En esta sesión también vimos como crear un archivo Makefile, lo que nos 
   * permite simplificar bastante el proceso de compilación.
   * La sesión continua en el archivo flotante.c */

  /**
   * Recuerda que para compilar este fichero debes introducir:
   * $ gcc -o tipos tipos.c
   *
   * La sesión continua en el archivo 'flotante.c', donde vamos a ver como,
   * los decimales importan y mucho a la hora de trabajar con C.
   */

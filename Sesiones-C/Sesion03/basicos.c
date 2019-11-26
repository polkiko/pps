/**
 * Sesion 03: Tios básicos
 *
 * En esta sesión vamos a ver los tipos básicos que existen en C, puesto que
 * nos va a permitir adentrarnos tanto en la sintaxis como en la semántica de C
 */

 #include <stdio.h>

 int main() {

 char mi_char = 'a';
 int mi_int = 42;
 float mi_float = 1000000.0;
 double mi_double = 0.0000001;

 printf("El char es: %c\n", mi_char);
 printf("El int es es: %d\n", mi_int); // %d = decimal
 printf("El float es es: %f\n", mi_float);
 printf("El double es: %f\n", mi_double); // Nos devuelve 0.000000 (con 6 0s),
 // de manera que no vemos nuestro número, ¿por qué?
 // Debemos añadirle cuantos decimales quiero ver:
 printf("El double es: %.7f\n", mi_double); // Esto imprime 7 decimales, con el 1
 printf("El double es: %.24f\n", mi_double);
 /* Esto último imprime NO imprime el 0.000000100000...(hasta 24), sino:
  * 0.000000099999999999999...5
  * ¿Por qué?
  * Cuando guardamos un float, el ordenador tiene que aproximar dicho número
  * NUNCA se debe almacenar monedas con float, porque se perderían decimales
  *
  * Por tanto, una cosa es lo que realmente hay en nuestra variable y otra cosa
  * lo que printf() imprime
  *
  * NO hay booleanos (true y false) en C, de manera que para ifs y bucles:
  * Si condicion = 0, entonces será false
  * Si condicion !=0, entonces será true
  *
  * Char e int son enteros, de manera que podemos imprimirlos indistintamente:
  */
  printf("El char es: %.d\n", mi_char); // Imprime 97
  printf("El int es: %c\n", mi_int); // Imprime *
  /* Uso de sizeof
   */
  printf("El tamaño de mi_char es: %ld\n", sizeof(mi_char));
  printf("El tamaño de mi_int es: %ld\n", sizeof(mi_int));
  printf("El tamaño de mi_float es: %ld\n", sizeof(mi_float));
  printf("El tamaño de mi_double es: %ld\n", sizeof(mi_double));

 return 0;

 }

/**
 * Recuerda que para compilar este fichero debes introducir:
 * $ gcc -o tipos tipos.c
 *
 * La sesión continua en el archivo 'flotante.c', donde vamos a ver como,
 * los decimales importan y mucho a la hora de trabajar con C.
 */

/**
 * Sesion 02: Ejecutando y depurando C
 *
 * En esta sesión vamos a empezar ampliando nuestro 'hola.c' de la sesión
 * anterior. Vamos a ver cómo inicializar nuestro programa con diferentes
 * argumentos y cómo leerlos o saber el número que tiene.
 */

 #include <stdio.h>

 int main(int argc, char *argv[]) {
   /**
    * 'argc' es el número de comandos totales que el usuario introduce al
    * ejecutar el programa, incluyendo el propipo programa:
    * $ ./hola angel; (argc = 2)
    */

  printf("El número de argumentos que hay es: %d\n", argc); // d = decimal

  char *quien; // char *, significa en C un string

  if (argc == 1) { // Si hay un argumento, es decir, el programa en sí
    quien = "mundo";
  } else {
    quien = argv[1];
  }

  printf("¡Hola %s!\n", quien); // s = caracter
  return 0;

 }

/**
 * Recuerda que para compilar este fichero debes introducir:
 * $ gcc -o hola hola.c
 *
 * La sesión continua en el archivo 'factorial.c', donde vamos a ver como,
 * escribiendo por la linea de comandos un número, nos devuelve el factorial.
 */

/**
 * Sesion 02: Ejecutando y depurando C
 *
 * En esta clase vamos a empezar ampliando nuestro 'hola.c' de la sesión
 * anterior. Vamos a ver cómo inicializar nuestro programa con diferentes
 * argumentos y cómo leerlos o saber el número que tiene.
 */

 #include <stdio.h>

 int main(int argc, char *argv[]) {
   /**
    * 'argc' es el número de argumentos totales que el usuario introduce al
    * invocar el programa desde la linea de comandos, incluyendo el programa:
    *
    * $ ./hola angel (argc = 2, por tanto arg siempre será mayor que 0)
    */

  printf("El número de argumentos que hay es: %d\n", argc); // d = decimal

  char *quien; // char *, significa por ahora una cadena de texto (un string)

  if (argc == 1) { // Si hay un argumento, es decir, el programa sólo
    quien = "mundo";
  } else {
    quien = argv[1]; // argv[0] será siempre el nombre con el que se invoca
  }

  printf("¡Hola %s!\n", quien); // s = caracter
  return 0;

 }

/**
 * Recuerda que para compilar este fichero debes introducir:
 * $ gcc hola.c -o hola
 *
 * La sesión continua en el archivo 'factorial.c', donde vamos a ver como,
 * escribiendo por la linea de comandos un número, nos devuelve el factorial.
 */

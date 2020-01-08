/**
 * Sesion 07: Memoria dinámica
 *
 * En esta clase vamos a ver cómo se maneja la memoria en C, aprendiendo cómo
 * solicitar memoria en tiempo de ejecución, liberarla, etc...
 */

/**
 * Para ello comenzaremos la sesión creando un programa que ordene números
 * enteros de menor a mayor, de manera que la entrada estandar tenga:
 * - Un entero positivo n en la primera línea
 * - n enteros en las n siguiente líneas (consultar el fichero entrada.txt)
 *
 * La salida del prorgrama tendrá los n enteros depués de la primera línea
 * ordenados de menor a mayor
 */

#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *x, int *y){
  int aux = *x;
  *x = *y;
  *y = aux;
}

int main() {
  /**
   * En primer lugar necesitaremos crear un array que nos permita almacenar
   * todos los enteros que le pasemos. Para ello declaramos el array 'datos'
   */
  int *datos;

  /* Y a continuación unas cuantas variables auxiliares (contadores), puesto que
   * en C siempre es necesario inicializar las variables fuera del bucle.
   */
  int i;
  int j;

  /* Lo primero que haremos será leer cuántos enteros vamos a ordenar. Para ello
   * inicializamos la variable 'n' para que seguidamente podamos asignarle el
   * valor que lea scanf() (el número de enteros a ordenar)
   */
  int n;
  scanf("%d", &n); /* scanf necesita la dirección donde guardar lo que le pases*/

  while (n != 0) { /* Mientras siga habiendo series que ordenar... */

    /**
     * Ahora que ya sabemos cuantos enteros vamos a necesiar ('n'), deberemos
     * solicitar la cantidad exacta de memoria que necesitaremos utilizar en
     * nuestro array 'datos'. ¿Cómo lo podemos hacer? 'n' puede ser cualquier
     * valor que será leido en tiempo de ejecución.
     */

    /**
     * Solicitar memoria en tiempo de ejecución: malloc
     *
     * Para establecer la cantidad de memoria que necesitamos, lo que debemos
     * hacer es solicitar al sistema operativo dicho espacio (en nuestro ejemplo
     * necesitamos 'n' espacios). Para ello, C incluye en su biblioteca estandar
     * <stdlib.h> la función malloc():
     *
     *    void *malloc(size_t size);
     *
     * La función malloc() asigna 'size' bytes en la memoria, y devuelve un
     * puntero (= dirección de memoria) donde se ha asignado la memoria.
     * Si ocurre un error, la función devuelve NULL.
     *
     * Por lo tanto, ¿cuánta memoria hay que pedir en bytes? ¿Cómo la pedimos?
     *
     * Hasta ahora sabemos que malloc() nos devolverá un puntero, y que por
     * tanto, deberemos asignárselo a *datos (recordemos: *e significa una
     * variable de nombre 'e' que contiene direcciones de memoria):
     *
     * datos = malloc(?);
     *
     * ¿Cuánto espacio necesitamos? Necesitamos 'n' veces lo que ocupa un entero:
     *
     * datos = malloc(n * sizeof(int)); // ¡Recuerda! sizeof() devuelve el
     *                                     tamaño en bytes de lo que le pases.
     *
     * Y por último debemos indicar que lo que devuelve malloc por tanto será
     * un puntero que contiene enteros. Para ello hacemos 'casting':
     *
     * datos = (int *) malloc(n * sizeof(int));
     */

    datos = (int *) malloc(n * sizeof(int));

    /* Seguidamente asignamos cada numero pasado por la entrada estandar a su
     * posición correspondiente en el array */
    for (i = 0; i < n; i++) {
      scanf("%d", &datos[i]);
    }

    /* Y ordenamos el arrray de enteros con el algoritmo burbuja (bubble) */
    for (i = 0; i < n-1; i++) {
      for (j = 0; j < n - i -1; j++) {
        if(datos[j] > datos[j+1]){
          /* Para intercambiar dos valores de un array, deberemos crear una
           * función que, recibiendo como argumento las dos direcciones de
           * memoria de ambos elementos, los cambie, creando temporalmente
           * una variable 'auxiliar'. Consulta la función intercambiar */
          intercambiar(&datos[j], &datos[j+1]);
        }
      }
    }

    /* Y finalmente imprimimos los enteros: */
    printf("\n");
    for (i = 0; i < n; i++) {
      printf("%d\n", datos[i]);
    }

    /**
     * Bien, ya hemos terminado de ordenar los enteros y de imprimirlos. ¿Qué
     * ocurre con la memoria que hemos utilizado? Si ya no tenemos la intención
     * de volver a necesiar dichos datos (y por tanto esa memoria), deberemos
     * 'liberar' toda esa memoria que solicitamos al sistema operativo. ¿Cómo?
     *
     * Liberar memoria una vez usada: free()
     *
     *    void free(*p);
     *
     * La función free() libera el espacio al que apunta 'p', que debe haber
     * sido previamente asignado por malloc().
     *
     * Es IMPORTANTE mencionar aquí que lo que espera que se le pase como
     * argumento la función free() es un puntero, no el valor al que apunta el
     * puntero (es decir, NO se debe pasar '*datos', sino 'datos'):
     */

    free(datos);

    /* Leo la siguiente línea, por si hay más series que ordenar */
    scanf("%d", &n);
  }


  return 0;
}
/**
 * El fichero max_memoria.c fue un ejemplo que utilizamos en clase para saber
 * cuánta era la memoria máxima que podiamos solicitar a través de la
 * 'fuerza bruta'.
 *
 * El fichero Make que acompaña esta sesión nos permite que, pasándole como
 * argumento el nombre de nuestro archvio .c, nos compile el código.
 */

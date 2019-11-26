#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *x, int *y){
  int aux = *x;
  *x = *y;
  *y = aux;
}

int main() {
  int i;
  int n;
  int j;
  int *datos;

  /* Leer números de enteros */
  scanf("%d", &n); /*scanf necesita la dirección donde guardar lo que le pases*/

  while (n != 0) {
    /* Solicitar memoria para n enteros */
    datos = (int *) malloc(n * sizeof(int));

    /* Leer los enteros */
    for (i = 0; i < n; i++) {
      scanf("%d", &datos[i]);
    }

    /* Ordenamos el arrray de n enteros */
    for (i = 0; i < n-1; i++) {
      for (j = 0; j < n - i -1; j++) {
        if(datos[j] > datos[j+1]){
          intercambiar(&datos[j], &datos[j+1]);
        }
      }
    }

    /* Imprimir los enteros*/
    printf("\n");
    for (i = 0; i < n; i++) {
      printf("%d\n", datos[i]);
    }

    /* Liberar memoria que no voy a usar más */
    free(datos)

    /* Leo la siguiente línea */
    scanf("%d", &n);

  }


  return 0;
}

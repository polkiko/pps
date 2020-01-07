#include <stdio.h>
#include <stdlib.h>

/**
 * Las funciones en C son del tipo:
 * tipo_return nombre(arg1, arg2...){
 *
 * }
 * En C no existen métodos privados/publicos
 *
 */
int factorial(int n){
  int f = 1;
  int i;
  for(i = 1; i <= n; i++){
    f *= i;
  }
  return f;
}

int main(int argc, char *argv[]){
  int n;
  if(argc == 1){
    n = 0;
  } else {
    n = atoi(argv[1]); // La función atoi convierte la parte inicial del array
                       // como un str a un int
  }

  /**
   * Para imprimir mensajes por pantalla utilizamos la funcion fprintf(), a la
   * que le podemos añadir en el primer argumento la salida que queramos,
   * siendo stderr la salida de error.
   * Las variables se escriben después de nuestro mensaje separadas por coma, y
   * se van rellenando en el lugar donde hemos puesto %X, siendo X un caracter
   * el cual dependerá del tipo de valor a mostrar (En la siguiente sesión)
   */

  if(n == 0){ // (1)
    fprintf(stderr, "Uso: fact N (N > 0)\n"); //stderr indica dónde quiero
    // imprimir ese mensaje. En este caso es el fichero de error stderr
    return 1;
  } else {
    printf("%i\n", factorial(n));
    return 0;
  }

}

  /**
   * (1) En las transparencias de clase, en esta linea, ponía:
   * 'if (n = 0)' y mágicamente C compila esto.
   * Lo que realmente hace C en este caso es asignar el 0 a n, y a continuación
   * evalúa la condición. En C no existen booleanos (true y false), y lo que
   * ocurre en la condición del if es que evalúa si el resultado da 0. Si la
   * expresión da 0, entonces entra en el 'else', y si da diferente a 0, sigue.
   *
   * Además de esto, hoy hemos visto en clase cómo depurar C a través del
   * depurador de GDB, el cual nos permitirá conocer el estado de nuestro
   * programa en todo momento, las variables y la propia ejecución.
   *
   */

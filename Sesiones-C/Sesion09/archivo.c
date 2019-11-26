#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE *archivo;
  int tamano;

  archivo = fopen("prueba.txt","r");

  fseek(archivo, 0L, SEEK_END);
  tamano = ftell(archivo);

  printf("El archivo prueba.txt ocupa %d bytes¿?\n", tamano);

  fclose(archivo);

}

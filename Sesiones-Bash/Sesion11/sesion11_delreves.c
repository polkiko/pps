#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  FILE *fichero;
  char linea[2048];

  if(argc == 2){
    fichero = fopen(argv[1], "r");
  } else {
    fichero = stdin;
  }

  while(fgets(linea, 2048, fichero) != NULL){
    printf("%s", linea);
  }

  if(fichero == NULL){
    fprintf(stderr, "No se ha podido abrir el fichero %s\n", argv[1]);
    return -1; // Ha ido mal
  }
  int numero = 1;
  if(numero){
    printf("Entro al if\n");
  }else{
    printf("Entro al else\n");
  }

  return 0;
}

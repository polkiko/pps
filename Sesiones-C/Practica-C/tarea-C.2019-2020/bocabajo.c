#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "auxiliar.h"

void help(void){
  fprintf(stdout, "bocabajo: Uso: bocabajo [ fichero... ]\n");
  fprintf(stdout, "bocabajo: Invierte el orden de las lineas de los ficheros (o de la entrada).\n");
  exit(0);
  }

int main(int argc, char * argv[]){

  int esentrsal = 0;  /* Si es entrada estandar valdrá 1*/
  int i,j;
  int nlinea = 0;     /* Número de lineas */
  char linea[2048];   /* Una línea contiene 2048 chars según enunciado */
  FILE *archivo;      /* Archivo que poner bocabajo */
  char **bocabajo;    /* Array de Array de chars */
  argv0 = "bocabajo"; /* Argumento para los errores */

  if(argc == 1){       /* Es entrada salida */
    esentrsal = 1;
    archivo = stdin;
    argc = 2;
  }else if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")){
      help();         /* Mostramos la ayuda, en la funcion help() */
  }

  /********************/

  /* Reservo el espacio mínimo para la respuesta (una línea de caracteres)*/
  bocabajo = (char **) malloc(sizeof(linea));

  if (bocabajo == NULL) { /* Compruebo que se ha podido reservar correctamente */
    Error(EX_OSERR, "No se ha podido reservar memoria suficiente");

  }else{

    /* Para cada argumento pasado, un archivo distinto que leer */
    for (i = 1; i < argc; i++) {

      /* Controlo la gestión del archivo a abrir */
      if(esentrsal == 0){ archivo = fopen(argv[i], "r"); }

      /* Si el punto no devuelve NULL, continuo */
      if(archivo != NULL) {

        /* Mientras que la línea sea diferente de NULL voy añadiéndosela
        al array */
        while(fgets(linea, 2048, archivo) != NULL) {
          /* bocabajo[nlinea] = (char *) malloc(2048 * sizeof(char));
          if(bocabajo[nlinea] == NULL){
          Anteriormente pedía memoria de esa manera, pero me daba error.
          Tras buscar por internet (más concretamente por stackoverflow) me di
          cuenta de que también podía realizarse de la siguiente manera:
          */
          *(bocabajo + nlinea) = (char *) malloc(2048 * sizeof(char));
          if (*(bocabajo + nlinea) == NULL) {
            Error(EX_OSERR, "No se ha podido reservar memoria suficiente");
          }else{
            /* La función strcpy me permite copiar el contenido directamente,
            pese a que también podría haberlo hecho con punteros */
            strcpy(bocabajo[nlinea], linea);
            nlinea++;
            bocabajo = (char **) realloc(bocabajo, nlinea * (sizeof(linea)));
            if(bocabajo == NULL){
              Error(EX_OSERR, "No se ha podido reservar memoria suficiente");
            }
          }
        }

        /* Si hemos abierto un archivo, debemos cerrarlo */
        if(esentrsal == 0){ fclose(archivo); }
      }else{
        /* Gestión del error en caso de que el *archivo = NULL */
        if (strcmp(strerror(errno), "Permission denied")) {
          Error(EX_NOINPUT, ".*\"no_existe\"...");
        }else{
          Error(EX_NOINPUT, ".*\"no_legible\"...");
        }
      }
    }
  }

  /* Imprimo mi nuevo array bocabajo de manera decreciente */
  for (j = nlinea - 1; j >= 0; j--) {
    printf("%s", bocabajo[j]);
  }

  /* Libero la memoria y salgo con un OK (return 0) */
  free(bocabajo);
  exit(EX_OK);
}

#!/usr/bin/env bash
# echo $0 # $0 es la variable para el argumento 0
# echo $# # $# tiene el número de argumentos
# echo $* # $* son todos los argumentos separados por espacios


if test 0 -eq $#; then
  echo "ERROR: número de argumentos erroneo"
  exit 1
else
  youtube-dl $1
fi

#!/bin/sh
# THIS FILE MUST BE FORMATED IN UNIX FORMAT
# IF FORMATED IN DOSS FORMAT IT WILL NOT WORK
# PLEASE USE THE COMMAND dos2unix test.sh TO
# FORMAT IT TO UNIX.

# Declaro las variables de compilacion
COMPILER="g++"
FLAGS=""
PATH_IN="src/"
PATH_OUT="src_tmp/"

# Creo el directorio base de la compilacion
mkdir -p src_tmp

# Compilo
FILE_IN="main.cpp"
FILE_OUT="main"
eval $COMPILER $PATH_IN"main.cpp" -o $FLAGS $PATH_OUT"main"

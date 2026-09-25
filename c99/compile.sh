#! /bin/bash

#
# Define o primeiro parametro como nome do arquivo
#
C_FILE=$1

#
# Define o delimitador do split
#
IFS='.'

#
# Quebra a string nome do arquivo
#
read -ra OUTPUT_FILE <<< "$C_FILE"

#
# Compila o arquivo C passado como parâmetro e cospe uma saida com o mesmo nome, mas extensão .exe
#
# Usa os parametros:
#   -Wall       All warnings
#   -Wextra     Ativa avisos adicionais que o -Wall não cobre
#   -Wpedantic  Emite avisos sobre tudo que não está em estrito conformidade com o padrão ISO
#   -lm ativa a biblioteca math
#
gcc -lm -Wall -Wextra -Wpedantic "${C_FILE}" -o "${OUTPUT_FILE[0]}.exe"
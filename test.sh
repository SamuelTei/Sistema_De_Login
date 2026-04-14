#!/bin/bash
set -e

# Compila o programa
gcc main.c -o main

echo "Executando teste com usuário 'admin' e senha '1234'..."
printf 'admin\n1234\n' | ./main

echo "Teste concluído."
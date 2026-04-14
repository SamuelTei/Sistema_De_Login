#!/bin/bash
set -e

# Substitua pelo URL do seu repositório GitHub
GITHUB_REPO_URL="https://github.com/SamuelTei/Sistema_De_Login.git"

# Inicializa o repositório se ainda não existir
if [ ! -d .git ]; then
  git init
  git branch -M main
fi

# Adiciona arquivos e cria commit
git add .
git commit -m "Initial commit" || true

git remote get-url origin >/dev/null 2>&1 || git remote add origin "$GITHUB_REPO_URL"

git push -u origin main

echo "Projeto salvo no GitHub em: $GITHUB_REPO_URL"
#!/bin/bash

# Compila os arquivos .cpp
source ./compilar.sh
cd acessorios-cpp/
g++ -c *.cpp
cd ..
cd core-simulador-cpp
g++ -c *.cpp
cd ..

# Compila o arquivo principal
g++ principal/main.cpp acessorios-cpp/*.o core-simulador-cpp/*.o -o meu_programa

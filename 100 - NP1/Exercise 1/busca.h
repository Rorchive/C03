/**
 * @file: busca.h
 * @author: Rodrigo Andrade
 * @date: 08 Out 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#ifndef BUSCA_H
#define BUSCA_H

#include <string>

using namespace std;

struct funcionario {
  string nome;
  string id;
};

string sequencial(funcionario vetor[], int tamanho, string x);

#endif
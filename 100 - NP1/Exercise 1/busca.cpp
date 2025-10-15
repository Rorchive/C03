/**
 * @file: busca.cpp
 * @author: Rodrigo Andrade
 * @date: 08 Out 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include "busca.h"
#include <iostream>

using namespace std;

/**
 * @brief: Busca pelo ID do funcionário pelo nome.
 * @return: Retorna o ID do funcionário ou -1 caso não encontrado.
 */
string sequencial(funcionario vetor[], int tamanho, string x) {
  bool achou = false;  // var aux p/ busca
  int i = 0;           // contador

  while (achou == false && i < tamanho) {
    if (vetor[i].nome == x) {  // Alterado para buscar pelo nome contido na struct
      achou = true;
    } else
      i++;  // Correção da lógica de incremento pós descoberta
  }

  if (achou) {
    return vetor[i].id;  // Retorna o ID do funcionário
  } else
    return "-1";
}
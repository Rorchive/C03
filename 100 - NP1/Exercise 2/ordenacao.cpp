/**
 * @file: ordenacao.cpp
 * @author: Rodrigo Andrade
 * @date: 08 Out 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include "ordenacao.h"

void insercaoDireta(float vetor[], int tamanho)  // Alterado o tipo de vetor
{
  int i, j;     // contadores
  float chave;  // Alterado o tipo da variável chave int -> float
  for (j = 1; j < tamanho; j++) {
    chave = vetor[j];
    i = j - 1;
    while ((i >= 0) && (vetor[i] < chave))  // Alterado de crescente para decrescente
    {
      vetor[i + 1] = vetor[i];
      i = i - 1;
    }
    vetor[i + 1] = chave;
  }
}
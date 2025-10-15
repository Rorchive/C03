/**
 * @file: main.cpp
 * @author: Rodrigo Andrade
 * @date: 08 Out 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

using namespace std;

/**
 * @brief: Função recursiva para cálculo das repetições de um dígito k em um número N
 * @return: Número de repetições de k em N
 */
int conta(int N, int k) {
  if (N == 0) {
    return 0;
  } else
    return conta((N / 10), k) + ((N % 10) == k);
}

int main() {
  int results[1000];  // Vetor para armazenar os resultados

  // Variáveis auxiliares para preenchimento no vetor
  int N;            // Número natural
  int k;            // Digito a ser buscado em N
  int counter = 0;  // Contador

  // Preenchimento no vetor
  while ((cin >> N >> k) && (N != -1 && k != -1)) {
    results[counter] = conta(N, k);

    counter++;
  }

  // Exibição dos resultados
  int results_length = counter;  // Tamanho do vetor 'results'

  for (int i = 0; i < results_length; i++)
    cout << results[i] << endl;

  return 0;
}
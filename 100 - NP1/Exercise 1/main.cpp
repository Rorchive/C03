/**
 * @file: main.cpp
 * @author: Rodrigo Andrade
 * @date: 08 Out 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include "busca.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  funcionario funcionarios[1000];  // Vetor para armazenar os funcionarios

  // Variáveis auxiliares para preenchimento do vetor
  string name;
  string id;
  int count = 0;

  // Lógica de inserção no vetor
  while (getline(cin >> ws, name) && name != "fim") {
    getline(cin >> ws, id);

    funcionarios[count].nome = name;
    funcionarios[count].id = id;

    count++;
  }

  // Lógica de busca do ID pelo nome
  int funcionarios_length = count;  // Tamanho do vetor funcionarios

  // Nome a ser buscado
  string query;
  getline(cin >> ws, query);

  // Busca sequencial pelo ID do funcionário
  string result_ID = sequencial(funcionarios, funcionarios_length, query);

  // Exibindo o resultado da busca
  if (result_ID == "-1") {
    cout << "Funcionario nao encontrado" << endl;
  } else
    cout << result_ID << endl;

  return 0;
}
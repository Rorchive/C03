/**
 * @file: PEST-Controle_de_acesso.cpp
 * @author: Rodrigo Andrade
 * @date: 03 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

#include "busca.h"  // Include the binary search algorithm

using namespace std;

int main() {
  int ids[20];  // Array to store access IDs
  int id;       // aux variable for input

  int count = 0;

  // Input access IDs into the array
  while (cin >> id && id != -1) {
    ids[count] = id;
    count++;
  }

  // Search for an ID
  int search_id;
  cin >> search_id;

  int index = binaria(ids, count, search_id);

  // Check if the ID has access
  if (index != -1) {
    cout << "Possui acesso" << endl;
  } else
    cout << "Nao possui acesso" << endl;

  return 0;
}
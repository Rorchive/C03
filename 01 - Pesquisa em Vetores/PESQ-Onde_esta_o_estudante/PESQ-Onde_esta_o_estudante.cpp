/**
 * @file: PESQ-Onde_esta_o_estudante.cpp
 * @author: Rodrigo Andrade
 * @date: 03 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

#include "busca.h"

using namespace std;

int main() {
  int N;  // Number of students
  cin >> N;

  int student_ids[N];  // Array to hold student IDs

  // Input student IDs
  for (int i = 0; i < N; i++) cin >> student_ids[i];

  // Input the ID to search for
  int search_id;
  cin >> search_id;

  // Search for the student room corridor by ID
  int corridor = sequencial(student_ids, N, search_id);

  if (corridor != -1) {
    cout << "Corredor " << corridor << endl;
  } else
    cout << "Nao localizado" << endl;

  return 0;
}
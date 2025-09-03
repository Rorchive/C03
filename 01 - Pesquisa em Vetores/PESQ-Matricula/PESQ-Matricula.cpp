/**
 * @file: PEST-Matricula.cpp
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

  dados students[10000];  // Array of student data

  // Input student data
  for (int i = 0; i < N; i++) {
    cin.ignore();
    getline(cin, students[i].nome);
    getline(cin, students[i].curso);
    cin >> students[i].matricula;
  }

  // Search for a student by name
  string name_query;
  cin.ignore();
  getline(cin, name_query);

  // Perform the search (sequencial search)
  int index = sequencial(students, N, name_query);

  // Display the search results
  if (index != -1) {
    cout << students[index].nome << endl;
    cout << students[index].curso << endl;
    cout << students[index].matricula << endl;
  } else
    cout << "Aluno nao localizado" << endl;

  return 0;
}
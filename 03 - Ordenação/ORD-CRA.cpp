/**
 * @file: ORD-CRA.cpp
 * @author: Rodrigo Andrade
 * @date: 10 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

#include "ordenacao.h"

using namespace std;

int main() {
  // Read the number of students
  int N;
  cin >> N;

  // Create an array to hold student data
  dados students[1000];

  int count = 0;

  // Populate the array with student data
  for (count; count < N; count++) {
    cin.ignore();  // Ignore the newline character from previous input
    getline(cin, students[count].nome);
    getline(cin, students[count].curso);
    cin >> students[count].matricula;
  }

  int arraySize = count;

  // Sort the array in the growing order based on the name
  quickSortStruct(students, 0, (arraySize - 1));

  for (int j = 0; j < arraySize; j++) {
    cout << students[j].nome << endl;
    cout << students[j].curso << endl;
    cout << students[j].matricula << endl;
  }

  return 0;
}
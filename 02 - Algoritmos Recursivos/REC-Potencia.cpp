/**
 * @file: REC-Potencia.cpp
 * @author: Rodrigo Andrade
 * @date: 27 Ago 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <iostream>

using namespace std;

// Pow recursive function
int pow(int a, int n) {
  if (n == 0)
    return 1;
  else
    return a * pow(a, n - 1);
}

int main() {
  int a, n;  // base and exponent
  cin >> a >> n;

  // Calculate power using recursion
  int result = pow(a, n);
  cout << result << endl;

  return 0;
}
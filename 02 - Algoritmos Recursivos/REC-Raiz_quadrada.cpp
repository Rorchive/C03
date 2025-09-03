/**
 * @file: REC-Raiz_quadrada.cpp
 * @author: Rodrigo Andrade
 * @date: 03 Sep 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/Rorchive/C03
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

// Recursive function to calculate the square root
double raiz(double x, double x0, double epsilon) {
  if (abs((x0 * x0) - x) < epsilon) {  // Base case
    return x0;
  } else  // Recursive case
    return raiz(x, ((x0 * x0 + x) / (2 * x0)), epsilon);
}

int main() {
  double x, x0, epsilon;  // Input values
  cin >> x >> x0 >> epsilon;

  // Call the recursive function
  double result = raiz(x, x0, epsilon);

  // Output the result
  cout << fixed << setprecision(4) << result << endl;

  return 0;
}
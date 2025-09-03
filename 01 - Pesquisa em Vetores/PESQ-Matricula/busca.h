#ifndef SEQUENCIAL_H
#define SEQUENCIAL_H

#include <string>
using namespace std;

struct dados {
  string nome;
  string curso;
  int matricula;
};

int sequencial(dados vetor[], int tamanho, string x);

#endif
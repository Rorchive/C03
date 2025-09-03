#include "busca.h"

int sequencial(dados vetor[], int tamanho, string x) {
  bool achou = false;  // var aux p/ busca
  int i = 0;           // contador
  while (achou == false && i < tamanho) achou = vetor[i++].nome == x;
  if (achou)
    return (i - 1);
  else
    return -1;
}

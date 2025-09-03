int sequencial(int vetor[], int tamanho, int x) {
  bool achou = false;  // var aux p/ busca
  int i = 0;           // contador
  while (achou == false && i < tamanho) achou = vetor[i++] == x;
  if (achou)
    return (i - 1);
  else
    return -1;
}

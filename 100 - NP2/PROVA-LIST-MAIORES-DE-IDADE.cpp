#include <iostream>
#include <list>

using namespace std;

int nMaiores(list<int> lista) {
    int n = 0; // qtd socios com mais de 18 anos
    list<int>::iterator p;

    for (p = lista.begin(); p != lista.end(); p++)
        if (*p > 18)
            n++;

    return n;
}

int main() {
    list <int> lista; // ponteiro para a lista
    int idade; // var aux para leitura
    int N; // numero de socios
    int i; // contador

    // Lendo N
    cin >> N;

    // Lendo idades e armazenando na lista
    for (i = 0; i < N; i++) {
        cin >> idade;
        lista.push_back(idade);
    }

    // Contando e mostrando socios com mais de 18 anos
    cout << nMaiores(lista) << " socios com mais de 18 anos" << endl;

    return 0;
}

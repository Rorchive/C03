#include <iostream>
#include <list>

using namespace std;

int calcSoma(list<int> lista, string tipo) {
    list <int>::iterator p;
    int soma = 0;

    for (p = lista.begin(); p != lista.end(); p++)
        if (tipo == "PAR" && *p % 2 == 0)
            soma += *p;
        else if (tipo == "IMPAR" && *p % 2 != 0)
            soma += *p;
    return soma;
}

int main() {
    list <int> lista;
    int x; // var aux para leitura
    string tipo; // PAR ou IMPAR
    list <int>::iterator p;

    // Lendo dados e inserindo na lista
    cin >> x;
    while (x != 0)
    {
        lista.push_back(x);
        cin >> x;
    }

    // Verificando tipo de soma
    getline(cin >> ws, tipo);

    // Calculando a soma desejada e mostrando os resultados
    cout << "Elementos inseridos: ";
    for (p = lista.begin(); p != lista.end(); p++)
        cout << *p << " ";
    cout << endl;
    cout << "soma = " << calcSoma(lista, tipo) << endl;

    return 0;
}

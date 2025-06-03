//Diego Armando Castilleja ISC
//Capturar 10 valores numericos (positivos, negativos, decimales)
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    double numeros[10];

    cout << "iingresa 10 numeros (pueden ser negativos, positivos o decimales): " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    sort(numeros, numeros + 10);

    cout << "\nNumeros ordenados de forma ascendente:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}


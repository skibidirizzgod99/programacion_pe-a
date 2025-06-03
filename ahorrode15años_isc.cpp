//Diego Armando Castilleja ISC
//Algoritmo para calcular la cantidad que se tendria ahorrada de 15 a�os si se depositan
//15,000 pesos a una tasa de interes de 3.7% mensual, capitalizable cada mes
#include <iostream>
#include <cmath>      
#include <iomanip>    
using namespace std;

int main() {
    const double capitalInicial = 15000.0;
    const double tasaMensual = 0.037;  // 3.7% mensual
    const int totalMeses = 15 * 12;    // 15 a�os

    double montoFinal = capitalInicial * pow(1 + tasaMensual, totalMeses);

    cout << fixed << setprecision(2);
    cout << "la cantidad ahorrada despu�s de 15 anios ess: $" << montoFinal << endl;

    return 0;
}


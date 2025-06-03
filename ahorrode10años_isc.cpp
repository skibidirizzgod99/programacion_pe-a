//Diego Armando Castilleja ISC
//Calcular la cantidad que se tendria ahorrada despues de 10 años si se depositan 1,000 pesos
//mensualmente a una tasa de interes mensual del 3%, capitalizable cada mes, es decir, 
//que al capital se le agrega los intereses
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const double depositoMensual = 1000.0;
    const double tasaMensual = 0.03; // 3% mensual
    const int totalMeses = 10 * 12;  // 10 años

    double capital = 0.0;

    for (int mes = 1; mes <= totalMeses; mes++) {
        capital += depositoMensual;         // Se deposita
        capital *= (1 + tasaMensual);       // Se aplica el interés
    }

    cout << fixed << setprecision(2);
    cout << "la cantidad ahorrada después de 10 anios es: $" << capital << endl;

    return 0;
}


//Diego Armando Castilleja ISC
//Area de un triangulo
#include <iostream>

using namespace std;

int main() {
    float base, altura, area;

    cout << "iingresa la base del tri�ngulo: ";
    cin >> base;

    cout << "ingresa la altura del tri�ngulo: ";
    cin >> altura;

    area = 0.5 * base * altura;

    cout << "el �rea del tri�ngulo es: " << area << endl;

    return 0;
}


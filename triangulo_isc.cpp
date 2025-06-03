//Diego Armando Castilleja ISC
//Area de un triangulo
#include <iostream>

using namespace std;

int main() {
    float base, altura, area;

    cout << "iingresa la base del triángulo: ";
    cin >> base;

    cout << "ingresa la altura del triángulo: ";
    cin >> altura;

    area = 0.5 * base * altura;

    cout << "el área del triángulo es: " << area << endl;

    return 0;
}


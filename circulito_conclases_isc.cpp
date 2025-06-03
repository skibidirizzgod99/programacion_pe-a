//Diego Armando Castilleja ISC
//Perimetro o Area de un circulo con clases
#include <iostream>
using namespace std;

class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) {
        radio = r;
    }

    double calcularArea() {
        return 3.1416 * radio * radio;
    }

    double calcularPerimetro() {
        return 2 * 3.1416 * radio;
    }
};

int main() {
    double radio;
    char opcion;

    cout << "Ingresa el radio: ";
    cin >> radio;

    Circulo miCirculo(radio);

    cout << "Ingresa 'a' para área o 'p' para perímetro: ";
    cin >> opcion;

    if (opcion == 'a' || opcion == 'A') {
        cout << "Área: " << miCirculo.calcularArea() << endl;
    } else if (opcion == 'p' || opcion == 'P') {
        cout << "Perímetro: " << miCirculo.calcularPerimetro() << endl;
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}


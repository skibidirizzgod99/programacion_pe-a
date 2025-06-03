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

    cout << "Ingresa 'a' para �rea o 'p' para per�metro: ";
    cin >> opcion;

    if (opcion == 'a' || opcion == 'A') {
        cout << "�rea: " << miCirculo.calcularArea() << endl;
    } else if (opcion == 'p' || opcion == 'P') {
        cout << "Per�metro: " << miCirculo.calcularPerimetro() << endl;
    } else {
        cout << "Opci�n no v�lida." << endl;
    }

    return 0;
}


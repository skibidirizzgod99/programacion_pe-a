#include <iostream>
#include <string>

using namespace std;

enum Estado { APAGADO, ESPERA, REMOJO, ENJUAGUE, DRENAJE, SECADO };

class Lavadora {
private:
    Estado estadoActual;
    string plan;
    string luz;

public:
    Lavadora() {
        estadoActual = APAGADO;
        plan = "regular";
        luz = "apagada";
    }

    void encender() {
        if (estadoActual == APAGADO) {
            estadoActual = ESPERA;
            cout << "lavadora encendida. Estado: ESPERA\n";
        } else {
            cout << "la lavadora ya está encendida.\n";
        }
    }

    void apagar() {
        estadoActual = APAGADO;
        cout << "lavadora apagada. Estado: APAGADO\n";
    }

    void establecerPlan(const string& nuevoPlan) {
        if (estadoActual == APAGADO) {
            cout << "no puedes seleccionar un plan con la lavadora apagada.\n";
            return;
        }

        if (nuevoPlan == "regular" || nuevoPlan == "delicado" || nuevoPlan == "superdelicado") {
            plan = nuevoPlan;
            cout << "plan seleccionado: " << plan << endl;
        } else {
            cout << "plan invalido.\n";
        }
    }

    void iniciar() {
        if (estadoActual != ESPERA) {
            cout << "la lavadora no esta lista para iniciar.\n";
            return;
        }

        cout << "\niniciando ciclo con plan: " << plan << endl;
        estadoActual = REMOJO;
        remojar();
    }

    void remojar() {
        luz = "remojo";
        cout << "estado: REMOJO\n";
        cout << "luz: " << luz << ", bomba: ingresando agua\n";
        mostrarEspera(30);
        enjuagar();
    }

    void enjuagar() {
        estadoActual = ENJUAGUE;
        luz = "enjuague";
        cout << "\nestado: ENJUAGUE\n";
        cout << "luz: " << luz << ", agitador funcionando\n";
        mostrarEspera(30);
        drenar();
    }

    void drenar() {
        estadoActual = DRENAJE;
        luz = "drenaje";
        cout << "\nestado: DRENAJE\n";
        cout << "luz: " << luz << ", bomba: sacando agua\n";
        mostrarEspera(5);

        if (plan != "superdelicado") {
            secar(); 
        } else {
            luz = "apagada";
            cout << "fin del ciclo (superdelicado). luz apagada.\n";
            estadoActual = ESPERA; 
        }
    }

    void secar() {
        if (estadoActual == APAGADO) {
            cout << "la lavadora esta apagada. enciendela primero.\n";
            return;
        }

        estadoActual = SECADO;
        luz = "secado";
        cout << "\nEstado: SECADO\n";
        cout << "luz: " << luz << ", agitador funcionando\n";
        mostrarEspera(20);
        luz = "apagada";
        cout << "Secado completo. luz apagada.\n";
        estadoActual = ESPERA;
    }

    void mostrarEspera(int segundos) {
        cout << "(Simulando espera de " << segundos << " segundos...)\n";
    }
};

void mostrarMenu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Encender lavadora\n";
    cout << "2. Seleccionar plan (regular, delicado, superdelicado)\n";
    cout << "3. Iniciar ciclo\n";
    cout << "4. Apagar lavadora\n";
    cout << "5. Iniciar solo secado\n";
    cout << "0. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    Lavadora lavadora;
    int opcion;
    string planUsuario;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                lavadora.encender();
                break;
            case 2:
                cout << "ingrese el plan: ";
                cin >> planUsuario;
                lavadora.establecerPlan(planUsuario);
                break;
            case 3:
                lavadora.iniciar();
                break;
            case 4:
                lavadora.apagar();
                break;
            case 5:
                lavadora.secar();
                break;
            case 0:
                cout << "saliendo del programa...\n";
                break;
            default:
                cout << "opcion invalida.\n";
        }
    } while (opcion != 0);

    return 0;
}

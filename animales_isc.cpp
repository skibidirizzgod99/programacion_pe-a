//Diego Armando Castilleja ISC
//Crear objetos con animales
#include <iostream>
#include <string>

using namespace std;


class Animales {
public:
    string color;
    string especie;
    int edad;
    string habitat;

public:
    Animales(string _color, string _especie, int _edad, string _habitat)
        : color(_color), especie(_especie), edad(_edad), habitat(_habitat) {}

    void mostrarInformacion() {
        cout << "Color: " << color << "\n";
        cout << "Especie: " << especie << "\n";
        cout << "Edad: " << edad << " anos\n";
        cout << "Habitat: " << habitat << "\n";
    }
};

class Oviparos : public Animales {
public:
    Oviparos(string _color, string _especie, int _edad, string _habitat)
        : Animales(_color, _especie, _edad, _habitat) {}

    void tipoAnimal() {
        cout << especie << " es un animal oviparo.\n";
    }

    void sonido() {
        if (especie == "Pato") cout << "Hace cuac cuac\n";
        else if (especie == "Gallina") cout << "Hace clo clo\n";
        else if (especie == "Tortuga") cout << "Hace sonidos muy suaves\n";
        else if (especie == "Pez") cout << "Hace glup glup\n";
        else if (especie == "Cocodrilo") cout << "Hace gruñidos fuertes\n";
    }
};

class Viviparos : public Animales {
public:
    Viviparos(string _color, string _especie, int _edad, string _habitat)
        : Animales(_color, _especie, _edad, _habitat) {}

    void tipoAnimal() {
        cout << especie << " es un animal viviparo.\n";
    }

    void alimentacion() {
        if (especie == "Perro") cout << "Come croquetas o carne\n";
        else if (especie == "Gato") cout << "Come pescado y croquetas\n";
        else if (especie == "Leon") cout << "Come carne cruda\n";
        else if (especie == "Caballo") cout << "Come pasto y heno\n";
        else if (especie == "Ser humano") cout << "Come alimentos variados\n";
    }
};


int main() {
    
    Oviparos pato("blanquito", "Pato", 3, "Lago");
    Oviparos gallina("cafecito", "Gallina", 2, "Granja");

    Viviparos perro("grisaceo", "Perro", 5, "Casa");
    Viviparos leon("dorao", "Leon", 4, "Sabana");

    cout << "=== Animal Oviparo ===\n";
    pato.mostrarInformacion();
    pato.tipoAnimal();
    pato.sonido();
    cout << "\n";

    cout << "=== Animal Oviparo ===\n";
    gallina.mostrarInformacion();
    gallina.tipoAnimal();
    gallina.sonido();
    cout << "\n";

    cout << "=== Animal Viviparo ===\n";
    perro.mostrarInformacion();
    perro.tipoAnimal();
    perro.alimentacion();
    cout << "\n";

    cout << "=== Animal Viviparo ===\n";
    leon.mostrarInformacion();
    leon.tipoAnimal();
    leon.alimentacion();
    cout << "\n";

    return 0;
}

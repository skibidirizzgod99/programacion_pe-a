//Diego Armando Castilleja ISC
//Actividades que se realicen con un balon
#include <iostream>
#include <string>
using namespace std;


class Deporte {
protected:
    string nombre;
    int jugadoresPorEquipo;
    string tipoBalon;
    string lugar;

public:
    Deporte(string nom, int jugadores, string balon, string lug)
        : nombre(nom), jugadoresPorEquipo(jugadores), tipoBalon(balon), lugar(lug) {}

    virtual void mostrarInfo() {
        cout << "Deporte: " << nombre << endl;
        cout << "Jugadores por equipo: " << jugadoresPorEquipo << endl;
        cout << "Tipo de balon: " << tipoBalon << endl;
        cout << "Lugar: " << lugar << endl;
    }

    virtual void tipoContacto() = 0; 
};


class DeporteConPies : public Deporte {
public:
    DeporteConPies(string nom, int jugadores, string balon, string lug)
        : Deporte(nom, jugadores, balon, lug) {}

    void tipoContacto() override {
        cout << "Este deporte se juega principalmente con los pies." << endl;
    }
};


class DeporteConPies2 : public Deporte {
public:
    DeporteConPies2(string nom, int jugadores, string balon, string lug)
        : Deporte(nom, jugadores, balon, lug) {}

    void tipoContacto() override {
        cout << "Este deporte se juega principalmente con los pies." << endl;
    }
};






class DeporteConManos1 : public Deporte {
public:
    DeporteConManos1(string nom, int jugadores, string balon, string lug)
        : Deporte(nom, jugadores, balon, lug) {}

    void tipoContacto() override {
        cout << "Este deporte se juega principalmente con las manos." << endl;
    }
};




class DeporteConManos2 : public Deporte 
{
public:
    DeporteConManos2(string nom, int jugadores, string balon, string lug)
        : Deporte(nom, jugadores, balon, lug) {}

    void tipoContacto() override {
        cout << "Este deporte se juega principalmente con las manos." << endl;
    }
};


int main() {
    Deporte* futbol = new DeporteConPies("Futbol", 11, "Balon redondo", "Cancha de cesped");
    Deporte* futbolsala = new DeporteConPies2("futbol sala", 6, "balon redondo", "cancha de concreto");
    Deporte* basquetball = new DeporteConManos2("Basquetball", 7, "Balon pequeno", "Cancha cubierta");
	Deporte* voleyball = new DeporteConManos2("voleyball", 5, "balon pequeno", "cancha de arena");
	
    futbol->mostrarInfo();
	futbol->tipoContacto();
	
	cout << endl;

	futbolsala->mostrarInfo();
	futbolsala->tipoContacto();
	
    cout << endl;

    basquetball->mostrarInfo();
    basquetball->tipoContacto();

	cout << endl;

	voleyball->mostrarInfo();
	voleyball->tipoContacto();
	
	cout << endl; 
	
    delete futbol;
    delete basquetball;
    delete voleyball;

    return 0;
}

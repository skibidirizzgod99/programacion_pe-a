//Diego Armando Castilleja ISC
//Leer un archivo de texto, y que lo guarde en una variable
#include <iostream>
#include <fstream>  
#include <string>
using namespace std;

int main() {
    ifstream archivo("ejemplo.txt"); 
    string contenido, linea;

    if (!archivo) {
        cout << "no se pudo abrir el archivo." << endl;
        return 1;
    }

    while (getline(archivo, linea)) {
        contenido += linea + '\n';
    }

    archivo.close();

    cout << "contenido del archivo:" << endl;
    cout << contenido << endl;

    return 0;
}


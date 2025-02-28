#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivoSalida;
    archivoSalida.open("ejemplo1.txt");
    if (archivoSalida.is_open()) {
        archivoSalida << "Hola, mundo!" << endl;
        archivoSalida<< "Esto es una prueba" << endl;
        archivoSalida<< "Linea 3" << endl;
        archivoSalida.close();
        cout<<"Texto esctrito en el archivo con exito"<<endl;
    } else {
        cout<< "No se pudo abrir el archivo"<<endl;
    }
    return 0;
}
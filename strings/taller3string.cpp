#include <iostream>
#include <string>
using namespace std;

string reemplazarCadena(string &cadena, const string &objetivo, const string &nuevaPorcion) {
    size_t pos = cadena.find(objetivo);
    if (pos != string::npos) {
        cadena.replace(pos, objetivo.size(), nuevaPorcion);
    } else {
        cout << "No se encontro la cadena objetivo." << endl;
    }
}

 main() {
    string cadena;
    string objetivo;
    string nuevaPorcion;

    cout << " Ingrese una frase= ";
    getline(cin, cadena);
    cout << " Ingrese la palabra a reemplazar= ";
    getline(cin, objetivo);
    cout << " Ingrese la nueva palabra= ";
    getline(cin, nuevaPorcion);

    reemplazarCadena(cadena, objetivo, nuevaPorcion);

    cout << "La cadena resultante es: " << cadena << endl;

}
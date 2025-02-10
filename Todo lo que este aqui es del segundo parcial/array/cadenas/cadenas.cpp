#include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50) {
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cad, n);
    cin.clear();
}

int longitudCadena(char cad[]) {
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++) {
        contador++;
    }
    return contador;
}

int contarPalabras(char cad[]) {
    int palabras = 0;
    bool enPalabra = false;
    for (int i = 0; cad[i] != '\0'; i++) {
        if (cad[i] != ' ' && !enPalabra) {
            enPalabra = true;
            palabras++;
        } else if (cad[i] == ' ') {
            enPalabra = false;
        }
    } return palabras;
}

int main() {
    char palabras[100];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "La longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras en la cadena es: " << contarPalabras(palabras) << endl;

}
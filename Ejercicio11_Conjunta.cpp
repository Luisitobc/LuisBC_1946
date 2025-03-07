#include <iostream>
#include <cstring>
using namespace std;

void invertirCadena(char cadena[], int longitud) {
    for (int i = 0; i < longitud / 2; ++i) {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}

void invertirNombresApellidos(char cadena[]) {
    char apellidos[100] = "";
    char nombres[100] = "";
    int longitud = strlen(cadena);
    int j = 0;
    bool esApellido = true;


    for (int i = longitud - 1; i >= 0; i--) {
        if (cadena[i] == ' ') {
            if (esApellido) {
                apellidos[j] = '\0';
                esApellido = false;
                j = 0;
            } else {
                nombres[j] = '\0';
                break;
            }
        } else {
            if (esApellido) {
                apellidos[j++] = cadena[i];
            } else {
                nombres[j++] = cadena[i];
            }
        }
    }


    invertirCadena(apellidos, strlen(apellidos));
    invertirCadena(nombres, strlen(nombres));

    
    cout << "Apellidos y nombres invertidos: " << apellidos << " " << nombres << endl;
}

main() {
    char cadena[100];
    cout << "Ingrese una cadena (nombres y apellidos): ";
    cin.getline(cadena, 100);

    invertirNombresApellidos(cadena);

    return 0;
}
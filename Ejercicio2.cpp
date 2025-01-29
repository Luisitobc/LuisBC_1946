#include <iostream>
using namespace std;

int identificarTipoCadena(char cadena[]) {
    bool tieneletras = false;
    bool tienenumeros = false;
    
    if(cadena[0] == '0') {
        return 'E'; 
    }

    for(int i = 0; cadena[i] != '0'; i++) {
        if(cadena[i] >= '0' && cadena[i] <= '9') {
            tienenumeros = true;
        }
        else if((cadena[i] >= 'A' && cadena[i] <= 'N') || (cadena[i] >= 'a' && cadena[i] <= 'n')) {
            tieneletras = true;
        }
    }
    
    if(tieneletras && tienenumeros) {
        return 'M'; 
    } else if(tieneletras) {
        return 'L'; 
    } else if(tienenumeros) {
        return 'N'; 
    } else {
        return 'E';
    }
}
main() {
    const int MAX = 100;
    char cadena[MAX];
    
    cout << "Ingrese una cadena: ";
    cin.getline(cadena, MAX);
    
    switch(identificarTipoCadena(cadena)) {
        case 'L': cout << "Solo letras"; break;
        case 'N': cout << "Solo numeros"; break;
        case 'M': cout << "Mezcla (letras y numeros)"; break;
        case 'E': cout << "Cadena vacia o caracteres invalidos"; break;
        default: cout << "Error inesperado";
    }
    
}
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "../tutorias/ahorcado.h"
using namespace std;


string palabraAleatoria(string palabras[]) {
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}


int opciones() {
    int op;
    cout << "1. deportes" << endl;
    cout << "2. animales" << endl;
    cout << "3. frutas" << endl;
    cout << "4. paises" << endl;
    cout << "5. marcas de autos" << endl;
    cin >> op;
    return op;
}


void mostrarAhorcado(int intentos) {
    switch (intentos) {
        case 6:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 5:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "  O   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 4:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "  O   |" << endl;
            cout << "  |   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 3:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "  O   |" << endl;
            cout << " /|   |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 2:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "  O   |" << endl;
            cout << " /|\\  |" << endl;
            cout << "      |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 1:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "  O   |" << endl;
            cout << " /|\\  |" << endl;
            cout << " /    |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
        case 0:
            cout << "  +---+" << endl;
            cout << "  |   |" << endl;
            cout << "  O   |" << endl;
            cout << " /|\\  |" << endl;
            cout << " / \\  |" << endl;
            cout << "      |" << endl;
            cout << "=========" << endl;
            break;
    }
}


int main() {
    string palabras[5], palabraSeleccionada, palabraOculta;
    int op, intentos = 7; 
    char letra;
    bool acierto;

    cout << "Juego del Ahorcado" << endl;
    cout << "-------------------" << endl;
    cout << "Elige una categoria: " << endl;
    op = opciones();

    switch (op) {
        case 1:
            deportes(palabras);
            break;
        case 2:
            animales(palabras);
            break;
        case 3:
            frutas(palabras);
            break;
        case 4:
            paices(palabras);
            break;
        case 5:
            marcadeautos(palabras);
            break;
        default:
            cout << "Opción inválida. Saliendo del juego." << endl;
            return 0;
    }


    palabraSeleccionada = palabraAleatoria(palabras);
    palabraOculta = string(palabraSeleccionada.length(), '_'); 

    cout << "¡Comienza el juego!" << endl;


    while (intentos > 0 && palabraOculta != palabraSeleccionada) {
        cout << "\nPalabra: " << palabraOculta << endl;
        mostrarAhorcado(intentos); 
        cout << "Intentos restantes: " << intentos << endl;
        cout << "Ingresa una letra: ";
        cin >> letra;

        acierto = false;


        for (size_t i = 0; i < palabraSeleccionada.length(); i++) {
            if (tolower(palabraSeleccionada[i]) == tolower(letra)) {
                palabraOculta[i] = palabraSeleccionada[i];
                acierto = true;
            }
        }

        if (!acierto) {
            intentos--;
            cout << "Letra incorrecta. Te quedan " << intentos << " intentos." << endl;
        }
    }


    if (palabraOculta == palabraSeleccionada) {
        cout << "\n¡Felicidades! Has adivinado la palabra: " << palabraSeleccionada << endl;
    } else {
        cout << "\n¡Perdiste! La palabra era: " << palabraSeleccionada << endl;
        mostrarAhorcado(intentos); 
    }

    return 0;
}
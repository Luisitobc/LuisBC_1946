//Luis Bocancho 
#include <iostream>
#include "../../../librerias/arrays.h"
using namespace std;
using namespace llenarvectorn;

void juegoAdivina(int rango) {
    inicializarAleatorio();
    int numero_secreto = generarNumeroAleatorio(rango);
    int intento, intentos = 0;
    const int max_intentos = 3;

    cout << "Bienvenido al juego de adivinanza de numeros" << endl;
    cout << "Estoy pensando en un numero entre 1 y " << rango << " " << endl;

    while (intentos < max_intentos) {
        cout << "Adivina el numero: ";
        cin >> intento;
        intentos++;

        if (intento < numero_secreto) {
            cout << "Demasiado bajo. Intenta de nuevo " << endl;
        } else if (intento > numero_secreto) {
            cout << "Demasiado alto. Intenta de nuevo " << endl;
        } else {
            cout << "Felicidades Adivinaste el numero en el " << intentos << " intento  " << endl;
            return;
        }
    }
    cout << "Lo siento, has alcanzado el numero maximo de los intentos permitidos\n El numero era el siguiente " << numero_secreto << " " << endl;
}

int main() {
    int rango;
    cout << "Ingrese el rango maximo para el juego de adivinanza: ";
    cin >> rango;
    juegoAdivina(rango);
    cout << "Gracias por jugar" << endl;
}
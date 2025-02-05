#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void juegoAdivina(int rango) {
    srand(time(0));
    int numero_secreto = rand() % rango + 1;
    int intento, intentos = 0;
    const int max_intentos = 5;

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
        }
    }
    cout << "Lo siento, has alcanzado el numero maximo de los intentos permitidos\n El numero era el siguiente " << numero_secreto << " " << endl;
}

main() {
    int rango;
    cout << "Ingrese el rango maximo para el juego de adivinanza: ";
    cin >> rango;
    juegoAdivina(rango);
    cout << "Gracias por jugar" << endl;
}
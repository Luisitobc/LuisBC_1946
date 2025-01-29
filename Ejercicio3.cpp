#include <iostream>
#include <random>
#include <limits>
using namespace std;

int obtenerEleccionUsuario() {
    int eleccion;
    while (true) {
        cout << "\n1. Piedra\n2. Papel\n3. Tijera\nElige (1-3): ";
        if (cin >> eleccion) {
            if (eleccion >= 1 && eleccion <= 3) {
                return eleccion - 1;
            }
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Entrada inválida. Inténtalo de nuevo.\n";
    }
}

int obtenerEleccionMaquina(int nivel, int eleccionUsuario) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 2);
    
    if (nivel == 3) { 
        uniform_int_distribution<> prob(0, 1);
        if (prob(gen) == 0) { 
            return (eleccionUsuario + 1) % 3;
        }
    } else if (nivel == 2) { 
        uniform_int_distribution<> prob(0, 2);
        if (prob(gen) == 0) { 
            return (eleccionUsuario + 1) % 3;
        }
    }
    
    return distrib(gen); 
}

int determinarGanadorRonda(int usuario, int maquina) {
    if (usuario == maquina) return 0;
    
    if ((usuario == 0 && maquina == 2) ||
        (usuario == 1 && maquina == 0) ||
        (usuario == 2 && maquina == 1)) {
        return 1;
    }
    return -1;
}

void mostrarEleccion(int eleccion) {
    string opciones[] = {"Piedra", "Papel", "Tijera"};
    cout << opciones[eleccion];
}

void determinarGanadorJuego(int puntosUsuario, int puntosMaquina) {
    cout << "\n=== Resultado Final ===\n"
         << "Usuario: " << puntosUsuario << " puntos\n"
         << "Máquina: " << puntosMaquina << " puntos\n";
    
    if (puntosUsuario > puntosMaquina) {
        cout << "¡Felicidades! ¡Has ganado el juego!\n";
    } else if (puntosMaquina > puntosUsuario) {
        cout << "La máquina ha ganado el juego.\n";
    } else {
        cout << "¡El juego ha terminado en empate!\n";
    }
}

main() {
    int nivel;
    cout << "=== Piedra, Papel o Tijera ==="
         << "\nSeleccione nivel de dificultad:"
         << "\n1. Principiante\n2. Intermedio\n3. Avanzado\n";
    
    while (true) {
        cout << "Opción (1-3): ";
        if (cin >> nivel && nivel >= 1 && nivel <= 3) break;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Inténtalo de nuevo.\n";
    }

    int puntosUsuario = 0;
    int puntosMaquina = 0;

    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "\n=== Ronda " << ronda << " ===\n"
             << "Puntuación actual - Usuario: " << puntosUsuario
             << ", Máquina: " << puntosMaquina << "\n";

        int eleccionUsuario = obtenerEleccionUsuario();
        int eleccionMaquina = obtenerEleccionMaquina(nivel, eleccionUsuario);

        cout << "\nTu elección: ";
        mostrarEleccion(eleccionUsuario);
        cout << "\nMáquina elige: ";
        mostrarEleccion(eleccionMaquina);
        cout << "\n";

        int resultado = determinarGanadorRonda(eleccionUsuario, eleccionMaquina);

        if (resultado == 1) {
            cout << "¡Ganaste esta ronda!\n";
            puntosUsuario++;
        } else if (resultado == -1) {
            cout << "La máquina gana esta ronda.\n";
            puntosMaquina++;
        } else {
            cout << "¡Empate en esta ronda!\n";
        }
    }

    determinarGanadorJuego(puntosUsuario, puntosMaquina);
    cout << "\nGracias por participar, ¡vuelve pronto!\n";
}
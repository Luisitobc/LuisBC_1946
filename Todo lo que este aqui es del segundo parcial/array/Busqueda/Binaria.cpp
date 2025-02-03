#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../ordenamiento/Insercion.cpp"
using namespace std;

void llenaDatos(int v[], int n) {

}

void verElementos(int v[], int n) {

}

bool isBusquedabinaria(int v[], int n, int elemento) {
    int inicio = 0, fin = n - 1, mitad;
    while (inicio <= fin) {
        mitad = (inicio + fin) / 2;
        if (v[mitad] == elemento) {
            return true;
        } else if (v[mitad] < elemento) {
            inicio = mitad + 1;
        } else {
            fin = mitad - 1;
        }
    }
    return false;
}

int main() {
    int ne, dato;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> ne;
    int vector[ne];
    llenaDatos(vector, ne);
    cout << "Elementos del array: ";
    verElementos(vector, ne);
    cout << "Ingrese el dato a buscar: ";
    cin >> dato;
    (isBusquedabinaria(vector, ne, dato)) ? cout << "El elemento esta en el array" : cout << "El elemento no existe en el array";
}
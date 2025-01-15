 #include <iostream>
using namespace std;

int potencia(int base, int exponente) {
    if (exponente == 0)
        return 1;
    return base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;
    
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;
    
    cout << "La potencia de " << base << " elevado a " << exponente;
    cout << " es " << potencia(base, exponente) << endl;
    
    return 0;
}
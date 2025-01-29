#include <iostream>
#include <string>
using namespace std;

int main() {
    string categoria[] = {"deficiente", "deficiente", "deficiente", "deficiente", "deficiente",
                         "regular", "regular", "regular", "regular", "regular",
                         "bueno", "bueno", "bueno", "bueno", "bueno",
                         "muy bueno", "muy bueno", "muy bueno",
                         "excelente", "excelente"};
    
    int numero;
    cout << "Ingrese un numero entre 1 y 20: ";
    cin >> numero;
    

    if (numero >= 1 && numero <= 20) {
        cout << "Categoria: " << categoria[numero - 1] << endl;
    } else {
        cout << "Error: El numero debe estar entre 1 y 20" << endl;
    }
        cout << "\nGracias por ingresar" << endl;
}

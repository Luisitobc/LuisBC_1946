#include <iostream>
#include "../Librerias/strings.h"
using namespace std;

main (){
    string palabras;
    cout << "Ingrese una palabra: ";
    getline(cin, palabras);
    reemplazar(palabras);
    cout << "La palabra invertida es: " << palabras << endl;
    return 0;
}
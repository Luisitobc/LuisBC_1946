#include    <iostream>
using namespace std;
main (){
    int numero;
    float inferior;
    float superior;
while (true)
{

    cout << " Ingrese el limite inferiror: ";
    cin>> inferior; 
    cout    << " Ingrese el limite superior: ";
    cin>> superior;
        if (inferior <= superior )
        {
            break;
        }
        else {
            cout    << " El limite inferior nunca puede ser mayor que el superior ";
        }
   float numero;

    while (true) {
       cout << "Ingrese un número (0 para salir): ";
    cin >> numero;

        if (numero == 0) {
            break;
        } else if (numero < inferior || numero > superior) {
            
        }
    }

}

}

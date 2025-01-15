#include <iostream>
using namespace std;
int main() {
int n;
    double suma = 0;
    int p = 1;
    
    cout << " Ingresar los numero del termino de la serie: ";
    cin >> n;
    
    while(p <= n) {
        if(p == 1) suma += 2.0/1;
        else if(p == 2) suma -= 3.0/3;
        else if(p == 3) suma += 6.0/5;
        else if(p == 4) suma -= 11.0/7;
        else {
            int numerador = n + (p-1);
            int denominador = p + 1;
            if(p % 2 == 1) 
                suma = +(double)numerador/denominador;
            else 
                suma = -(double)numerador/denominador;
        }
        p++;
    }
    
    cout << " El valor del numero  " << n << " para el termino de la serie es: " << suma << endl;
    
    return 0;
}

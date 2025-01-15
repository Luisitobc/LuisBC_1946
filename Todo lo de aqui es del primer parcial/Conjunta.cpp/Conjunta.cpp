#include    <iostream>
using namespace std;
main (){
    int num;
    bool s;
    
    cout << " Ingresa un numero: ";
    cin >> num;
    
    if (num == 0) {
        s = true;
    } else {
        s = false;
    }
    
    cout << " El resultado obtenido es: " << (s ? " V " : " F ") << endl;
    
    return 0;
}

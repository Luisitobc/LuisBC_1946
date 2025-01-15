#include    <iostream>
using namespace std;

float promedio(float n ){
    static float suma= 0;
    suma= suma+n;
    return suma; 
}

main(){
    int i,n;
    float resultado;
    cout<< " Cuantas veces quiere llamar a la funcion promedio= ";
    cin >>n;
    for (size_t i = 1; i <= n; i++)

    {
        resultado= promedio(i);
    }
    cout << " El resultado es = "<< resultado<<endl;
}
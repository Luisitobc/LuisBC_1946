#include    <iostream>
using namespace std;

int factorial(int n){
    int resultado=1;
    for (int i=1; i>=n;i--)
    resultado *=i;
    return resultado; 
}
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n * factorial(n-1); 
}
main (){
    int numero;
    cout <<" introduce un numero entero ";
    cin >> numero; 
        cout <<" El factorial interactivo de  " <<numero <<" es "<<factorial(numero)<<endl;
            cout <<" EL factorial recursivo de "<<numero <<" es "<<factorial(numero)<<endl;
}
#include    <iostream>
using namespace std;

void operaciones( float num1,float  num2,float  suma,float  resta,float  multiplicacion,float  division,float  resultado ){
    suma= num1+num2;
    resta= num1-num2;
    multiplicacion= num1*num2;
    division= num1*num2;
    resultado= num1*num2;
}

main(){

    float a,b,suma,resta,multiplicacion,division,residuo;
    int residuo;
    cout    << " Ingrese el primer numero: ";
    cin >> a;
    cout << " Ingrese el segundo numero: ";
    cin >>b;
    operaciones(a,b,suma,resta,multiplicacion,division,residuo);

}
#include    <iostream>
using namespace std;

main (){
int num=1;
int valor;
do
{
    cout    <<num<< " ";
    num++;
} while (num  <=10);

//Validar para ingresar valores entre el 1 y 10

do{
    cout << " Ingresa un valor: ";
    cin>>valor;
    (valor  <10 || valor >30)?cout<< " El valor no es valido ingresa el valor entre 10 y 30":cout << " Exito\n";
} while (valor  <10 || valor >30 );
cout    << " Ingresaste el valor de: "<<valor <<endl;

}
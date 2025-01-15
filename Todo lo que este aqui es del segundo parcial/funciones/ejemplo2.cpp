#include    <iostream>
using namespace std;
//cueroi de kas funciones  
int mayor (int a, int b ){
    if (a>b)
        return a;
    else
        return b;

}
float promedio (int a, int b){
    return (a+b)/2.0;
}
void saludo(int hora ){
    if (hora < 12)  
        cout <<" Buenos dias mi bb "<<endl;
    else if (hora < 19)
        cout << " Buenas tarde mi amor "<< endl;
    else
        cout << " Buenas noches mi preciosa "<< endl;
    int mayor(int a, int b);
}
float promedio(int a, int b);
void saludo(int hora );
main(){
    int N1,N2,hora;
    cout    << " INGRESA tres NUMEROS ";
    cin>> N1>>N2>>hora;
    cout <<" El mayor es "<< mayor(N1,N2)<<endl;
        cout <<" El  el promedio es  "<< promedio(N1,N2)<<endl;
        saludo(hora);

}
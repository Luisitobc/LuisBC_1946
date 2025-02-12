#include <iostream>
using namespace std;

main (){

    string cadena1={"Informatica"};
    string cadena4;
    const char *auxiliar;
    string cadena2(cadena1);//cadena2=cadena1
    string cadena3(10,'*');
    cadena1.push_back('Z');//Agrega un caracter al final de la cadena
    cout<<cadena1<<endl;
    cadena1.at(0)='I';//Metodo at accede a un indice de la cadena1[0]
    cout<<cadena1<<endl;
    //usando el metodo font y back para cambiar los caracteres iniciales y finales

    cadena1.front()='i';
    cadena1.back()='A';
    cout<<cadena1<<endl;
    auxiliar=cadena1.c_str();
    cout<<"auxiliar array char  "<<auxiliar<<endl;
    //metodo empty para conocer si una cadeba esta vacia o no 
    (cadena4.empty())? cout<<"cadena vacia\n"<<endl: cout<<"cadena no vacia\n"<<endl;
    //volumen maximo de la cadena
    cout<< " volumen maximo "<<cadena1.capacity()<<endl;
    //tamaño el bytes del objeto string que ocupa actualmente
    cout<<"capacidad"<<cadena2.capacity()<<endl;

}
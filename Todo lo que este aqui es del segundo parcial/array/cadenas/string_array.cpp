#include <iostream>
using namespace std;
string nombre;
void Cambiarstring (string &nombres){
    
    nombre=" Sin nombre ";


}
void cambiarArray(char apellido[]){

    /*apellido[0]= 'A';
        apellido[1]= '1';
            apellido[2]= 'v';
                apellido[3]= 'a';
                    apellido[4]= 'r';
                        apellido[5]= 'e';
                            apellido[6]= 'z';
                                apellido[7]= '\0'*/;//caracter nulo para indicar el final de la cadena 

    cout << " Ingres el nuevo apellido ";
    cin.getline (apellido,20 );

}


main (){

    string nombre,apodo; 
    string curso[5]={"C++","Java"," Python ","C#","PHP"};
    char apellido[20],apodo1[20];
    cout << " Ingresa su nombre= ";
    getline (cin,nombre);
    cout << " Su nombre es: "<<nombre <<endl;
    Cambiarstring(nombre);
    cout <<" Su nombre es luego de llamar a la funcion: "<<nombre<<endl;
    cout << " Ingrese su apellido= ";
    cin.getline(apellido, 20);
    cout <<" Su apellido inicial es: "<<apellido<<endl;
    cambiarArray(apellido);
    cout<< " Su apellido  luego de llamar a la funcion es: "<< apellido <<endl;





}
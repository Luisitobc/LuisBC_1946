#include <iostream>
using namespace std;
struct persona
{
  string nombre="Sin nombre";
  int edad=0;
  float estatura=0.0;

};
struct 
{
  string nombre;
  float nota;
}e1,e2;


void registro(){
    persona p5,p6;
    
}


main (){
    //typedef persona personas;
    //typedef int entero; 

            persona persona3,persona4;
            persona3.nombre=" Carlos Ortiz";
            persona3.edad= 25;
            persona3.estatura= 1.75;
            cout<<" Nombre= "<<persona3.nombre<<endl;
            cout<<" Edad= "<<persona3.edad<<endl;
            cout<<" Estatura= "<<persona3.estatura<<endl;
            cout<< " Datos persona2= "<<endl;
            cout<<" Nombre= ";
            getline(cin,persona4.nombre);
            cout<<" Edad= ";
            cin>>persona4.edad;
            cout<<" Estatura= ";
            cin>>persona4.estatura;
            cout <<" Datos ingresados "<<endl;
            cout<<" Nombre= "<<persona3.nombre<<"\t";
            cout<<" Edad= "<<persona3.edad<<"\t";
            cout<<" Estatura= "<<persona3.estatura<<"'n";
            cout<<" Nombre= "<<persona4.nombre<<"\t";
            cout<<" Edad= "<<persona4.edad<<"\t";
            cout<<" Estatura= "<<persona4.estatura<<endl;

            cout<<" Datos del estudiante No 1"<<endl;
            cout<<" Nombre= ";
            cin.ignore();
            getline(cin,e1.nombre);
            cout<<" Nota= ";
            cin>>e1.nota;

}

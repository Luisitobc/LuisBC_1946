#include    <iostream>
using namespace std;
float gravedad = 9.8;
void funcion1(int a ){
    cout    << " Gravedad de la funcion1= "<<gravedad<<endl;
    cout<<" Gravedad global= "<< ::gravedad << endl;
    cout << " A= "<< a<< endl;
    float gravedad= 10.8;
}
    void funcion2 (float x){
        cout << " Gravedad de la funcion2= "<< gravedad<<endl;
        cout<<" Gravedad global= "<< ::gravedad << endl;
        cout <<" X= "<<x<< endl;
    float gravedad= 11.8;
    }

    main (){
        int num1= 10;
        float num2= 30.34;
        {
            char letra ='A';
            cout    <<" Letra A "<<letra << endl;
        }
        cout<<" Gravedad: es el main  "<< gravedad <<endl;
        funcion1(num1);
        funcion2 (num2);
    }
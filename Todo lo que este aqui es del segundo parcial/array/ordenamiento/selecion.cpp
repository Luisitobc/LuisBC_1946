#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;


void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        //v[i] = rand() % 20+1;
        cin>>v[i];
    }
}
void vervector (int v[],int n ){

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"\t";
    }
    
}
int ordenaseleccion(int v[],int n){

    int contar=0,aux;
    bool cambio=true;
    for(int i=0;i<n-1 && cambio;i++){
        cambio=false;
        for (int j=i+1;j<n;j++){
            contar++;
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                cambio=true;
            }
        }
    }
    return contar;
}


main() {
    int ne,comparaciones;
    cout<<"Numeros de elementos ingresados : ";
    cin>>ne;
    int vector  [ne];
    llenaVector(vector,ne);
    cout <<" Vector original \n";
    vervector(vector,ne);
    comparaciones = ordenaseleccion(vector, ne);
    cout << "Vector ordenado \n";
    vervector(vector,ne);
       cout <<" \n El nro de comparaciones es igual a "<< endl;
}
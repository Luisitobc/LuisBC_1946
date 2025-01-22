#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void llenaVector (int v[],int n){
    srand(time(NULL));
    for(int i=0; i<n;i++){
        v[i]=rand()%20+1;
    }
}
void ordenarBurbunja(int v[], int n){

    int aux;
    for (int i=0; i<n;i++){
        for(int j=0;j<n-1;j++){
            if (v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}
void muestraVector(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v{i}<<" ";
    }

}

main(){

    int ne;
    cout <<" Numero de elementos ";
    cin>> ne ;
    int vec[ne];
    llenaVector (vec,ne);
    cout << " Vector original ";
    muestraVector(vec,ne);
    cout <<endl;
    ordenarBurbunja(vec,ne);
    cout<<" Vector ordenado ";
    muestraVector(vec,ne);
    cout<< " Vector "
}
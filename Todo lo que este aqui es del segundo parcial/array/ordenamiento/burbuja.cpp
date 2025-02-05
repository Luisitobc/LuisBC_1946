//https://github.com/Luisitobc/LuisBC_1946
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
}

void copiarVector(int origen[], int destino[], int n) {
    for(int i = 0; i < n; i++) {
        destino[i] = origen[i];
    }
}

int ordenarBurbujaV1(int v[], int n) {
    int aux,contador=0;
    for (int i=0;i<n;i++) {
        for (int j=0; j<n-1; j++) {
            contador++;
            if (v[j]>v[j+1]) {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    return contador;
}

int ordenarBurbujaV2(int v[], int n) {
    int mejora=1;
    int aux,contador=0;
    for (int i=0;i<n;i++) {
        for (int j=0; j<n-mejora; j++) {
            contador++;
            if (v[j]>v[j+1]) {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenarBurbujaV3(int v[], int n) {
    int mejora=1;
    bool cambio=true;
    int aux,contador=0;
    for (int i=0;i<n && cambio;i++) {
        cambio=false;
        for (int j=0; j<n-mejora; j++) {
            contador++;
            if (v[j]>v[j+1]) {
                aux =v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                cambio=true;
            }
        }
        mejora++;
    }
    return contador;
}

void muestraVector(int v[], int n) {
    for (int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
}

void escogerMejorBurbuja(int v[], int n) {
    int v1[n], v2[n], v3[n];
    

    copiarVector(v, v1, n);
    copiarVector(v, v2, n);
    copiarVector(v, v3, n);
    

    int comp1 = ordenarBurbujaV1(v1, n);
    int comp2 = ordenarBurbujaV2(v2, n);
    int comp3 = ordenarBurbujaV3(v3, n);
    
    cout << "\nComparaciones realizadas por cada version:";
    cout << "\nBurbuja V1: " << comp1;
    cout << "\nBurbuja V2: " << comp2;
    cout << "\nBurbuja V3: " << comp3;
    

    if(comp1 <= comp2 && comp1 <= comp3) {
        cout << "\nLa Burbuja V1 es la mas eficiente";
        copiarVector(v1, v, n);
    }
    else if(comp2 <= comp1 && comp2 <= comp3) {
        cout << "\nLa Burbuja V2 es la mas eficiente";
        copiarVector(v2, v, n);
    }
    else {
        cout << "\nLa Burbuja V3 es la mas eficiente";
        copiarVector(v3, v, n);
    }
}

/*main() {
    int ne;
    cout<<"Numeros de elementos: ";
    cin>>ne;
    int vec[ne];
    llenaVector(vec,ne);
    cout<<"Vector original: ";
    muestraVector(vec,ne);
    cout<<endl;
    
    escogerMejorBurbuja(vec,ne);
    
    cout<<"\nVector ordenado con la mejor version: ";
    muestraVector(vec,ne);
    cout<<endl;
    
}*/
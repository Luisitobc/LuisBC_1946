#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void llenardatos(int v[], int ne ){
    srand(time(NULL));
    for (int  i = 0; i < ne; i++)
    {
        v[i]=rand()%20+1;
    }
    
}

void verDatos(int v[], int ne ){
    cout<< "Los elementos del vector son " <<endl;
    for (int i = 0; i < ne; i++)
    {
        cout<<v[i]<<" ";
    }
    
}

float sumapromediocifras(int v[], int ne ){
    int suma=0;

    for (int i = 0; i < ne; i++)
    {
        suma+=v[i];
    }
    return (float)suma /ne; 
}

int contardebajopromedio(int v[], int ne,float promedio){

    int contar=0;
    for (int i = 0; i < ne; i++)
    {
        if (v[i]<promedio)
        {
            contar++;
        }
        return contar;
    }
    

}
void guardaelementosmenores(int v[],int ne,float promedio, int lista[]){
    int j=0;
    for (int  i = 0; i < ne; i++)
    {
        if (v[i]<promedio)
        {
            lista[j]=v[i];
            j++;
        }
        
    }
    
}

int main()
{
    int ne, menores;
    float promedionumeros;
    cout<<" Cuantos elementos tiene el vector ? ";
    cin>> ne;
    int vector[ne];
    llenardatos(vector,ne);
    verDatos(vector,ne);
    promedionumeros=sumapromediocifras(vector, ne);
    cout<<" \n El promedio es de "<<promedionumeros<<endl;
    menores=contardebajopromedio (vector,ne,promedionumeros);
        cout<<" La cantidad de elementos bajo del promedio son "<<menores<<endl;
            int listamenores [menores];
            guardaelementosmenores(vector,ne, promedionumeros,listamenores);
            verDatos(listamenores,menores);

}



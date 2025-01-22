#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n;
    
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;
    
    int matriz[20][20];
    int sumaPrincipal = 0, sumaSecundaria = 0;
    
    cout << "\nMatriz completa:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 11 + 10;  
            cout << matriz[i][j] << "\t";
            

            if(i == j) sumaPrincipal += matriz[i][j];
            if(i + j == n - 1) sumaSecundaria += matriz[i][j];
        }
        cout << endl;
    }
    

    cout << "\nSuma de diagonal principal: " << sumaPrincipal;
    cout << "\nSuma de diagonal secundaria: " << sumaSecundaria;
    cout << "\n\nDiagonal mayor: ";
    if(sumaPrincipal > sumaSecundaria){
        cout << "Diagonal Principal";}
    else if(sumaSecundaria > sumaPrincipal){
        cout << "Diagonal Secundaria";}
    else{
        cout << "Las diagonales son iguales";}
    

    cout << "\n\nMatriz mostrando solo las diagonales:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i + j == n - 1)
                cout << matriz[i][j] << "\t";
            else
                cout << "*\t";
        }
        cout << endl;
    }
    cout <<" Gracias por ingresar el tamaño de la matriz "<<endl;
}
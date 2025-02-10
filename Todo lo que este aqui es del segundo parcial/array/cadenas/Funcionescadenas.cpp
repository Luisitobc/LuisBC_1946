#include <iostream>
#include <string.h>
using namespace std;

int comparacadenas(char cad1[], char cad2[]) {
    return strcmp(cad1, cad2);  

}
void copiacadena(char cad1[], char cad2[]) {
    strcpy(cad2, cad1);
}
void agregacadena(char cad1[], char cad2[]) {
    strcat(cad1, cad2);
}
bool alfabeticoNumerico(char cad1[]){
    bool alfaNumerico = true;
    for (int i = 0; i < strlen(cad1); i++){
        if (isalnum(cad1[i]) ==false){
            alfaNumerico = false;
            break;
        }
    }
    return alfaNumerico;
}

bool alfabetico(char cad1[]){
    bool alfabetico= true;
    for (int i = 0; i < strlen(cad1); i++){
        if (isalnum(cad1[i]) ==false && isblank(cad1[i]) ==true){
            alfabetico = false;
            break;
        }
    }
    return alfabetico;
}
bool numerico(char cad1[]){
    bool numerico = true;
    for (int i = 0; i < strlen(cad1); i++){
        if (isdigit(cad1[i]) ==false){
            numerico = false;
            break;
        }
    }
    return numerico;
}
bool esespacio(char cad1[]){
    bool espacio = true;
    for (int i = 0; i < strlen(cad1); i++){
        if (isalpha(cad1[i]) ==false){
            espacio = false;
            break;
        }
    }
    return espacio;
}
bool esmayuscula(char cad1[]){
    bool mayuscula = true;
    for (int i = 0; i < strlen(cad1); i++){
        if (isupper(cad1[i]) ==false){
            mayuscula = false;
            break;
        }
    }
    return mayuscula;
}
bool esminuscula(char cad1[]){
    bool minuscula = true;
    for (int i = 0; i < strlen(cad1); i++){
        if (islower(cad1[i]) ==false){
            minuscula = false;
            break;
        }
    }
    return minuscula;
}

main (){
        char cad1[70], cad2[70];
        int comparacion;
        cout << "Ingrese la primera cadena: ";
        cin.getline(cad1, 70);
        cout << "Ingrese la segunda cadena: ";
        cin.getline(cad2, 70);
        comparacion = comparacadenas(cad1, cad2);
        cout << " comparacion " << comparacion << endl;
        (comparacion == 0) ? cout << "Las cadenas son iguales" : cout << "Las cadenas son diferentes \n";
        //copiacadena(cad1, cad2);
        //cout << "La cadena copiada es:  C1 =" << endl;
        //agregacadena(cad1, cad2);
        //cout << "La cadena concatenada es: C1 = S" << endl;
        (alfabeticoNumerico(cad1)) ? cout << "\n La cadena " <<cad1 << " es alfanumerica" : cout << "\n La cadena " <<cad1 << " no es alfanumerica";
        (alfabetico(cad1)) ? cout << "\n La cadena " <<cad1 << " es alfabetica" : cout << "\n La cadena " <<cad1 << " no es alfabetica";
        (numerico(cad1)) ? cout << "\n La cadena " <<cad1 << " es numerica" : cout << "\n La cadena " <<cad1 << " no es numerica";
        (esespacio(cad1)) ? cout << "\n La cadena " <<cad1 << " tiene espacios" : cout << "\n La cadena " <<cad1 << " no tiene espacios";
        (esmayuscula(cad1)) ? cout << "\n La cadena " <<cad1 << " es mayuscula" : cout << "\n La cadena " <<cad1 << " no es mayuscula";
        (esminuscula(cad1)) ? cout << "\n La cadena " <<cad1 << " es minuscula" : cout << "\n La cadena " <<cad1 << " no es minuscula";
    
    
    }
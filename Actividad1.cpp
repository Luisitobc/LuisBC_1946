#include <iostream>
#include <string>
using namespace std;

struct Automovil {
    int codigoA;
    std::string marca;
    std::string modelo;
    unsigned int anyo; 
    std::string placa;


    Automovil(int codigo, std::string marca_, std::string modelo_, unsigned int anyo_, std::string placa_)
        : codigoA(codigo), marca(marca_), modelo(modelo_), anyo(anyo_), placa(placa_) {
        if (anyo < 1900) {
            std::cerr << "Error: El anio debe ser >= 1900." << std::endl;
        }
    }
};

struct ClienteVideoclub {
    std::string nombre;
    std::string direccion;
    std::string telefono;
    double adeuda; 
    int codigocl;


    ClienteVideoclub(std::string nombre_, std::string direccion_, std::string telefono_, double adeuda_, int codigocl_)
        : nombre(nombre_), direccion(direccion_), telefono(telefono_), adeuda(adeuda_), codigocl(codigocl_) {
        if (adeuda_ < 0) {
            std::cerr << "Error: La deuda no puede ser negativa." << std::endl;
        }
    }
};


main() {
    Automovil auto1(1001, "Ford", "F150", 2025, "AJP5896");
    ClienteVideoclub cliente1("Carlitos Menendez", " Calle principal 564", "665-5896", 95.20, 2010);

    std::cout << "Automovil: " << auto1.marca << " " << auto1.modelo << std::endl;
    std::cout << "Cliente: " << cliente1.nombre << ", Deuda: $" << cliente1.adeuda << std::endl;

    return 0;
}
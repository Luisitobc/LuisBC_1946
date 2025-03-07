#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Producto {
    int id;
    string nombre;
    int cantidad;
};

void mostrarTabla(const vector<Producto>& productos, const string& titulo) {
    cout << "\n--- " << titulo << " ---\n";
    cout << left << setw(10) << "ID" << setw(20) << "Producto" << setw(10) << "Cantidad" << endl;
    for (const auto& producto : productos) {
        cout << left << setw(10) << producto.id << setw(20) << producto.nombre << setw(10) << producto.cantidad << endl;
    }
}

void procesarVentas(vector<Producto>& ingresos, vector<Producto>& salidas) {
    vector<Producto> stock;

    
    for (const auto& ingreso : ingresos) {
        auto it = find_if(stock.begin(), stock.end(), [&](const Producto& p) { return p.nombre == ingreso.nombre; });
        if (it != stock.end()) {
            it->cantidad += ingreso.cantidad;
        } else {
            stock.push_back(ingreso);
        }
    }

    
    for (const auto& salida : salidas) {
        auto it = find_if(stock.begin(), stock.end(), [&](const Producto& p) { return p.nombre == salida.nombre; });
        if (it != stock.end()) {
            it->cantidad -= salida.cantidad;
        } else {
            stock.push_back({salida.id, salida.nombre, -salida.cantidad});
        }
    }

    mostrarTabla(stock, "Stock");

    
    auto max_ingreso = max_element(ingresos.begin(), ingresos.end(), [](const Producto& a, const Producto& b) { return a.cantidad < b.cantidad; });
    auto max_salida = max_element(salidas.begin(), salidas.end(), [](const Producto& a, const Producto& b) { return a.cantidad < b.cantidad; });

    cout << "\nProducto con mayor cantidad de ingresos: " << max_ingreso->nombre << " (" << max_ingreso->cantidad << ")\n";
    cout << "Producto con mayor cantidad de salidas: " << max_salida->nombre << " (" << max_salida->cantidad << ")\n";
}

main() {
    vector<Producto> ingresos = {
        {1, "Manzana", 5}, {2, "Banana", 15}, {3, "Naranja", 8}, {4, "Uva", 3}, {5, "Manzana", 2},
        {6, "Pera", 4}, {7, "Banana", 20}, {8, "Fresa", 6}, {9, "Naranja", 10}, {10, "Uva", 7},
        {11, "Manzana", 3}, {12, "Pera", 2}, {13, "Banana", 12}, {14, "Fresa", 5}, {15, "Naranja", 6},
        {16, "Uva", 4}, {17, "Manzana", 1}, {18, "Pera", 3}, {19, "Banana", 8}, {20, "Fresa", 7}
    };

    vector<Producto> salidas = {
        {1, "Manzana", 2}, {2, "Banana", 5}, {3, "Naranja", 3}, {4, "Uva", 1}, {5, "Manzana", 1},
        {6, "Pera", 2}, {7, "Banana", 10}, {8, "Fresa", 3}, {9, "Naranja", 5}, {10, "Uva", 2},
        {11, "Manzana", 2}, {12, "Pera", 1}, {13, "Banana", 6}, {14, "Fresa", 2}, {15, "Naranja", 3},
        {16, "Uva", 1}, {17, "Manzana", 1}, {18, "Pera", 1}, {19, "Banana", 4}, {20, "Fresa", 3}
    };

    mostrarTabla(ingresos, "Ingresos");
    mostrarTabla(salidas, "Salidas");

    procesarVentas(ingresos, salidas);

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

// Definición de las estructuras de datos

struct Fecha {
    int dia;
    int mes;
    int anio;

    // Función para comparar fechas
    int diferenciaFechas(const Fecha& fecha) const {
        int dias = 0;
        if (anio != fecha.anio) {
            dias = (anio - fecha.anio) * 365;
        } else if (mes != fecha.mes) {
            dias = (mes - fecha.mes) * 30; // Aproximación de días por mes
        } else {
            dias = dia - fecha.dia;
        }
        return dias;
    }
};

class Tarjeta {
public:
    string numeroTarjeta;
    string titular;
    string codigoSeguridad;
    string tipoTarjeta; // "Principal" o "Extendida"
    int mesCaducidad;
    int anioCaducidad;
};

class Prestamo {
public:
    float monto;
    Fecha fechaAprobacion;
    Fecha fechaConsignacion;
    vector<Fecha> fechasPago; // Fechas de pago mensual
};

class Cuenta {
public:
    string numeroCuenta;
    string tipoCuenta; // "Ahorros" o "Corriente"
    string descripcion;
    Fecha ultimoMovimiento;
    bool activa;
    vector<Tarjeta> tarjetas;
    vector<Prestamo> prestamos;

    // Función para verificar si la cuenta está inactiva
    bool estaInactiva() {
        Fecha fechaActual = obtenerFechaActual();
        return ultimoMovimiento.diferenciaFechas(fechaActual) > 180;
    }
};

class Cliente {
public:
    string codigo;
    string cedula;
    string nombres;
    string apellidos;
    string direccion;
    string email;
    string telefono;
    bool activo;
    vector<Cuenta> cuentas;

    // Función para verificar si el cliente está activo
    bool estaActivo() {
        bool tieneCuentaActiva = false;
        for (const auto& cuenta : cuentas) {
            if (cuenta.activa) {
                tieneCuentaActiva = true;
                break;
            }
        }
        return tieneCuentaActiva;
    }
};

// Función para obtener la fecha actual
Fecha obtenerFechaActual() {
    time_t now = time(0);
    tm* localtm = localtime(&now);

    Fecha fechaActual;
    fechaActual.dia = localtm->tm_mday;
    fechaActual.mes = localtm->tm_mon + 1; // Los meses en C++ son 0-indexed
    fechaActual.anio = localtm->tm_year + 1900;
    
    return fechaActual;
}

// Función para desactivar cuentas inactivas
void desactivarCuentasInactivas(vector<Cliente>& clientes) {
    for (auto& cliente : clientes) {
        for (auto& cuenta : cliente.cuentas) {
            if (cuenta.estaInactiva()) {
                cuenta.activa = false;
            }
        }
    }
}

// Función para desactivar clientes inactivos
void desactivarClientesInactivos(vector<Cliente>& clientes) {
    for (auto& cliente : clientes) {
        if (!cliente.estaActivo()) {
            cliente.activo = false;
        }
    }
}

// Función para registrar un cliente
void registrarCliente(vector<Cliente>& clientes) {
    Cliente nuevoCliente;
    cout << "Ingrese código de cliente: ";
    cin >> nuevoCliente.codigo;
    cout << "Ingrese cédula o pasaporte: ";
    cin >> nuevoCliente.cedula;
    cout << "Ingrese nombres: ";
    cin >> nuevoCliente.nombres;
    cout << "Ingrese apellidos: ";
    cin >> nuevoCliente.apellidos;
    cout << "Ingrese dirección: ";
    cin >> nuevoCliente.direccion;
    cout << "Ingrese email: ";
    cin >> nuevoCliente.email;
    cout << "Ingrese teléfono: ";
    cin >> nuevoCliente.telefono;
    nuevoCliente.activo = true;

    clientes.push_back(nuevoCliente);
}

// Función para registrar una cuenta
void registrarCuenta(Cliente& cliente) {
    Cuenta nuevaCuenta;
    cout << "Ingrese número de cuenta: ";
    cin >> nuevaCuenta.numeroCuenta;
    cout << "Ingrese tipo de cuenta (Ahorros o Corriente): ";
    cin >> nuevaCuenta.tipoCuenta;
    cout << "Ingrese descripción de la cuenta: ";
    cin >> nuevaCuenta.descripcion;

    nuevaCuenta.ultimoMovimiento = obtenerFechaActual();
    nuevaCuenta.activa = true;

    cliente.cuentas.push_back(nuevaCuenta);
}

// Función para registrar una tarjeta
void registrarTarjeta(Cuenta& cuenta) {
    Tarjeta nuevaTarjeta;
    cout << "Ingrese número de tarjeta: ";
    cin >> nuevaTarjeta.numeroTarjeta;
    cout << "Ingrese nombre del titular: ";
    cin >> nuevaTarjeta.titular;
    cout << "Ingrese código de seguridad: ";
    cin >> nuevaTarjeta.codigoSeguridad;
    cout << "Ingrese tipo de tarjeta (Principal o Extendida): ";
    cin >> nuevaTarjeta.tipoTarjeta;

    if (nuevaTarjeta.tipoTarjeta == "Extendida") {
        cout << "Ingrese mes de caducidad: ";
        cin >> nuevaTarjeta.mesCaducidad;
        cout << "Ingrese año de caducidad: ";
        cin >> nuevaTarjeta.anioCaducidad;
    }

    cuenta.tarjetas.push_back(nuevaTarjeta);
}

// Función para registrar un préstamo
void registrarPrestamo(Cuenta& cuenta) {
    Prestamo nuevoPrestamo;
    cout << "Ingrese monto del préstamo: ";
    cin >> nuevoPrestamo.monto;
    cout << "Ingrese fecha de aprobación (día, mes, año): ";
    cin >> nuevoPrestamo.fechaAprobacion.dia >> nuevoPrestamo.fechaAprobacion.mes >> nuevoPrestamo.fechaAprobacion.anio;
    cout << "Ingrese fecha de consignación (día, mes, año): ";
    cin >> nuevoPrestamo.fechaConsignacion.dia >> nuevoPrestamo.fechaConsignacion.mes >> nuevoPrestamo.fechaConsignacion.anio;
    cout << "Ingrese fechas de pago (día, mes, año, separar con espacio): ";
    Fecha fechaPago;
    while (cin >> fechaPago.dia >> fechaPago.mes >> fechaPago.anio) {
        nuevoPrestamo.fechasPago.push_back(fechaPago);
    }

    cuenta.prestamos.push_back(nuevoPrestamo);
}

int main() {
    vector<Cliente> clientes;

    // Ejemplo de uso
    registrarCliente(clientes);
    registrarCuenta(clientes[0]);
    registrarTarjeta(clientes[0].cuentas[0]);
    registrarPrestamo(clientes[0].cuentas[0]);

    // Verificar desactivación de cuentas inactivas
    desactivarCuentasInactivas(clientes);
    desactivarClientesInactivos(clientes);

    // Mostrar información de clientes y cuentas desactivadas
    for (const auto& cliente : clientes) {
        if (!cliente.activo) {
            cout << "Cliente " << cliente.nombres << " " << cliente.apellidos << " está desactivado." << endl;
        }
        for (const auto& cuenta : cliente.cuentas) {
            if (!cuenta.activa) {
                cout << "Cuenta " << cuenta.numeroCuenta << " está desactivada." << endl;
            }
        }
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Clase Cliente
class Cliente {
private:
    string nombre;
    string direccion;
    string telefono;

public:
    // Constructor
    Cliente(string nom, string dir, string tel) : nombre(nom), direccion(dir), telefono(tel) {}

    // Mtodos para obtener los atributos
    string getNombre() const { return nombre; }
    string getDireccion() const { return direccion; }
    string getTelefono() const { return telefono; }
};

// Clase Auto
class Auto {
private:
    string marca;
    string modelo;
    string color;
    string placas;

public:
    // Constructor
    Auto(string mar, string mod, string col, string pla) : marca(mar), modelo(mod), color(col), placas(pla) {}

    // Mtodos para obtener los atributos
    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    string getColor() const { return color; }
    string getPlacas() const { return placas; }
};

// Clase OrdenTrabajo
class OrdenTrabajo {
private:
    int idOrden;
    Cliente cliente;
    Auto autoReparado;

public:
    // Constructor
    OrdenTrabajo(int id, Cliente cli, Auto aut) : idOrden(id), cliente(cli), autoReparado(aut) {}

    // Mtodos para obtener los atributos
    int getIdOrden() const { return idOrden; }
    Cliente getCliente() const { return cliente; }
    Auto getAuto() const { return autoReparado; }

    // Mtodo para mostrar la orden de trabajo
    void mostrarOrden() const {
        cout << "Orden de Trabajo ID: " << idOrden << endl;
        cout << "Cliente: " << cliente.getNombre() << endl;
        cout << "Direccion: " << cliente.getDireccion() << endl;
        cout << "Telefono: " << cliente.getTelefono() << endl;
        cout << "Auto - Marca: " << autoReparado.getMarca() << endl;
        cout << "Modelo: " << autoReparado.getModelo() << endl;
        cout << "Color: " << autoReparado.getColor() << endl;
        cout << "Placas: " << autoReparado.getPlacas() << endl;
    }
};

// Ejemplo de uso
int main() {
    Cliente cliente("Juan Perez", "Av. Siempre Viva 123", "987654321");
    Auto autoReparado("Toyota", "Corolla", "Rojo", "ABC-123");
    OrdenTrabajo orden(1, cliente, autoReparado);

    orden.mostrarOrden();

    return 0;
}

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

const int cantidadLibros = 3;
const int cantidadPrestamos = 50;

int tiempo;

struct Book {
    int id;
    string nombre;
};

struct Prestamo {
    string nombre_libro;
    string fecha_entrega;
    string fecha_devolucion;
};

string obtenerFechaHoraActual() {
    time_t tiempo_actual = time(NULL);
    tm* ahora_local = localtime(&tiempo_actual);

    char arreglo_hora[100];
    strftime(arreglo_hora, sizeof(arreglo_hora), "%d/%m/%Y %H:%M:%S", ahora_local);
    
    return string(arreglo_hora);
}

string obtenerFechaDevolucion(int dias_sumar) {
    time_t tiempo_actual = time(NULL);
    tm* ahora_local = localtime(&tiempo_actual);

    ahora_local->tm_mday += dias_sumar;
    
    mktime(ahora_local);

    char devolucion[100];
    strftime(devolucion, sizeof(devolucion), "%d/%m/%Y %H:%M:%S", ahora_local);
    
    return string(devolucion);
}

void registrarPrestamo(Prestamo prestamos[], int& indice, const Book& libro, int dias_prestamo) {
    if (indice < cantidadPrestamos) {
        Prestamo prestamo;
        prestamo.nombre_libro = libro.nombre;
        prestamo.fecha_entrega = obtenerFechaHoraActual();
        prestamo.fecha_devolucion = obtenerFechaDevolucion(dias_prestamo);
        prestamos[indice] = prestamo;
        indice++;
    } else {
        cout << "El historial de pr�stamos est� lleno." << endl;
    }
}

void prestamoLibro(Book libro[], int cantidad, int buscarID, Prestamo prestamos[], int& indicePrestamos) {
    bool confirmacion = false;
    Prestamo pres;

    cout << "\n";
    for (int i = 0; i < cantidad; ++i) {
        if (libro[i].id == buscarID) {
            cout << "Libro: " << libro[i].nombre << endl;
            cout << "Digite los d�as de adquisici�n: ";
            cin >> tiempo;
            if (tiempo > 5) {
                cout << "\nLa cantidad m�xima de d�as es 5." << endl;
                return;
            }

            string fechaHora = obtenerFechaHoraActual();
            string fechaDevolucion = obtenerFechaDevolucion(tiempo);
            cout << "El libro se entreg� en la fecha: " << endl << fechaHora << endl;
            cout << "\n";
            cout << "Se espera que sea devuelto antes de: " << endl << fechaDevolucion << endl;
            cout << "\n";

            registrarPrestamo(prestamos, indicePrestamos, libro[i], tiempo);

            confirmacion = true;
            break;
        }
    }

    if (!confirmacion) {
        cout << "\nEl ID ingresado no corresponde a ning�n libro." << endl;
    }
}

void mostrarHistorial(const Prestamo prestamos[], int cantidad) {
    cout << "\nHistorial de Pr�stamos:\n";
    for (int i = 0; i < cantidad; ++i) {
        cout << "Libro: " << prestamos[i].nombre_libro << endl;
        cout << "Fecha de Pr�stamo: " << prestamos[i].fecha_entrega << endl;
        cout << "Fecha de Devoluci�n: " << prestamos[i].fecha_devolucion << endl;
        cout << "--------------------------\n";
    }
}

int main() {
    int buscarID, opcion, indicePrestamos = 0;

    Book libro[cantidadLibros] = {
        {101, "Matematica 1"},
        {102, "Comunicaciones"},
        {103, "CTA"}
    };

    Prestamo prestamos[cantidadPrestamos];

    do {
        cout << endl;
        cout << "1. Pr�stamo de alg�n libro." << endl;
        cout << "2. Historial de pr�stamos." << endl;
        cout << "3. SALIR." << endl;
        cout << "Digite la opci�n: ";
        cin >> opcion;
        cout << "\n";

        switch (opcion) {
            case 1: {
                cout << "Digite el ID del libro: ";
                cin >> buscarID;
                prestamoLibro(libro, cantidadLibros, buscarID, prestamos, indicePrestamos);
                break;
            }
            case 2: {
                mostrarHistorial(prestamos, indicePrestamos);
                break;
            }
        }
    } while (opcion != 3);

    return 0;
}


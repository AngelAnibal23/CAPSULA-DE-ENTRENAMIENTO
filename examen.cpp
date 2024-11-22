#include <iostream>
#include <string>
using namespace std;

// Clase Fecha
class Fecha {
private:
    int dia, mes, anio;

public:
    // Constructor
    Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

    // Mtodos para obtener los atributos
    int getDia() const { return dia; }
    int getMes() const { return mes; }
    int getAnio() const { return anio; }

    // Método para mostrar la fecha
    string mostrarFecha() const {
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
    }
};

// Clase Hora
class Hora {
private:
    int hora, minuto;

public:
    // Constructor
    Hora(int h, int m) : hora(h), minuto(m) {}

    // Mtodos para obtener los atributos
    int getHora() const { return hora; }
    int getMinuto() const { return minuto; }

    // Mtodo para mostrar la hora
    string mostrarHora() const {
        return (hora < 10 ? "0" : "") + to_string(hora) + ":" +
               (minuto < 10 ? "0" : "") + to_string(minuto);
    }
};

// Clase Examen
class Examen {
private:
    string nombreAsignatura;
    int ciclo;
    Fecha fechaExamen; // Composicin: la clase Examen "tiene una" Fecha
    Hora horaExamen;   // Composicin: la clase Examen "tiene una" Hora

public:
    // Constructor
    Examen(string nombre, int ciclo, Fecha fecha, Hora hora)
        : nombreAsignatura(nombre), ciclo(ciclo), fechaExamen(fecha), horaExamen(hora) {}

    // Mtodos para obtener los atributos
    string getNombreAsignatura() const { return nombreAsignatura; }
    int getCiclo() const { return ciclo; }
    Fecha getFecha() const { return fechaExamen; }
    Hora getHora() const { return horaExamen; }

    // Mtodo para mostrar los detalles del examen
    void mostrarExamen() const {
        cout << "Asignatura: " << nombreAsignatura << endl;
        cout << "Ciclo: " << ciclo << endl;
        cout << "Fecha: " << fechaExamen.mostrarFecha() << endl;
        cout << "Hora: " << horaExamen.mostrarHora() << endl;
    }
};

// Ejemplo de uso
int main() {
    Fecha fechaExamen(15, 12, 2024);
    Hora horaExamen(10, 30);
    Examen examen("Matemáticas", 3, fechaExamen, horaExamen);

    examen.mostrarExamen();

    return 0;
}

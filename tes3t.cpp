#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

// Clase Estudiante
class Estudiante {
public:
    string id;
    string nombre;

    Estudiante(const string& id, const string& nombre) : id(id), nombre(nombre) {}
};

// Clase Curso
class Curso {
public:
    string id;
    string nombre;
    int ciclo;
    vector<Estudiante> estudiantes;

    Curso(const string& id, const string& nombre, int ciclo) 
        : id(id), nombre(nombre), ciclo(ciclo) {}

    // Agregar un estudiante al curso
    void agregarEstudiante(const Estudiante& estudiante) {
        estudiantes.push_back(estudiante);
    }

    // Mostrar la lista de estudiantes
    void mostrarEstudiantes() const {
        if (estudiantes.empty()) {
            cout << "No hay estudiantes registrados en este curso." << endl;
        } else {
            cout << "Lista de estudiantes disponibles:" << endl;
            for (const auto& estudiante : estudiantes) {
                cout << estudiante.id << " " << estudiante.nombre << endl;
            }
        }
    }
};

// Clase Docente
class Docente {
public:
    string id;
    string nombre;

    Docente(const string& id, const string& nombre) : id(id), nombre(nombre) {}
};

// Clase Gestión de Docentes y Cursos
class Gestion {
private:
    map<string, vector<Curso>> docenteCursos;

public:
    // Asignar un curso a un docente (máximo 4 cursos)
    bool asignarCurso(const Docente& docente, const Curso& curso) {
        auto& cursos = docenteCursos[docente.id];
        if (cursos.size() >= 4) {
            cout << "El docente " << docente.nombre << " ya tiene el máximo de 4 cursos asignados." << endl;
            return false;
        }
        cursos.push_back(curso);
        return true;
    }

    // Mostrar cursos de un docente
    void mostrarCursos(const string& idDocente) const {
        auto it = docenteCursos.find(idDocente);
        if (it != docenteCursos.end()) {
            cout << "Cursos que enseña el docente:" << endl;
            for (const auto& curso : it->second) {
                cout << "ID: " << curso.id << " - Nombre: " << curso.nombre << " - Ciclo: " << curso.ciclo << endl;
            }
        } else {
            cout << "El docente no tiene cursos asignados." << endl;
        }
    }

    // Mostrar estudiantes de un curso específico
    void mostrarEstudiantes(const string& idDocente, const string& idCurso) const {
        auto it = docenteCursos.find(idDocente);
        if (it != docenteCursos.end()) {
            for (const auto& curso : it->second) {
                if (curso.id == idCurso) {
                    curso.mostrarEstudiantes();
                    return;
                }
            }
            cout << "El curso no está asignado al docente." << endl;
        } else {
            cout << "El docente no tiene cursos asignados." << endl;
        }
    }

    // Registrar notas para un estudiante en un curso
    void registrarNotas(const string& idDocente, const string& idCurso, const string& idEstudiante) {
        auto it = docenteCursos.find(idDocente);
        if (it != docenteCursos.end()) {
            for (auto& curso : it->second) {
                if (curso.id == idCurso) {
                    for (const auto& estudiante : curso.estudiantes) {
                        if (estudiante.id == idEstudiante) {
                            int nota1, nota2, nota3;
                            cout << "Ingrese la nota 1: ";
                            cin >> nota1;
                            cout << "Ingrese la nota 2: ";
                            cin >> nota2;
                            cout << "Ingrese la nota 3: ";
                            cin >> nota3;
                            cout << "Notas ingresadas correctamente." << endl;
                            return;
                        }
                    }
                    cout << "El estudiante no está registrado en este curso." << endl;
                    return;
                }
            }
            cout << "El curso no está asignado al docente." << endl;
        } else {
            cout << "El docente no tiene cursos asignados." << endl;
        }
    }
};

// Función principal
int main() {
    // Crear docentes
    Docente docente1("2024-385921", "María");

    // Crear cursos
    Curso curso1("I101", "Introducción a la Programación", 1);
    Curso curso2("I102", "Algoritmos y Estructuras de Datos", 1);

    // Crear estudiantes
    Estudiante estudiante1("2024-105237", "Jose Luis Martinez Robles");
    Estudiante estudiante2("2024-124836", "Ana Sofia Gonzalez Rivera");

    // Asignar estudiantes a los cursos
    curso1.agregarEstudiante(estudiante1);
    curso1.agregarEstudiante(estudiante2);
    curso2.agregarEstudiante(estudiante1);

    // Gestionar docentes y cursos
    Gestion gestion;
    gestion.asignarCurso(docente1, curso1);
    gestion.asignarCurso(docente1, curso2);

    // Menú de interacción
    int opcion;
    do {
        cout << "Seleccione un usuario:\n1. Docente\n0. Salir\n";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese su ID de docente: ";
            string idDocente;
            cin >> idDocente;

            if (idDocente == docente1.id) {
                cout << "Bienvenido, " << docente1.nombre << endl;
                int opcionDocente;
                do {
                    cout << "1. Ingresar notas\n2. Ver notas\n0. Volver\n";
                    cin >> opcionDocente;

                    if (opcionDocente == 1) {
                        gestion.mostrarCursos(docente1.id);
                        cout << "Ingrese el ID del curso: ";
                        string idCurso;
                        cin >> idCurso;

                        gestion.mostrarEstudiantes(docente1.id, idCurso);
                        cout << "Ingrese el ID del estudiante: ";
                        string idEstudiante;
                        cin >> idEstudiante;

                        gestion.registrarNotas(docente1.id, idCurso, idEstudiante);
                    }
                } while (opcionDocente != 0);
            } else {
                cout << "Docente no encontrado." << endl;
            }
        }
    } while (opcion != 0);

    return 0;
}
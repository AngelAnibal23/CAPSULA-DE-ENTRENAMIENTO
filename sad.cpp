#include <bits/stdc++.h>
using namespace std;

class Usuario {
protected:
    string nombre;
    string codigo;
    string dni;
public:
    Usuario(string nombre, string codigo, string dni) : nombre(nombre), codigo(codigo), dni(dni) {}
    string getNombre() const { return nombre; }
    string getCodigo() const { return codigo; }
    string getDni() const { return dni; } // Faltaba esta función
    bool verificarCredenciales(string codigo, string dni) const {
        return this->codigo == codigo && this->dni == dni;
    }
};

class Nota {
    double producto, desempeno, conocimiento;
public:
    Nota(double producto, double desempeno, double conocimiento)
        : producto(producto), desempeno(desempeno), conocimiento(conocimiento) {}
    double calcularPromedio() const {
        return 0.3 * producto + 0.3 * desempeno + 0.4 * conocimiento;
    }
};

class Estudiante : public Usuario {
    map<string, Nota> notasPorCurso; // Curso -> Nota
public:
    Estudiante(string nombre, string codigo, string dni)
        : Usuario(nombre, codigo, dni) {}
    void agregarNota(string curso, Nota nota) {
        notasPorCurso[curso] = nota;
    }
    Nota getNota(string curso) const {
        if (notasPorCurso.count(curso))
            return notasPorCurso.at(curso);
        throw runtime_error("Nota no encontrada para el curso.");
    }
    void mostrarNotas() const {
        for (const auto& [curso, nota] : notasPorCurso) {
            cout << "Curso: " << curso << " | Promedio: " << nota.calcularPromedio() << endl;
        }
    }
};

class Docente : public Usuario {
    vector<string> cursos; // Cursos asignados
public:
    Docente(string nombre, string codigo, string dni)
        : Usuario(nombre, codigo, dni) {}
    void agregarCurso(string curso) {
        cursos.push_back(curso);
    }
    void ingresarNotas(map<string, Estudiante>& estudiantes, string curso) {
        for (auto& [codigo, estudiante] : estudiantes) {
            double producto, desempeno, conocimiento;
            cout << "Ingresar notas para estudiante " << estudiante.getNombre()
                 << " en curso " << curso << ": ";
            cin >> producto >> desempeno >> conocimiento;
            estudiante.agregarNota(curso, Nota(producto, desempeno, conocimiento));
        }
    }
    vector<string> getCursos() const { return cursos; } // Faltaba esta función
};

class Curso {
    string nombre;
    string codigo;
    vector<Estudiante*> estudiantes; // Lista de punteros a estudiantes
public:
    Curso(string nombre, string codigo) : nombre(nombre), codigo(codigo) {}
    void agregarEstudiante(Estudiante* estudiante) {
        estudiantes.push_back(estudiante);
    }
    vector<Estudiante*> getEstudiantes() const {
        return estudiantes;
    }
};

class Sistema {
    vector<Estudiante> estudiantes;
    vector<Docente> docentes;
    vector<Curso> cursos;
public:
    void cargarDatos(const string& archivoEstudiantes, const string& archivoDocentes, const string& archivoCursos) {
        ifstream fileEstudiantes(archivoEstudiantes);
        if (fileEstudiantes.is_open()) {
            string nombre, codigo, dni;
            while (fileEstudiantes >> nombre >> codigo >> dni) {
                estudiantes.emplace_back(nombre, codigo, dni);
            }
            fileEstudiantes.close();
        }

        ifstream fileDocentes(archivoDocentes);
        if (fileDocentes.is_open()) {
            string nombre, codigo, dni, curso;
            while (fileDocentes >> nombre >> codigo >> dni) {
                Docente docente(nombre, codigo, dni);
                for (int i = 0; i < 3; ++i) { // Cada docente dicta 3 cursos
                    fileDocentes >> curso;
                    docente.agregarCurso(curso);
                }
                docentes.push_back(docente);
            }
            fileDocentes.close();
        }

        ifstream fileCursos(archivoCursos);
        if (fileCursos.is_open()) {
            string nombre, codigo;
            while (fileCursos >> nombre >> codigo) {
                cursos.emplace_back(nombre, codigo);
            }
            fileCursos.close();
        }
    }

    void guardarDatos(const string& archivoEstudiantes, const string& archivoDocentes, const string& archivoCursos) {
        ofstream fileEstudiantes(archivoEstudiantes);
        for (const auto& estudiante : estudiantes) {
            fileEstudiantes << estudiante.getNombre() << " "
                            << estudiante.getCodigo() << " "
                            << estudiante.getDni() << endl;
        }
        fileEstudiantes.close();

        ofstream fileDocentes(archivoDocentes);
        for (const auto& docente : docentes) {
            fileDocentes << docente.getNombre() << " "
                         << docente.getCodigo() << " "
                         << docente.getDni();
            for (const auto& curso : docente.getCursos()) {
                fileDocentes << " " << curso;
            }
            fileDocentes << endl;
        }
        fileDocentes.close();
    }

    void login() {
        string codigo, dni;
        cout << "Ingrese código: ";
        cin >> codigo;
        cout << "Ingrese DNI: ";
        cin >> dni;

        for (auto& estudiante : estudiantes) {
            if (estudiante.verificarCredenciales(codigo, dni)) {
                cout << "Bienvenido, estudiante " << estudiante.getNombre() << endl;
                estudiante.mostrarNotas();
                return;
            }
        }

        for (auto& docente : docentes) {
            if (docente.verificarCredenciales(codigo, dni)) {
                cout << "Bienvenido, docente " << docente.getNombre() << endl;
                return;
            }
        }

        cout << "Credenciales incorrectas." << endl;
    }
};

int main() {
    Sistema sistema;

    // Predefinir rutas de archivos
    string archivoEstudiantes = "estudiantes.txt";
    string archivoDocentes = "docentes.txt";
    string archivoCursos = "cursos.txt";

    // Cargar datos desde los archivos
    sistema.cargarDatos(archivoEstudiantes, archivoDocentes, archivoCursos);

    int opcion;
    do {
        cout << "\n--- SISTEMA DE GESTION ACADEMICA ---\n";
        cout << "1. Iniciar Sesion\n";
        cout << "2. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                sistema.login();
                break;
            case 2:
                cout << "Saliendo del sistema...\n";
                sistema.guardarDatos(archivoEstudiantes, archivoDocentes, archivoCursos);
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 2);

    return 0;
}
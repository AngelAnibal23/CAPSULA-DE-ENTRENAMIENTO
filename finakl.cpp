#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <chrono>  
using namespace std;

void mostrarArreglo(int a[], int n);
void insercionDirecta(int a[], int n);
void shellSort(int array[], int n);
void generarArreglo(int[], int);
void copiarArreglo(int[], int[], int);

int main() {
    int n = 20000;
    int opcion;
    bool insercionOrdenado = false, shellSortOrdenado = false;

    srand(time(NULL));

    int a[n], a2[n], copia[n];

    // Generar el arreglo y hacer una copia original
    generarArreglo(a, n);
    copiarArreglo(a, copia, n); // Copia del arreglo original

    // Variables para medir el tiempo
    auto start = chrono::high_resolution_clock::now();
    auto end = chrono::high_resolution_clock::now();

    do {
        cout << "\n1. Insercion Directa. " << endl;
        cout << "2. Ordenacion por shellsort" << endl;
        cout << "3. Regenerar arreglo" << endl;
        cout << "4. Salir. " << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                if (!insercionOrdenado) {
                    copiarArreglo(copia, a, n); // Restaurar la copia original
                    start = chrono::high_resolution_clock::now(); // Iniciar el tiempo
                    insercionDirecta(a, n);
                    end = chrono::high_resolution_clock::now();
                    
                    // Calcular la duración
                    chrono::duration<double> duration = end - start;
                    cout << "\nTiempo de ejecucion: (INSERCCION) " << duration.count() << " segundos" << endl;
                    insercionOrdenado = true; // Marcar como ordenado
                } else {
                    cout << "\nEl arreglo ya fue ordenado por insercion." << endl;
                }
                break;
            }
            case 2: {
                if (!shellSortOrdenado) {
                    copiarArreglo(copia, a2, n); // Restaurar la copia original
                    start = chrono::high_resolution_clock::now();
                    shellSort(a2, n);
                    end = chrono::high_resolution_clock::now();

                    // Calcular la duración
                    chrono::duration<double> duration = end - start;
                    cout << "\nTiempo de ejecucion: (SHELL SORT) " << duration.count() << " segundos" << endl;
                    shellSortOrdenado = true; // Marcar como ordenado
                } else {
                    cout << "\nEl arreglo ya fue ordenado por shellsort." << endl;
                }
                break;
            }
            case 3: {
                // Regenerar el arreglo y reiniciar los marcadores de ordenación
                generarArreglo(copia, n); // Generar un nuevo arreglo original
                insercionOrdenado = false;
                shellSortOrdenado = false;
                cout << "\nNuevo arreglo generado." << endl;
                break;
            }
            case 4: {
                cout << "Saliendo..." << endl;
                break;
            }
            default: {
                cout << "Opcion invalida." << endl;
                break;
            }
        }

    } while (opcion != 4);

    return 0;
}

void mostrarArreglo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insercionDirecta(int a[], int n) {
    int aux, k;
    for (int i = 1; i < n; i++) {
        aux = a[i];
        k = i - 1;
        while ((k >= 0) && aux < a[k]) {
            a[k + 1] = a[k];
            k--;
        }
        a[k + 1] = aux;
    }
}

void shellSort(int array[], int n) {
    int cen, aux;
    int k = n + 1;
    while (k > 1) {
        k = k / 2;
        cen = 1;
        while (cen == 1) {
            cen = 0;
            int i = 0;
            while (i + k <= n - 1) {
                if (array[i + k] < array[i]) {
                    aux = array[i];
                    array[i] = array[i + k];
                    array[i + k] = aux;
                    cen = 1;
                }
                i++;
            }
        }
    }
}

void generarArreglo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = -1000 + rand() % 10001;
    }
}

void copiarArreglo(int a[], int a2[], int n) {
    for (int i = 0; i < n; i++) {
        a2[i] = a[i];
    }
}

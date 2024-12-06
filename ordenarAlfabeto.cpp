#include <iostream>
#include <string>
#include <vector>

// Función para particionar el arreglo
int particionar(std::vector<std::string>& arr, int bajo, int alto) {
    // Elegir el último elemento como pivote
    std::string pivote = arr[alto];
    
    // Índice del elemento más pequeño
    int i = bajo - 1;
    
    // Recorrer todos los elementos
    for (int j = bajo; j < alto; j++) {
        // Si el elemento actual es más pequeño o igual al pivote
        if (arr[j] <= pivote) {
            // Incrementar índice del elemento más pequeño
            i++;
            
            // Intercambiar elementos
            std::swap(arr[i], arr[j]);
        }
    }
    
    // Colocar el pivote en su posición correcta
    std::swap(arr[i + 1], arr[alto]);
    return i + 1;
}

// Función QuickSort recursiva
void quickSort(std::vector<std::string>& arr, int bajo, int alto) {
    if (bajo < alto) {
        // Obtener el índice de partición
        int indiceParticion = particionar(arr, bajo, alto);
        
        // Ordenar recursivamente las dos sub-listas
        quickSort(arr, bajo, indiceParticion - 1);
        quickSort(arr, indiceParticion + 1, alto);
    }
}

// Función para imprimir el arreglo
void imprimirArreglo(const std::vector<std::string>& arr) {
    for (const auto& elemento : arr) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Vector de cadenas para ordenar
    std::vector<std::string> palabras = {"manzana", "banana", "cereza", "albaricoque", "durazno"};
    
    std::cout << "Arreglo original: ";
    imprimirArreglo(palabras);
    
    // Llamar a QuickSort
    quickSort(palabras, 0, palabras.size() - 1);
    
    std::cout << "Arreglo ordenado: ";
    imprimirArreglo(palabras);
    
    return 0;
}
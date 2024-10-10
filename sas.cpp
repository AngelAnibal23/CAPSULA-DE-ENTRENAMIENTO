#include <windows.h>
#include <iostream>

void setConsoleColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

int main() {
    // Colores:
    // 0 = Negro, 1 = Azul, 2 = Verde, 3 = Aqua, 4 = Rojo, 5 = Púrpura, 6 = Amarillo, 7 = Blanco, 8 = Gris, 9 = Azul Claro
    // El fondo puede ser configurado cambiando el valor del backgroundColor
    setConsoleColor(0, 15); // Texto negro, fondo blanco
    
    std::cout << "Texto en consola con fondo blanco y texto negro" << std::endl;

    // Restaurar colores predeterminados
    setConsoleColor(7, 0); // Texto blanco, fondo negro
    
    return 0;
}

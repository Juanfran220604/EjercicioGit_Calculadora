/*#ifndef ENTRADASALIDA_HPP
#define ENTRADASALIDA_HPP

#include <iostream>
#include <limits>

inline int leerEntero(const char* mensaje) {
    int numero;
    while (true) {
        std::cout << mensaje;
        if (std::cin >> numero) return numero;
        std::cout << "Introduce un numero entero valido.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

inline void mostrarMenu() {
    std::cout << "\n=== CALCULADORA DE ENTEROS ===\n"
              << "1. Sumar\n"
              << "2. Restar\n"
              << "3. Multiplicar\n"
              << "4. Dividir (division entera)\n"
              << "0. Salir\n";
}

inline void mostrarResultado(int resultado) {
    std::cout << "Resultado: " << resultado << '\n';
}
inline void mostrarError(const char* mensaje) {
    std::cout << "Error: " << mensaje << '\n';
}

#endif
*/
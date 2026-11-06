/*
#include "operaciones.hpp"
#include "entradasalida.hpp"

int main() {
    while (true) {
        mostrarMenu();
        int opcion = leerEntero("Elige una opcion: ");
        if (opcion == 0) {
            std::cout << "Hasta pronto.\n";
            break;
        }
        if (opcion < 1 || opcion > 4) {
            mostrarError("Opcion no valida.");
            continue;
        }

        int a = leerEntero("Primer numero: ");
        int b = leerEntero("Segundo numero: ");

        switch (opcion) {
            case 1: mostrarResultado(sumar(a, b)); break;
            case 2: mostrarResultado(restar(a, b)); break;
            case 3: mostrarResultado(multiplicar(a, b)); break;
            case 4:
                if (b == 0) mostrarError("No se puede dividir entre cero.");
                else mostrarResultado(dividir(a, b));
                break;
        }
    }
    return 0;
}
*/
#include <iostream>

int main() {

    const int CANTIDAD = 5;

    double suma   = 0.0;
    double numero = 0.0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    for (int i = 1; i <= CANTIDAD; i++) {
        std::cout << "Ingresa el numero " << i << ": ";
        std::cin >> numero;
        suma = suma + numero;
    }

    std::cout << "La suma total es: " << suma << "\n";

    return 0;
}

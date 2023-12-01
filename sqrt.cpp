#include <cmath>
#include <iostream>
#include <stdexcept>

double calculerRacine(double nombre) {
    if (nombre < 0) {
        throw std::domain_error("Nombre négatif");
    }
    return sqrt(nombre);
}

int main() {
    try {
        std::cout << calculerRacine(-5) << std::endl;
    } catch (const std::domain_error& e) {
        std::cerr << "Erreur capturée : " << e.what() << std::endl;
    }
}
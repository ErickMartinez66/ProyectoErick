
#include "menor.h"

Menor::Menor(const std::string& _nombre, int _edad, int _coeficienteIntelectual)
    : Persona(_nombre, _edad, _coeficienteIntelectual) {}

void Menor::mostrar() const {
    std::cout << "Menor: ";
    Persona::mostrar();
}

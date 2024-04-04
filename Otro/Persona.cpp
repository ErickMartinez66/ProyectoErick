
#include "persona.h"

Persona::Persona(const std::string& _nombre, int _edad, int _coeficienteIntelectual)
    : nombre(_nombre), edad(_edad), coeficienteIntelectual(_coeficienteIntelectual) {}
    const std::string& Persona::getNombre() const {
    return nombre;
}

void Persona::mostrar() const {
    std::cout << "Nombre: " << nombre << ", Edad: " << edad << ", CI: " << coeficienteIntelectual << std::endl;
}

int Persona::getCoeficienteIntelectual() const {
    return coeficienteIntelectual;
}

bool Persona::operator<(const Persona& otra) const {
    return coeficienteIntelectual > otra.coeficienteIntelectual;
}


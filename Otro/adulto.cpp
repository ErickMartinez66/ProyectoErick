
#include "adulto.h"

Adulto::Adulto(const std::string& _nombre, int _edad, int _coeficienteIntelectual)
    : Persona(_nombre, _edad,_coeficienteIntelectual) {}



void Adulto::mostrar() const {
    std::cout << "Adulto: ";
    Persona::mostrar();
}

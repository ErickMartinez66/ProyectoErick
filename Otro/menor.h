
#ifndef MENOR_H
#define MENOR_H

#include "persona.h"

class Menor : public Persona {
public:
    Menor(const std::string& _nombre, int _edad, int _coeficienteIntelectual);
    ~Menor() override {}

    void mostrar() const override;
};

#endif


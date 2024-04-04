
#ifndef ADULTO_H
#define ADULTO_H

#include "persona.h"

class Adulto : public Persona {





public:
    Adulto(const std::string& _nombre, int _edad, int _coeficienteIntelectual);
    ~Adulto() override {}

    void mostrar() const override;

};

#endif


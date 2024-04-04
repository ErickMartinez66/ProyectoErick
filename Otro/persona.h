
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    int coeficienteIntelectual;

public:
    Persona(const std::string& _nombre, int _edad, int _coeficienteIntelectual);
    virtual ~Persona() {}

    virtual void mostrar() const;
    int getCoeficienteIntelectual() const;
    virtual bool operator<(const Persona& otra) const;

    public:
    Persona(const std::string& _nombre, int _edad);
    const std::string& getNombre() const;

    friend std::ostream& operator<<(std::ostream& os, const Persona& persona);
};


#endif









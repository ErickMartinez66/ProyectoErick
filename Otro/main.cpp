#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include "persona.h"
#include "adulto.h"
#include "menor.h"




// Función para agregar una persona a la lista correspondiente
void agregarPersona(std::list<Persona*>& lista) {
    std::string nombre;
    int edad, coeficienteIntelectual;
    std::cout << "Ingrese el nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese la edad: ";
    std::cin >> edad;
    std::cout << "Ingrese el coeficiente intelectual: ";
    std::cin >> coeficienteIntelectual;
    if (edad >= 18) {
        lista.push_back(new Adulto(nombre, edad, coeficienteIntelectual));
    } else {
        lista.push_back(new Menor(nombre, edad, coeficienteIntelectual));
    }
}

// Función para mostrar la lista de personas
void mostrarLista(const std::list<Persona*>& lista) {
    for (const auto& persona : lista) {
        persona->mostrar();
    }
}

// Función para eliminar una persona de la lista
void eliminarPersona(std::list<Persona*>& lista) {
    std::string nombre;
    std::cout << "Ingrese el nombre de la persona a eliminar: ";
    std::cin >> nombre;
    auto it = std::find_if(lista.begin(), lista.end(), [&nombre](Persona* p) {
    return p->getNombre() == nombre;
});

    if (it != lista.end()) {
        delete *it;
        lista.erase(it);
        std::cout << "Persona eliminada correctamente." << std::endl;
    } else {
        std::cout << "No se encontró ninguna persona con ese nombre." << std::endl;
    }
}


int main() {
    std::list<Persona*> adultos;
    std::list<Persona*> menores;

    char opcion;
    do {
        std::cout << "\nMenú:" << std::endl;
        std::cout << "1. Agregar persona" << std::endl;
        std::cout << "2. Mostrar listas" << std::endl;

        std::cout << "4. Eliminar persona" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;
        switch (opcion) {
            case '1':
                agregarPersona(adultos);
                break;
            case '2':
                mostrarLista(adultos);
                break;

            case '3':
                eliminarPersona(adultos);
                eliminarPersona(menores);
                break;
            case '4':
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Por favor, ingrese una opción válida." << std::endl;
                break;
        }
    } while (opcion != '4');

    // Liberar memoria de las listas
    for (auto& persona : adultos) {
        delete persona;
    }
    for (auto& persona : menores) {
        delete persona;
    }

    return 0;
}

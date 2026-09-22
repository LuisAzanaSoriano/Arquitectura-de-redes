#include "Personas.hpp"
#include <iostream>

Personas::Personas()
{
}
int Personas::getEdad() {
    return edad; 
}

bool Personas::esMujer() {
    return esMujer; 
}
void Personas::setEdad(int nuevaEdad) {
    edad = nuevaEdad; // Asigna el valor del parámetro al atributo
}

Personas::~Personas()
{
}


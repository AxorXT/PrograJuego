//
// Created by Alumnos on 18/06/2024.
//

#ifndef PERSONAJE_PERSONAJE_H
#define PERSONAJE_PERSONAJE_H

#include <iostream>
#include <vector>
#include "Habilidad.h"

class Personaje {
public:

    Personaje();
    Personaje(int salud, int mana);
    ~Personaje();

    int getSalud() const;
    void setSalud(int salud);

    int getMana() const;
    void setMana(int mana);

    void agregarHabilidad(const Habilidad& habilidad);

private:

    int salud;
    int mana;
    std::vector<Habilidad> habilidades;

};


#endif //PERSONAJE_PERSONAJE_H

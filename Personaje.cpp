//
// Created by Alumnos on 18/06/2024.
//

#include "Personaje.h"

Personaje::Personaje() {
    this -> salud = 0;
    this -> mana = 0;
}

Personaje::Personaje(int salud, int mana) {
    this -> salud = salud;
    this -> mana = mana;
}

Personaje::~Personaje() {
    std::cout << "El personaje exploto";
}

int Personaje::getSalud() const {}

void Personaje::setSalud(int salud) {}

int Personaje::getMana() const {}

void Personaje::setMana(int mana) {}

void Personaje::agregarHabilidad(const Habilidad &habilidad) {
    habilidades.push_back(habilidad);
}
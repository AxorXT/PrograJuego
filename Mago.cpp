//
// Created by Alumnos on 11/06/2024.
//

#include "Mago.h"

Mago::Mago() {
    this -> hechizoTop = "N/A";
    this -> Tipo ="N/A";
}

Mago::Mago(std::string hechizoTop, std::string Tipo) {
    this -> hechizoTop = hechizoTop;
    this -> Tipo = Tipo;
}

Mago::~Mago() {}

void Mago::crearAtaque() {
    std::cout << "Hechizo de Hielo" << std::endl;
}

std::string Mago::getHechizoTop() const {
    return hechizoTop;
}

void Mago::setHechizoTop(std::string hechizoTop) {
    this -> hechizoTop = hechizoTop;
}

std::string Mago::getTipo() const {
    return Tipo;
}

void Mago::setTipo(std::string Tipo) {
    this -> Tipo = Tipo;
}
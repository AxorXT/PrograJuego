//
// Created by Alumnos on 11/06/2024.
//

#include "Mago.h"

Mago::Mago() : PersonajeVideojuego(), Inventario(){
    this -> hechizoTop = "N/A";
    this -> Tipo ="N/A";
}

Mago::Mago(int fuerza, int vida, std::string ataque, std::string nombre, std::vector<Habilidad *> nHabilidades, std::string hechizoTop, std::string Tipo) : PersonajeVideojuego(fuerza, vida, ataque, nombre, nHabilidades), Inventario(){
    this -> hechizoTop = hechizoTop;
    this -> Tipo = Tipo;
}

Mago::~Mago() {
    std::cout << "Exploto el mago" << std::endl;
}

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
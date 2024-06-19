//
// Created by Alumnos on 18/06/2024.
//

#include "Pocion.h"

Pocion::Pocion() {
    danoObjeto = 0;
}

Pocion::Pocion(std::string nombre, int danoObjeto) : Item(nombre) {
    this -> danoObjeto = danoObjeto;
}

Pocion::~Pocion() {
    std::cout << "No funciono la Pocion" << std::endl;
}

void Pocion::usar() {
    std::cout << getNombre() << " utilizada" << " +" << danoObjeto << std::endl;
    delete this;
}

int Pocion::getDanoObjeto() const{
    return danoObjeto;
}

void Pocion::setDanoObjeto(int danoObjeto) {
    this -> danoObjeto = danoObjeto;
}
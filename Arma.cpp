//
// Created by Alumnos on 18/06/2024.
//

#include "Arma.h"

Arma::Arma() : Item() {
    danoObjeto = 0;
}

Arma::Arma(std::string nombre, int danoObjeto) : Item(nombre) {
    this -> danoObjeto = danoObjeto;
}

Arma::~Arma() {
    std::cout << "No funciona el arma" << std::endl;
}

void Arma::usar() {
    std::cout << getNombre() << " utilizada" << " +" << danoObjeto << std::endl;
    delete this;
}

int Arma::getDanoObjeto() const{
    return danoObjeto;
}

void Arma::setDanoObjeto(int danoObjeto) {
    this -> danoObjeto = danoObjeto;
}
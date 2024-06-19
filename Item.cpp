//
// Created by Alumnos on 18/06/2024.
//

#include "Item.h"

Item::Item() {
    this -> nombre = "N/A";
}

Item::Item(std::string nombre) {
    this -> nombre = nombre;
}

Item::~Item() {
    std::cout << " Eliminado" << std::endl;
}

void Item::usar() {
    std::cout << nombre << "utilizado" << std::endl;
}

std::string Item::getNombre() const {
    return nombre;
}

void Item::setNombre(std::string nombre) {
    this -> nombre = nombre;
}
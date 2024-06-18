//
// Created by Angel on 17/06/2024.
//

#include "EnemigoEntidad.h"

EnemigoEntidad::EnemigoEntidad() {
    this -> tipoNew = "N/A";
    this -> poderNew = 0;
}

EnemigoEntidad::EnemigoEntidad(std::string tipoNew, int poderNew) {
    this -> tipoNew = tipoNew;
    this -> poderNew = poderNew;
}

EnemigoEntidad::~EnemigoEntidad() {
    std::cout << "El Enemigo de Entidad exploto" << std::endl;
}

void EnemigoEntidad::actualizar() {
    std::cout << "Actualizando enemigo de tipo " << tipoNew << " con poder" << poderNew << std::endl;
}
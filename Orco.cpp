//
// Created by Angel on 12/06/2024.
//

#include "Orco.h"

Orco::Orco() {
    this -> TipoOrco = "N/A";
    this -> Aspecto ="N/A";
}

Orco::Orco(std::string TipoOrco, std::string Aspecto) {
    this -> TipoOrco = TipoOrco;
    this -> Aspecto = Aspecto;
}

Orco::~Orco(){
    //Destructor
}

void Orco::recibirDano() {
    std::cout << "Recibe 50 de dano" << std::endl;
}

std::string Orco::getTipoOrco() const {
    return TipoOrco;
}

void Orco::setTipoOrco(std::string TipoOrco) {
    this -> TipoOrco = TipoOrco;
}

std::string Orco::getAspecto() const {
    return Aspecto;
}

void Orco::setAspecto(std::string Aspecto) {
    this -> Aspecto = Aspecto;
}
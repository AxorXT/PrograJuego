//
// Created by Alumnos on 11/06/2024.
//

#include "Guerrero.h"

Guerrero::Guerrero() {
    this -> Arma = "N/A";
    this -> Armadura ="N/A";
}

Guerrero::Guerrero(std::string Arma, std::string Armadura) {
    this -> Arma = Arma;
    this -> Armadura = Armadura;
}

Guerrero::~Guerrero(){
    //Destructor
}

void Guerrero::crearAtaque() {
    std::cout << "Escudo de Hierro" << std::endl;
}

std::string Guerrero::getArma() const {
    return Arma;
}

void Guerrero::setArma(std::string Arma) {
    this -> Arma = Arma;
}

std::string Guerrero::getArmadura() const {
    return Armadura;
}

void Guerrero::setArmadura(std::string Armadura) {
    this -> Armadura = Armadura;
}
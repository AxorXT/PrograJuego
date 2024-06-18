//
// Created by Angel on 12/06/2024.
//

#include "Duende.h"

Duende::Duende() {
    this -> altura = 0;
    this -> armaPrincipal ="N/A";
}

Duende::Duende(float altura, std::string armaPrincipal) {
    this -> altura = altura;
    this -> armaPrincipal = armaPrincipal;
}

Duende::~Duende(){
    //Destructor
}

void Duende::recibirDano() {
    std::cout << "Recibe 10 de dano" << std::endl;
}

float Duende::getAltura() const {
    return altura;
}

void Duende::setAltura(float altura) {
    this -> altura = altura;
}

std::string Duende::getArmaPrincipal() const {
    return armaPrincipal;
}

void Duende::setArmaPrincipal(std::string armaPrincipal) {
    this -> armaPrincipal = armaPrincipal;
}
//
// Created by Angel on 17/06/2024.
//

#include "BolaDeFuego.h"

BolaDeFuego::BolaDeFuego() {}

BolaDeFuego::~BolaDeFuego() {
    std::cout << "No sirve el ataque";
}

void BolaDeFuego::usar() {
    std::cout << "Has utilizado la Bola De Fuego" << std::endl;
}
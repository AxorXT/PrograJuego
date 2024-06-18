//
// Created by Alumnos on 18/06/2024.
//

#include "Arma.h"

Arma::Arma() {}

Arma::~Arma() {
    std::cout << "No funciona el arma";
}

void Arma::usar() {
    std::cout << "Has utilizado un arma" << std::endl;
}
//
// Created by Angel on 12/06/2024.
//

#include "Enemigo.h"

Enemigo::Enemigo() {
    this -> fuerzaEnemigo = 0;
    this -> vidaEnemigo = 0;
    this -> ataqueEnemigo = "N/A";
    this -> nombreEnemigo ="N/A";

}

Enemigo::Enemigo(int fuerzaEnemigo, int vidaEnemigo, std::string ataqueEnemigo, std::string nombreEnemigo) {
    this -> fuerzaEnemigo = fuerzaEnemigo;
    this -> vidaEnemigo = vidaEnemigo;
    this -> ataqueEnemigo = ataqueEnemigo;
    this -> nombreEnemigo = nombreEnemigo;
}


void Enemigo::recibirDano() {}

int Enemigo::getFuerzaEnemigo() const {
    return fuerzaEnemigo;
}

void Enemigo::setFuerzaEnemigo(int fuerzaEnemigo) {
    this -> fuerzaEnemigo = fuerzaEnemigo;
}

int Enemigo::getVidaEnemigo() const {
    return vidaEnemigo;
}

void Enemigo::setVidaEnemigo(int vidaEnemigo) {
    this -> vidaEnemigo = vidaEnemigo;
}

std::string Enemigo::getAtaqueEnemigo() const {
    return ataqueEnemigo;
}

void Enemigo::setAtaqueEnemigo(std::string ataqueEnemigo) {
    this -> ataqueEnemigo = ataqueEnemigo;
}

std::string Enemigo::getNombreEnemigo() const {
    return nombreEnemigo;
}

void Enemigo::setNombreEnemigo(std::string nombreEnemigo) {
    this -> nombreEnemigo = nombreEnemigo;
}
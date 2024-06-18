//
// Created by Angel on 17/06/2024.
//

#include "Jugador.h"

Jugador::Jugador() {
    this -> nombreNew = "N/A";
    this -> vidaNew = 0;
}

Jugador::Jugador(std::string nombreNew, int vidaNew) {
    this -> nombreNew = nombreNew;
    this -> vidaNew = vidaNew;

}

Jugador::~Jugador() {
    std::cout << "Exploto el jugador" << std::endl;
}

void Jugador::actualizar() {
    std::cout << "Actualizando jugador" << nombreNew << "su vida" << vidaNew << std::endl;
}
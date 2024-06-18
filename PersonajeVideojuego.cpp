//
// Created by Alumnos on 11/06/2024.
//

#include "PersonajeVideojuego.h"

PersonajeVideojuego::PersonajeVideojuego() {
    this -> fuerza = 0;
    this -> vida = 0;
    this -> ataque = "N/A";
    this -> nombre ="N/A";

}

PersonajeVideojuego::PersonajeVideojuego(int fuerza, int vida, std::string ataque, std::string nombre) {
    this -> fuerza = fuerza;
    this -> vida = vida;
    this -> ataque = ataque;
    this -> nombre = nombre;
}


void PersonajeVideojuego::crearAtaque() {}

int PersonajeVideojuego::getFuerza() const {
    return fuerza;
}

void PersonajeVideojuego::setFuerza(int fuerza) {
    this -> fuerza = fuerza;
}

int PersonajeVideojuego::getVida() const {
    return vida;
}

void PersonajeVideojuego::setVida(int vida) {
    this -> vida = vida;
}

std::string PersonajeVideojuego::getAtaque() const {
    return ataque;
}

void PersonajeVideojuego::setAtaque(std::string ataque) {
    std::cout << "Ataque principal: " << ataque << std::endl;
    this -> ataque = ataque;
}

std::string PersonajeVideojuego::getNombre() const {
    return nombre;
}

void PersonajeVideojuego::setNombre(std::string nombre)  {
    std::cout << "Nombre de Jugador: " << nombre << std::endl;
    this -> nombre = nombre;
}
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

PersonajeVideojuego::PersonajeVideojuego(int fuerza, int vida, std::string ataque, std::string nombre, std::vector<Habilidad *> nHabilidades) {
    this -> fuerza = fuerza;
    this -> vida = vida;
    this -> ataque = ataque;
    this -> nombre = nombre;
    this -> nHabilidades = nHabilidades;
}

PersonajeVideojuego::~PersonajeVideojuego(){
    std::cout << "Personaje exploto" << std::endl;
}


void PersonajeVideojuego::crearAtaque() {
    std::cout << "Golpe" << std::endl;
}

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
    this -> ataque = ataque;
}

std::string PersonajeVideojuego::getNombre() const {
    return nombre;
}

void PersonajeVideojuego::setNombre(std::string nombre)  {
    this -> nombre = nombre;
}

void PersonajeVideojuego::mostrarHabilidad() {
    for(Habilidad* habilidad : nHabilidades){
        habilidad->usarHabilidad();
    }
}

void PersonajeVideojuego::agregarHabilidad(Habilidad* habilidad) {
    nHabilidades.push_back(habilidad);
}
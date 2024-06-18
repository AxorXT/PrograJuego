//
// Created by Angel on 17/06/2024.
//

#include "ConfiguracionesJuego.h"

ConfiguracionesJuego::ConfiguracionesJuego() {
    this -> resolucion = "N/A";
    this -> dificultad = "N/A";
    this -> volumen = 0;
}

ConfiguracionesJuego::ConfiguracionesJuego(std::string resolucion, std::string dificultad, int volumen) {
    this -> resolucion = resolucion;
    this -> dificultad = dificultad;
    this -> volumen = volumen;
}

ConfiguracionesJuego::~ConfiguracionesJuego() {}

std::string ConfiguracionesJuego::getResolucion() const {}

void ConfiguracionesJuego::setResolucion(std::string resolucion) {}

std::string ConfiguracionesJuego::getDificultad() const {}

void ConfiguracionesJuego::setDificultad(std::string dificultad) {}

int ConfiguracionesJuego::getVolumen() const {}

void ConfiguracionesJuego::setVolumen(int volumen) {}
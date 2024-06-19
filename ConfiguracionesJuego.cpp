//
// Created by Angel on 17/06/2024.
//

#include "ConfiguracionesJuego.h"

ConfiguracionesJuego::ConfiguracionesJuego() {
    this -> resolucion = 720;
    this -> dificultad = "Medio";
    this -> volumen = 87;
}

ConfiguracionesJuego::ConfiguracionesJuego(int resolucion, std::string dificultad, int volumen) {
    this -> resolucion = resolucion;
    this -> dificultad = dificultad;
    this -> volumen = volumen;
}

ConfiguracionesJuego::~ConfiguracionesJuego() {}

int ConfiguracionesJuego::getResolucion() const {
    return resolucion;
}

void ConfiguracionesJuego::setResolucion(int resolucion) {
    this -> resolucion = resolucion;
}

std::string ConfiguracionesJuego::getDificultad() const {
    return dificultad;
}

void ConfiguracionesJuego::setDificultad(std::string dificultad) {
    this -> dificultad = dificultad;
}

int ConfiguracionesJuego::getVolumen() const {
    return volumen;
}

void ConfiguracionesJuego::setVolumen(int volumen) {
    this -> volumen = volumen;
}

void ConfiguracionesJuego::mostrarConf() {
    std::cout << "Resolucion: " << resolucion << std::endl;
    std::cout << "Volumen: " << volumen << std::endl;
    std::cout << "Dificultad: " << dificultad << std::endl;
}
//
// Created by Angel on 17/06/2024.
//

#ifndef PERSONAJE_CONFIGURACIONESJUEGO_H
#define PERSONAJE_CONFIGURACIONESJUEGO_H

#include <iostream>
#include <string>

class ConfiguracionesJuego {
public:

    ConfiguracionesJuego();
    ConfiguracionesJuego(std::string resolucion, std::string dificultad, int volumen);
    ~ConfiguracionesJuego();

    std::string getResolucion() const;
    void setResolucion(std::string resolucion);

    std::string getDificultad() const;
    void setDificultad(std::string dificultad);

    int getVolumen() const;
    void setVolumen(int volumen);

private:

    std::string resolucion;
    std::string dificultad;
    int volumen;

};


#endif //PERSONAJE_CONFIGURACIONESJUEGO_H

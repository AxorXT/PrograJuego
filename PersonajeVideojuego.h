//
// Created by Alumnos on 11/06/2024.
//

#ifndef PERSONAJE_PERSONAJEVIDEOJUEGO_H
#define PERSONAJE_PERSONAJEVIDEOJUEGO_H

#include <iostream>
#include <string>

class PersonajeVideojuego {
public:

    PersonajeVideojuego(); //Constructor default
    PersonajeVideojuego(int fuerza, int vida, std::string ataque, std::string nombre); //Constructor Parametros
    virtual ~PersonajeVideojuego() = default; //Destructor

    virtual void crearAtaque();

    int getFuerza() const;
    void setFuerza(int fuerza);

    int getVida() const;
    void setVida(int vida);

    std::string getAtaque() const;
    void setAtaque(std::string ataque);

    std::string getNombre() const;
    void setNombre(std::string nombre);


private:

    std::string ataque;
    std::string nombre;
    int fuerza;
    int vida;
};


#endif //PERSONAJE_PERSONAJEVIDEOJUEGO_H

//
// Created by Alumnos on 11/06/2024.
//

#ifndef PERSONAJE_GUERRERO_H
#define PERSONAJE_GUERRERO_H

#include "PersonajeVideojuego.h"
#include "Inventario.h"

class Guerrero : public PersonajeVideojuego, public Inventario {
public:

    Guerrero(); //Constructor default
    Guerrero (int fuerza, int vida, std::string ataque, std::string nombre, std::vector<Habilidad *> nHabilidades, std::string Arma, std::string Armadura); //Constructor parametros
    ~Guerrero(); //Destructor

    void crearAtaque() override;

    std::string getArma() const;
    void setArma(std::string Arma);

    std::string getArmadura() const;
    void setArmadura(std::string Armadura);

private:

    std::string ataque;
    std::string nombre;
    int fuerza;
    int vida;

    std::string Arma;
    std::string Armadura;

};


#endif //PERSONAJE_GUERRERO_H

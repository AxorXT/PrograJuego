//
// Created by Angel on 17/06/2024.
//

#ifndef PERSONAJE_JUGADOR_H
#define PERSONAJE_JUGADOR_H

#include "Entidad.h"

class Jugador : public Entidad {
public:

    Jugador();
    Jugador(std::string nombreNew, int vidaNew);
    ~Jugador();

    void actualizar() override;

private:

    std::string nombreNew;
    int vidaNew;
};


#endif //PERSONAJE_JUGADOR_H

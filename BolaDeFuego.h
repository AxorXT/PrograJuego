//
// Created by Angel on 17/06/2024.
//

#ifndef PERSONAJE_BOLADEFUEGO_H
#define PERSONAJE_BOLADEFUEGO_H

#include "Habilidad.h"

class BolaDeFuego : public Habilidad {
public:

    BolaDeFuego();
    ~BolaDeFuego();

    void usarHabilidad() override;

};


#endif //PERSONAJE_BOLADEFUEGO_H

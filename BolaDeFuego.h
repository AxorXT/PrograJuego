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

    void usar() override;

};


#endif //PERSONAJE_BOLADEFUEGO_H

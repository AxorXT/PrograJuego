//
// Created by Alumnos on 18/06/2024.
//

#ifndef PERSONAJE_ARMA_H
#define PERSONAJE_ARMA_H

#include "Item.h"

class Arma : public Item {
public:

    Arma();
    ~Arma();

    void usar() override;

};


#endif //PERSONAJE_ARMA_H

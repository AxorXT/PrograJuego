//
// Created by Alumnos on 18/06/2024.
//

#ifndef PERSONAJE_POCION_H
#define PERSONAJE_POCION_H

#include "Item.h"

class Pocion : public Item {
public:

    Pocion();
    ~Pocion();

    void usar() override;

};


#endif //PERSONAJE_POCION_H

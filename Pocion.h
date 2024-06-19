//
// Created by Alumnos on 18/06/2024.
//

#ifndef PERSONAJE_POCION_H
#define PERSONAJE_POCION_H

#include "Item.h"

class Pocion : public Item {
public:

    Pocion();
    Pocion(std::string nombre, int danoObjeto);
    ~Pocion();

    void usar() override;

    int getDanoObjeto() const;
    void setDanoObjeto(int danoObjeto);

private:

    int danoObjeto;

};


#endif //PERSONAJE_POCION_H

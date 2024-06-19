//
// Created by Alumnos on 18/06/2024.
//

#ifndef PERSONAJE_ARMA_H
#define PERSONAJE_ARMA_H

#include "Item.h"

class Arma : public Item {
public:

    Arma();
    Arma(std::string nombre, int danoObjeto);
    ~Arma();

    void usar() override;

    int getDanoObjeto() const;
    void setDanoObjeto(int danoObjeto);

private:

    int danoObjeto;

};


#endif //PERSONAJE_ARMA_H

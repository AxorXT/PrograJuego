//
// Created by Angel on 12/06/2024.
//

#ifndef PERSONAJE_DUENDE_H
#define PERSONAJE_DUENDE_H

#include "Enemigo.h"

class Duende : public Enemigo {

    Duende();
    Duende(float altura, std::string armaPrincipal);
    ~Duende();

    void recibirDano() override;

    float getAltura() const;
    void setAltura(float altura);

    std::string getArmaPrincipal() const;
    void setArmaPrincipal(std::string armaPrincipal);

private:

    float altura;
    std::string armaPrincipal;

};


#endif //PERSONAJE_DUENDE_H

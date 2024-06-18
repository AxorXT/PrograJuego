//
// Created by Angel on 12/06/2024.
//

#ifndef PERSONAJE_ORCO_H
#define PERSONAJE_ORCO_H

#include "Enemigo.h"

class Orco : public Enemigo {
public:

    Orco();
    Orco(std::string TipoOrco, std::string Aspecto);
    ~Orco();

    void recibirDano() override;

    std::string getTipoOrco() const;
    void setTipoOrco(std::string TipoOrco);

    std::string getAspecto() const;
    void setAspecto(std::string Aspecto);

private:

    std::string TipoOrco;
    std::string Aspecto;

};


#endif //PERSONAJE_ORCO_H

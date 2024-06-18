//
// Created by Angel on 17/06/2024.
//

#ifndef PERSONAJE_ENEMIGOENTIDAD_H
#define PERSONAJE_ENEMIGOENTIDAD_H

#include "Entidad.h"

class EnemigoEntidad : public Entidad {
public:

    EnemigoEntidad();
    EnemigoEntidad(std::string tipoNew, int poderNew);
    ~EnemigoEntidad();

    void actualizar() override;

private:

    std::string tipoNew;
    int poderNew;

};


#endif //PERSONAJE_ENEMIGOENTIDAD_H

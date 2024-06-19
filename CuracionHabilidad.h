//
// Created by Angel on 17/06/2024.
//

#ifndef PERSONAJE_CURACIONHABILIDAD_H
#define PERSONAJE_CURACIONHABILIDAD_H

#include "Habilidad.h"

class CuracionHabilidad : public Habilidad {
public:

    CuracionHabilidad();
    ~CuracionHabilidad();

    void usarHabilidad() override;

};


#endif //PERSONAJE_CURACIONHABILIDAD_H

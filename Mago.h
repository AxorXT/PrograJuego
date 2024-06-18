//
// Created by Alumnos on 11/06/2024.
//

#ifndef PERSONAJE_MAGO_H
#define PERSONAJE_MAGO_H

#include "PersonajeVideojuego.h"
#include "Inventario.h"

class Mago : public PersonajeVideojuego, public Inventario {
public:

    Mago(); //Constructor default
    Mago(std::string hechizoTop, std::string Tipo); //Constructor parametros
    ~Mago(); //Destructor

    void crearAtaque() override;

    std::string getHechizoTop() const;
    void setHechizoTop(std::string hechizoTop);

    std::string getTipo() const;
    void setTipo(std::string Tipo);



private:
    std::string hechizoTop;
    std::string Tipo;

};


#endif //PERSONAJE_MAGO_H

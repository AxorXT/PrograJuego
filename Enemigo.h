//
// Created by Angel on 12/06/2024.
//

#ifndef PERSONAJE_ENEMIGO_H
#define PERSONAJE_ENEMIGO_H

#include <iostream>
#include <string>

class Enemigo {
public:

    Enemigo(); //Constructor default
    Enemigo(int fuerzaEnemigo, int vidaEnemigo, std::string ataquEnemigo, std::string nombreEnemigo); //Constructor Parametros
    virtual ~Enemigo() = default; //Destructor

    virtual void recibirDano();

    int getFuerzaEnemigo() const;
    void setFuerzaEnemigo(int fuerzaEnemigo);

    int getVidaEnemigo() const;
    void setVidaEnemigo(int vidaEnemigo);

    std::string getAtaqueEnemigo() const;
    void setAtaqueEnemigo(std::string ataqueEnemigo);

    std::string getNombreEnemigo() const;
    void setNombreEnemigo(std::string nombreEnemigo);


private:

    std::string ataqueEnemigo;
    std::string nombreEnemigo;
    int fuerzaEnemigo;
    int vidaEnemigo;

};



#endif //PERSONAJE_ENEMIGO_H

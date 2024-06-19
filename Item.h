//
// Created by Alumnos on 18/06/2024.
//

#ifndef PERSONAJE_ITEM_H
#define PERSONAJE_ITEM_H

#include <iostream>

class Item {
public:

    Item();
    Item(std::string nombre);
    virtual ~Item();

    std::string getNombre() const;
    void setNombre(std::string nombre);

    virtual void usar();

private:
    std::string nombre;

};


#endif //PERSONAJE_ITEM_H

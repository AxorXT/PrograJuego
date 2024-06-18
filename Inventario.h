//
// Created by Angel on 12/06/2024.
//

#ifndef PERSONAJE_INVENTARIO_H
#define PERSONAJE_INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>

class Inventario {
public:

    // Constructor
    Inventario();
    virtual ~Inventario();

    // Método para agregar un ítem
    void agregarItem(const std::string& item);

    // Método para eliminar un ítem
    void eliminarItem(const std::string& item);

    // Método para mostrar todos los ítems
    void mostrarItems() const;

    //Método para usar item
    void usarItem(const std::string& item);

private:
    std::vector<std::string> items;
};


#endif //PERSONAJE_INVENTARIO_H

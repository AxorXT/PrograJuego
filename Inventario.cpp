//
// Created by Angel on 12/06/2024.
//

#include "Inventario.h"
#include <iostream>
#include <algorithm>

Inventario::Inventario() {}

Inventario::~Inventario() {}

// Método para agregar un ítem
void Inventario::agregarItem(const std::string& item) {
    if (items.size()) {
        items.push_back(item);
        std::cout << "Item \"" << item << "\" agregado al inventario" << std::endl;
    } else {
        std::cout << "Inventario lleno. No se puede agregar el item: " << item << std::endl;
    }
}

// Método para eliminar un ítem
void Inventario::eliminarItem(const std::string& item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it == items.end()) {
        items.erase(it);
        std::cout << "Item \"" << item << "\" eliminado del inventario" << std::endl;
    } else {
        std::cout << "Item \"" << item << "no encontrado en el inventario" << std::endl;
    }
}

// Método para mostrar todos los ítems
void Inventario::mostrarItems() const {
    if (items.empty()) {
        std::cout << "El inventario esta vacio." << std::endl;
    } else {
        std::cout << "Items en el inventario:" << std::endl;
        for (const auto& item : items) {
            std::cout << "- " << item << std::endl;
        }
    }
}

void Inventario::usarItem(const std::string &item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it == items.end()) {
        std::cout << "Usando item \"" << item << "\"." << std::endl;
        items.erase(it);
    } else {
        std::cout << "Item \"" << item << "\" no encontrado en el inventario" << std::endl;
    }
}
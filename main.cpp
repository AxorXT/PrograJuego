#include "PersonajeVideojuego.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Orco.h"
#include "Duende.h"
#include "Inventario.h"
#include "Habilidad.h"
#include "CuracionHabilidad.h"
#include "BolaDeFuego.h"
#include "ConfiguracionesJuego.h"
#include "Arma.h"
#include "Pocion.h"
#include "Enemigo.h"
#include "Entidad.h"
#include "EnemigoEntidad.h"
#include "Jugador.h"

int main() {

    std::vector<Habilidad *> nHabilidades;

    Habilidad *curar = new CuracionHabilidad();
    nHabilidades.push_back(curar);

    Guerrero *henry = new Guerrero(80, 100, "Embestida", "Henry", nHabilidades, "Espada", "Hierro");

    Habilidad *bola = new BolaDeFuego();
    henry->agregarHabilidad(bola);

    henry->mostrarHabilidad();

    Mago *hans = new Mago(50, 100, "Tormenta de Hielo", "Hans", nHabilidades, "flechas de Hielo", "Hielo");

    hans->agregarItem("Baston");
    hans->mostrarItems();
    hans->eliminarItem("Baston");

    Orco *shrek = new Orco();
    Duende *duendi = new Duende();

    shrek->recibirDano();
    duendi->recibirDano();

    std::vector<Item *> nitems;
    Item *bastonDeTormentas = new Arma("Baston Torrencial", 6);
    Item *pocionLevitacion = new Pocion("Levitacion Suprema", 10);

    nitems.push_back(bastonDeTormentas);

    Inventario *inventario = new Inventario({"Baston", "Pocion", "Escudo"}, nitems);

    inventario->agregarAP(pocionLevitacion);

    inventario->eliminarItem("Pocion Venenosa");

    inventario->agregarItem("Hoja de papel");
    inventario->mostrarItems();
    inventario->eliminarItem("Baston");

    bastonDeTormentas->usar();
    pocionLevitacion->usar();

    ConfiguracionesJuego *conf = new ConfiguracionesJuego();

    conf->mostrarConf();

    std::cout << conf->getResolucion() << std::endl;

    conf->setResolucion(1080);


}
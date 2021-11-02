//
// Created by Catoras on 19/10/2021.
//

#ifndef LABERINTO_BUSQUEDA_EN_PROFUNDIDAD_PLANO_H
#define LABERINTO_BUSQUEDA_EN_PROFUNDIDAD_PLANO_H

#include "Coordenada.h"
#define X_SIZE 50
#define Y_SIZE 50

class Plano {
private:
    Coordenada plano2d [X_SIZE][Y_SIZE];
public:
    Plano();
    void ObstaculosCheck();
    int getfH(Coordenada* coordenada);
    bool isPosicionObstaculizada(Coordenada* coordenada);
    void setPosicionObstaculizada(Coordenada* coordenada);
};


#endif //LABERINTO_BUSQUEDA_EN_PROFUNDIDAD_PLANO_H

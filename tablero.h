//
// Created by utec on 30/10/19.
//

#ifndef IDOLMASTER_TABLERO_H
#define IDOLMASTER_TABLERO_H


#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>

#include "casilla.h"
#include "fichas.h"

#include "tipes.h"


class tablero_t{
private:
    longitud height;
    longitud width;
    cantidad rows;
    cantidad cols;

    sf::RenderWindow* canvas;
    vector<vector<casilla_t>> casillas;
    vector <fichas_t> fichas;
    void draw_rectangle(posicion x, posicion y, longitud h, longitud w);
public:

    tablero_t(longitud h, longitud w, cantidad r, cantidad c, sf::RenderWindow* cnv);
    void draw();


};



#endif //IDOLMASTER_TABLERO_H

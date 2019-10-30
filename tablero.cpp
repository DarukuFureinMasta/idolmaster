//
// Created by utec on 30/10/19.
//

#include <iostream>
#include <string>
#include <vector>
#include "tipes.h"
#include "tablero.h"
#include "casilla.h"

void tablero_t::draw_rectangle(posicion x, posicion y, longitud h, longitud w) {

    sf::RectangleShape rect;
    rect.setSize(sf::Vector2f(h,w));
    rect.setPosition(x,y);
    rect.setFillColor(sf::Color::Magenta);
    rect.setOutlineThickness(2);
    rect.setOutlineColor(sf::Color::Yellow);
    canvas->draw(rect);

}

tablero_t::tablero_t(longitud h, longitud w, cantidad r, cantidad c, sf::RenderWindow *cnv)
                    :height{h},width{w},rows{r},cols{c},canvas{cnv} {
    casillas.resize(rows);

    auto wc = width / cols;
    auto hc = height / rows;
    for (auto &row: casillas) {
        for (int i = 0; i < cols; i++)
            // row.push_back(casilla_t(hc,wc));
            row.emplace_back(hc, wc);
    }
}

void tablero_t::draw() {
        for (int i=0;i < rows; i++){
            for (int j = 0; j < cols; j++) {
                draw_rectangle(
                        casillas[i][j].get_width()*i,
                        casillas[i][j].get_height()*j,
                        casillas[i][j].get_height(),
                        casillas[i][j].get_width()
                        );
            };
        }


}

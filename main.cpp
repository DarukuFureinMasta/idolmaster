#include <iostream>
#include <SFML/Graphics.hpp>
#include "tablero.h"
int main()
{
    auto w =600;
    auto h = 600;
    sf::RenderWindow window(sf::VideoMode(w, h), "shiri itai oniichan");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Magenta);
    tablero_t tbl(w,h,8,8,&window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        tbl.draw();
        window.display();
    }

    return 0;
}
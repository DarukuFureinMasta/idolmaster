//
// Created by utec on 30/10/19.
//

#include <iostream>
#include <string>
#include <vector>
#include "casilla.h"
#include "tipes.h"

using namespace std;

casilla_t::casilla_t(
        longitud h, longitud w):
        height{h}, width{w} {


}

longitud casilla_t::get_height() {
    return height;
}

longitud casilla_t::get_width() {
    return width;
}



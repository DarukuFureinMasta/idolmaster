//
// Created by utec on 30/10/19.
//

#ifndef IDOLMASTER_CASILLA_H
#define IDOLMASTER_CASILLA_H

#include <iostream>
#include <string>
#include <vector>
#include "tipes.h"

using namespace std;


class casilla_t {
private:
    longitud height;
    longitud  width;
public:
    casilla_t(longitud h, longitud w);
    longitud get_height();
    longitud  get_width();
};


#endif //IDOLMASTER_CASILLA_H

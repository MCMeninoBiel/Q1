#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "geometria.h"

class Triangulo:public FiguraGeometrica{
private:

public:
    double base;
    double h;

    Triangulo();
    Triangulo(double base, double h);
    calcularArea(double base, double h);
};

#endif // TRIANGULO_H

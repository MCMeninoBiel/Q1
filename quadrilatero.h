#ifndef QUADRILATERO_H
#define QUADRILATERO_H
#include "geometria.h"

class Quadrilatero:public FiguraGeometrica{
private:

public:
    double base;
    double h;

    quadrilatero();
    quadrilatero(double base, double h);

    calcularArea(double base, double h);
};


#endif // QUADRILATERO_H

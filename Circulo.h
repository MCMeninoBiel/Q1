#ifndef CIRCULO_H
#define CIRCULO_H
#include "geometria.h"

class Circulo:public FiguraGeometrica{

public:
    double raio;

    Circulo();
    Circulo(double raio);
    calcularArea(double raio);
};

#endif //CIRCULO_H

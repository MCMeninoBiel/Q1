#include "quadrilatero.h"

Quadrilatero::Quadrilatero(){


};

Quadrilatero :: Quadrilatero(double h, double base, std::string nome){
    this -> nome = nome;
    this -> base = base;
    this -> h = h;
}

calcularArea(double base, double h){
    return base*h;
}

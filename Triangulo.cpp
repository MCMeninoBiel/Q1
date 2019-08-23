#include "triangulo.h"

Triangulo::Triangulo(){

};

Triangulo::Triangulo(std::string nome, double base, double h){
    this -> nome = nome;
    this -> base = base;
    this -> h = h;
}

double Triangulo::calcularArea(double base, double h){
    return (base*h)/2
}

Triangulo::~Triangulo();

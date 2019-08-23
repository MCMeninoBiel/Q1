#include "circulo.h"
Circulo::Circulo(){

};

Circulo(double raio){
    this-> raio = raio;

};

double calcularArea(double raio){
    return (raio*raio)*3.14;
}

Circulo::~Circulo()
{
    //dtor
}

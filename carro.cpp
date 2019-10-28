#include "carro.h"

Carro::Carro() {
}

Carro::~Carro(){
}

void Carro::setCarro(string _nombre, int _Px, int _Py) {
    nombre = _nombre;
    Px = _Px;
    Py = _Py;
}

string Carro::getName(){
    return nombre;
}

int Carro::getPx(){
    return Px;
}

int Carro::getPy(){
    return Py;
}

void Carro::MoveR(){

}

void Carro::MoveL(){

}

void Carro::MoveU(){

}

void Carro::MoveD(){

}

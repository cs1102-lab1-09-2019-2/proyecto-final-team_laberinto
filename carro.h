#ifndef PROYECTO_FINAL_TEAM_LABERINTO_CARRO_H
#define PROYECTO_FINAL_TEAM_LABERINTO_CARRO_H

#include <iostream>
#include <string>
using namespace std;

class Carro{
private:
    string nombre;
    int Px;
    int Py;
public:
    Carro(string, int, int);
    ~Carro();
    void setCarro(string, int, int);
    string getName();
    int getPx();
    int getPy();
    void MoveR();
    void MoveL();
    void MoveU();
    void MoveD();
};

#endif //PROYECTO_FINAL_TEAM_LABERINTO_CARRO_H

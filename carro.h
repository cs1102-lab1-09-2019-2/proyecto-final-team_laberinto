#ifndef PROYECTO_CARRO_H
#define PROYECTO_CARRO_H

#include "Tipos.h"

class Carro{
private:
    TipoFrase Nombre;
    TipoEntero Xo;
    TipoEntero Yo;
    TipoEntero Xf;
    TipoEntero Yf;
    TipoEntero **Pista;
    TipoEntero Filas;
    TipoEntero Columnas;
public:
    Carro(TipoFrase _Nombre, TipoEntero _Xo, TipoEntero _Yo, TipoEntero _Xf, TipoEntero _Yf, TipoEntero **_Pista) :
    Nombre(_Nombre), Xo(_Xo), Yo(_Yo), Xf(_Xf), Yf(_Yf), Pista(_Pista), Filas(_Filas), Columnas(_Columnas){}
    ~Carro(){}
    TipoTrueFalse Seguro(TipoEntero xo, TipoEntero yo){
        if (xo >= 0 && xo < Columnas && yo >= 0 && yo < Filas && *(*(Pista + yo)+ xo) == 0){
            return true;
        }else{
            return false;
        }
    }
    TipoTrueFalse Camino1(TipoEntero xo, TipoEntero yo, TipoEntero xf, TipoEntero yf) {
        if (yo == yf && xo == xf) {
            *(*(Pista + yo) + xo) = 9;
            return true;
        }
        if (Seguro(xo, yo) == true) {
            *(*(Pista + yo) + xo) = 9;
            if (Camino1(yo, xo + 1, yf, xf) == true)
                return true;
            if (Camino1(yo - 1, xo, yf, xf) == true)
                return true;
            if (Camino1(yo, xo - 1, yf, xf) == true)
                return true;
            if (Camino1(yo + 1, xo, yf, xf) == true)
                return true;
            *(*(Pista + yo) + xo) = 0;
            return false;
        }
        return false;
    }
    TipoTrueFalse Camino2(TipoEntero xo, TipoEntero yo, TipoEntero xf, TipoEntero yf) {
        if (yo == yf && xo == xf) {
            *(*(Pista + yo) + xo) = 9;
            return true;
        }
        if (Seguro(xo, yo) == true) {
            *(*(Pista + yo) + xo) = 9;
            if (Camino2(yo, xo - 1, yf, xf) == true)
                return true;
            if (Camino2(yo + 1, xo, yf, xf) == true)
                return true;
            if (Camino2(yo, xo + 1, yf, xf) == true)
                return true;
            if (Camino2(yo + 1, xo, yf, xf) == true)
                return true;
            *(*(Pista + yo) + xo) = 0;
            return false;
        }
        return false;
    }
    TipoTrueFalse Camino3(TipoEntero xo, TipoEntero yo, TipoEntero xf, TipoEntero yf) {
        if (yo == yf && xo == xf) {
            *(*(Pista + yo) + xo) = 9;
            return true;
        }
        if (Seguro(xo, yo) == true) {
            *(*(Pista + yo) + xo) = 9;
            if (Camino3(yo, xo + 1, yf, xf) == true)
                return true;
            if (Camino3(yo + 1, xo, yf, xf) == true)
                return true;
            if (Camino3(yo, xo - 1, yf, xf) == true)
                return true;
            if (Camino3(yo - 1, xo, yf, xf) == true)
                return true;
            *(*(Pista + yo) + xo) = 0;
            return false;
        }
        return false;
    }
    TipoTrueFalse Camino4(TipoEntero xo, TipoEntero yo, TipoEntero xf, TipoEntero yf) {
        if (yo == yf && xo == xf) {
            *(*(Pista + yo) + xo) = 9;
            return true;
        }
        if (Seguro(xo, yo) == true) {
            *(*(Pista + yo) + xo) = 9;
            if (Camino4(yo, xo - 1, yf, xf) == true)
                return true;
            if (Camino4(yo - 1, xo, yf, xf) == true)
                return true;
            if (Camino4(yo, xo + 1, yf, xf) == true)
                return true;
            if (Camino4(yo + 1, xo, yf, xf) == true)
                return true;
            *(*(Pista + yo) + xo) = 0;
            return false;
        }
        return false;
    }
    TipoEntero getXo(){
        return Xo;
    }
    TipoEntero getXf(){
        return Xf;
    }
    TipoEntero getYo(){
        return Yo;
    }
    TipoEntero getYf(){
        return Yf;
    }
};

#endif //PROYECTO_CARRO_H

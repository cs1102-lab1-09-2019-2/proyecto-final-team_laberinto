#include "carro.h"

class CLaberinto{
  private:
    const entero altura = 10;
    const entero ancho = 10;
    entero Matriz[10][10];
public:
    CLaberinto();
    //CLaberinto(entero _altura, entero _ancho):altura(10),ancho(10){};
    void crearLaberinto();
    entero getAltura();
    entero getAncho();
    void agregarCarro(CCarro _carro);
    void imprimirLaberinto(); 
};



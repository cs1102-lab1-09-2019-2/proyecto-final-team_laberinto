//
// Created by utec on 24/10/19.
//

#include "laberinto.h"

int main() {
  CLaberinto laberinto;
  CCarro carro;

  laberinto.crearLaberinto();
  laberinto.imprimirLaberinto();

  carro.setPosX();
  carro.setPosY();

  laberinto.agregarCarro(carro);
  laberinto.imprimirLaberinto();
  
}

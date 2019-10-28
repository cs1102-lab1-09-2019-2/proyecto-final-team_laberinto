//
// Created by Gabriel Alexsander on 27/10/2019.
//

#include "laberinto.h"

void CLaberinto::crearLaberinto(){
  Matriz[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                    {1,0,0,0,1,0,0,0,0,0},
                    {1,0,1,0,0,0,1,0,1,0},
                    {1,0,1,1,1,0,1,1,1,1},
                    {1,0,0,0,0,0,1,1,1,1},
                    {1,1,1,1,0,1,1,1,1,1},
                    {1,0,0,0,0,0,0,0,1,1},
                    {1,0,1,1,0,1,1,0,1,1},
                    {1,0,1,1,0,0,0,0,0,1},
                    {1,0,1,0,0,1,1,1,0,1}}
}
  
entero CLaberinto::getAltura() {
  return altura;
}
    
entero CLaberinto::getAncho() {
  return ancho;
}


#include "laberinto.h"

void CLaberinto::crearLaberinto(){
  Matriz[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                    {1,0,0,0,1,0,0,0,0,0},
                    {1,0,1,0,0,0,1,0,1,3},
                    {1,0,1,1,1,0,1,1,1,1},
                    {1,0,0,0,0,0,1,1,1,1},
                    {1,1,1,1,0,1,1,1,1,1},
                    {1,0,0,0,0,0,0,0,1,1},
                    {1,0,1,1,0,1,1,0,1,1},
                    {1,0,1,1,0,0,0,0,0,1},
                  {2,0,1,0,0 ,1,1,1,0,1}}
}
  
entero CLaberinto::getAltura() {
  return altura;
}
    
entero CLaberinto::getAncho() {
  return ancho;
}
void CLaberinto::agregarCarro(CCarro _carro) {
  entero x, y;void CLaberinto::imprimirLaberinto(){
  for(entero i = 0; i < altura; i++){
    for(entero j = 0; j < ancho; j++){
      cout<< setw(3)<< Matriz[i][j];
    }
    cout<< endl;
  }
}


entero CLaberinto::getAltura() {
  return altura;
}
    
entero CLaberinto::getAncho() {
  return ancho;
}
  x = _carro.getPosX();
  y = _carro.getPosY();
  do{
    if(Matriz[y][x] == 0) {
      Matriz[y][x] = 2;
    }
    else {
      _carro.setPosX();
      _carro.getPosY();
    }
  }while(Matriz[y][x] != 2);
}
void CLaberinto::imprimirLaberinto(){
  for(entero i = 0; i < altura; i++){
    for(entero j = 0; j < ancho; j++){
      cout<< setw(3)<< Matriz[i][j];
    }
    cout<< endl;
  }
}



entero CLaberinto::getAltura() {
  return altura;
}
    
entero CLaberinto::getAncho() {
  return ancho;
}

//funciones2.cpp
void PosicionVeri(int num){
    while (num < 0 || num > 9){
        cout << "Posicion invalida, por favor ingrese una nueva: "; cin >> num;
    }





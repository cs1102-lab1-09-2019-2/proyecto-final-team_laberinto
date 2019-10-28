#include "funciones.h"

void PosicionVeri(int num){
    while (num < 0 || num > 9){
        cout << "Posicion invalida, por favor ingrese una nueva: "; cin >> num;
    }
}

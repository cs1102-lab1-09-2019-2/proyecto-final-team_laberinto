#include "carro.h"
#include "funciones.h"


int main(){
    string Name;
    int Xo, Yo;
    cout << "Nombre del carro: "; cin >> Name;
    cout << "Posicion inicial en X: "; cin >> Xo; PosicionVeri(Xo);
    cout << "Posicion inicial en Y: "; cin >> Yo; PosicionVeri(Yo);
    Carro Carro1;
    Carro1.setCarro("Rayo Mcqueen", Xo, Yo); //No seta parametros de manera correcta
    cout << "Nombre del Carro: " << Carro1.getName() << endl;
    cout << "Su posicon en X es: " << Carro1.getPx() << endl;
    cout << "Su posicon en Y es: " << Carro1.getPy() << endl;
    return 0;
}


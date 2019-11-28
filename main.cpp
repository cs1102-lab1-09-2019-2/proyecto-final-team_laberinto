#include "Tipos.h"
#include "Funciones.h"
#include "Mapa.h"
#include "Carro.h"


int main(){
    TipoEntero SeleccionadorMapa = 0;
    TipoEntero TamFila = 0;
    Presentacion(SeleccionadorMapa, TamFila);
/*
    TipoCaracter * const AlmacenMapas10 = new TipoCaracter*[5];

    AlmacenMapas10[0]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#1.txt";
    AlmacenMapas10[1]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#2.txt";
    AlmacenMapas10[2]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#3.txt";
    AlmacenMapas10[3]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#4.txt";
    AlmacenMapas10[4]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#5.txt";

    TipoCaracter * const AlmacenMapas15 = new TipoCaracter*[5];

    AlmacenMapas15[0]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#6.txt";
    AlmacenMapas15[1]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#7.txt";
    AlmacenMapas15[2]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#8.txt";
    AlmacenMapas15[3]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#9.txt";
    AlmacenMapas15[4]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#10.txt";

    TipoCaracter * const AlmacenMapas20 = new TipoCaracter*[5];

    AlmacenMapas20[0]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#11.txt";
    AlmacenMapas20[1]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#12.txt";
    AlmacenMapas20[2]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#13.txt";
    AlmacenMapas20[3]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#14.txt";
    AlmacenMapas20[4]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#15.txt";*/

    const TipoCaracter *MapaSeleccionado = "C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#4.txt";
    SeleccionadorMapa -= 1;
    if (TamFila <= 10){
        MapaSeleccionado = "C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#4.txt";
    } else if (TamFila <= 15){
        MapaSeleccionado = "C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#4.txt";
    } else{
        MapaSeleccionado = "C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#4.txt";
    }
    TipoEntero Filas = TamFila, Columnas = TamFila;
    Mapa MapaDeJuego(MapaSeleccionado, Filas, Columnas);
    TipoEntero Xo, Yo, Xf, Yf;
    TipoEntero **Mapa = MapaDeJuego.LeerArchivo();
    ObtenerPosiciones(Xo, Yo, Xf, Yf, Filas, Columnas, Mapa);
    Carro Carro1("Rayo McQueen", Xo, Yo, Xf, Yf, Mapa, Filas, Columnas);
    Carro1.Camino1(Carro1.getXo(),Carro1.getYo(),Carro1.getXf(),Carro1.getYf());
    cout<<Carro1.getPista();
    ImprimirMatriz(Mapa, Filas);





    return 0;
}

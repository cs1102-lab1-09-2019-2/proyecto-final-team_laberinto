#include "Tipos.h"
#include "Funciones.h"
#include "Mapa.h"
#include "Carro.h"


int main(){
    TipoEntero SeleccionadorMapa = 0;
    TipoEntero TamFila = 0;
    Presentacion(SeleccionadorMapa, TamFila);
    const TipoCaracter *AlmacenMapas10 = new TipoCaracter[5];

    AlmacenMapas10[0]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#1.txt";
    AlmacenMapas10[1]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#2.txt";
    AlmacenMapas10[2]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#3.txt";
    AlmacenMapas10[3]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#4.txt";
    AlmacenMapas10[4]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#5.txt";

    const TipoCaracter *AlmacenMapas15 = new TipoCaracter[5];

    AlmacenMapas15[0]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#6.txt";
    AlmacenMapas15[1]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#7.txt";
    AlmacenMapas15[2]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#8.txt";
    AlmacenMapas15[3]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#9.txt";
    AlmacenMapas15[4]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#10.txt";

    const TipoCaracter *AlmacenMapas20 = new TipoCaracter[5];

    AlmacenMapas20[0]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#11.txt";
    AlmacenMapas20[1]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#12.txt";
    AlmacenMapas20[2]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#13.txt";
    AlmacenMapas20[3]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#14.txt";
    AlmacenMapas20[4]="C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#15.txt";

    const TipoCaracter MapaSeleccionado;

    if (TamFila <= 10){
        MapaSeleccionado = AlmacenMapas10[SeleccionadorMapa-1];
    } else if (TamFila <= 15){
        MapaSeleccionado = AlmacenMapas15[SeleccionadorMapa-1];
    } else{
        MapaSeleccionado = AlmacenMapas20[SeleccionadorMapa-1];
    }
    TipoEntero Filas = TamFila, Columnas = TamFila;
    Mapa MapaDeJuego(MapaSeleccionado, Filas, Columnas);
    TipoEntero Xo, Yo, Xf, Yf;
    TipoEntero **Mapa = MapaDeJuego.LeerArchivo();
    DarPosiciones(Xo, Yo, Xf, Yf, Filas, Columnas, Mapa);
    Carro Carro1("Rayo McQueen", Xo, Yo, Xf, Yf, Mapa, Filas, Columnas);
    Carro1.Camino1(Carro1.getXo(),Carro1.getYo(),Carro1.getXf(),Carro1.getYf());
    ImprimirMatriz(Mapa);





    return 0;
}

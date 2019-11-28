#ifndef PROYECTO_MAPA_H
#define PROYECTO_MAPA_H

#include "Tipos.h"

class Mapa{
private:
    const TipoCaracter *Plantilla; //La plantilla hace referencia a la direccion en la que es encuentra el archivo del mapa
    TipoEntero Filas;
    TipoEntero Columnas;
public:
    Mapa(TipoCaracter const * const _Plantilla, TipoEntero _Filas, TipoEntero _Columnas) : Plantilla(_Plantilla), Filas(_Filas), Columnas(_Columnas){}
    ~Mapa(){}
    TipoEntero **LeerArchivo(){
        TipoEntero limite = (Filas * Filas) - 1;
        FILE *Archivo = fopen(Plantilla, "r");
        if (Archivo == nullptr){
            exit(EXIT_FAILURE);
        }
        char Lineas[Filas * Filas];
        fgets(Lineas, limite , Archivo);
        char *Token = strtok(Lineas, " ");
        int **MatrizMapa = new int*[Filas];
        for (int i = 0; i < Filas; i++){
            MatrizMapa[i] = new int[Columnas];
            fgets (Lineas, limite, Archivo);
            Token = strtok(Lineas, " ");
            MatrizMapa[i][0] = atoi(Token);
            for (int j = 1; j < Columnas; j++){
                Token = strtok(nullptr, " ");
                MatrizMapa[i][j] = atoi(Token);
            }
        }
        fclose(Archivo);
        return MatrizMapa;
    }
    TipoEntero getFilas(){
        return Filas;
    }
    TipoEntero getColumnas(){
        return Columnas;
    }
};

#endif //PROYECTO_MAPA_H

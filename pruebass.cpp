#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int** LeerMatriz(char const * const filename, int &Filas, int &Columnas) {
    FILE *fp = fopen(filename, "r");
    if (fp == nullptr){
        exit(EXIT_FAILURE);
    }
    char linea[225];
    fgets(linea, 224, fp);
    char *token = strtok(linea, " ");
    Filas = atoi(token);
    token = strtok(nullptr, " ");
    Columnas = atoi(token);
    int **matriz = new int*[Filas];
    for (int i = 0; i < Filas; i++){
        matriz[i] = new int[Columnas];
        fgets (linea, 224, fp);
        token = strtok(linea, " ");
        matriz[i][0] = atoi(token);
        for (int j = 1; j < Columnas; j++){
            token = strtok(nullptr, " ");
            matriz[i][j] = atoi(token);
        }
    }
    fclose(fp);
    return matriz;
}

void ImprimirMatriz(int **Matriz){
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            if (*(*(Matriz + i)+ j) == 1){
                cout << "#" << " ";
            }else if ((*(*(Matriz + i)+ j) == 0)){
                cout << " " << " ";
            }else if ((*(*(Matriz + i)+ j) == 2)){
                cout << "i" << " ";
            }else if ((*(*(Matriz + i)+ j) == 3)){
                cout << "f" << " ";
            }else if ((*(*(Matriz + i)+ j) == 9)){
                cout << ">" << " ";
            }
        }
        cout << endl;
    }
}

void HallarPosiCarro (int **Matriz, int Filas, int Columnas, int &x, int &y){
    for (int i = 0; i < Filas; i++){
        for (int j = 0; j < Columnas; j++){
            if (*(*(Matriz + i)+ j) == 2){
                y = i;
                x = j;
            }
        }
    }
}

void HallarPosiMeta (int **Matriz, int Filas, int Columnas, int &x, int &y){
    for (int i = 0; i < Filas; i++){
        for (int j = 0; j < Columnas; j++){
            if (*(*(Matriz + i)+ j) == 3){
                y = i;
                x = j;
            }
        }
    }
}

bool seguro(int **Matriz, int Filas, int Columnas, int xo, int yo){
    if (xo >= 0 && xo < Columnas && yo >= 0 && yo < Filas && *(*(Matriz + yo)+ xo) == 0){
        return true;
    }else{
        return false;
    }
}

bool camino(int ** mat, int N, int M, int y, int x, int finf, int finc) {
    if (y == finf && x == finc) {
        *(*(mat + y) + x) = 9;
        return true;
    }
    if (seguro(mat, N, M, x, y) == true) {
        *(*(mat + y) + x) = 9;
        if (camino(mat, N, M, y, x + 1, finf, finc) == true)
            return true;
        if (camino(mat, N, M, y + 1, x, finf, finc) == true)
            return true;
        if (camino(mat, N, M, y, x - 1, finf, finc) == true)
            return true;
        if (camino(mat, N, M, y - 1, x, finf, finc) == true)
            return true;
        *(*(mat + y) + x) = 0;
        return false;
    }
    return false;
}

int main(){
    int TamFila = 0, TamCol = 0;
    int Xo = 0, Yo = 0, Xf = 0, Yf = 0;
    const char* n = "C:\\Users\\Gabriel Alexsander\\Desktop\\MapasPOO\\MAPA#8.txt";
    int **MatrizMapa = LeerMatriz(n, TamFila, TamCol); //Deben poner la direccion en donde este el mapa
    cout << "LABERINTO++ \n";
    cout << "# -> Pared \n" << "Espacio -> Camino libre \n" << "0 -> Punto de inicio \n" << "1 -> Meta \n \n";
    cout << "Mapa #1: \n";
    ImprimirMatriz(MatrizMapa);
    HallarPosiCarro(MatrizMapa, TamFila, TamCol, Xo, Yo);
    HallarPosiMeta(MatrizMapa, TamFila, TamCol, Xf, Yf);
    MatrizMapa[Yo][Xo] = 0;
    camino(MatrizMapa, TamFila, TamCol, Yo, Xo, Yf, Xf);
    cout << endl << endl;
    cout << "Mapa #1 SOLUCION: \n";
    ImprimirMatriz(MatrizMapa);
}
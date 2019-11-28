#include "Funciones.h"
#include "Tipos.h"

TipoTrueFalse Eleccion1(TipoEntero &TamFila){
    TipoTrueFalse Rpta = false;
    TipoEntero Respuesta;
    do{
        cout << "Por favor, elija el tamaño del laberinto (10, 15 o 20): ";
        cin >> TamFila;
    }while(TamFila != 10 && TamFila != 15 && TamFila != 20);
    cout << "\n Ahora escoge una de estas opciones: \n" <<
    "1- Escoger tu un mapa \n" <<
    "2- Utilizar mapa al azar \n" <<
    "¿Que eliges? (responde con el numero de la opccion) " <<
    endl;
    cin >> Respuesta;
    switch (Respuesta){
        case 1:
            Rpta = true;
            cout << "Por favor escriba un numero entre 1 y 10... \n";
        case 2:
            cout << "Se eligira un mapa al azar enseguida \n";
        default:
            cout << "Opcion invalida, se eligira mapa al azar en su lugar \n";
    }
    return Rpta;
}

void ValidarNumero(TipoEntero &Num){
    if (Num > 5 || Num < 1){
        while (Num > 5 || Num < 1){
            cout << "Valor asignado fuera del limite, por favor volver a intentar: "; cin >> Num;
        }
    }
}

TipoEntero Eleccion2(){
    TipoEntero Numero;
    cout << "Numero entre 1 a 5: "; cin >> Numero;
    ValidarNumero(Numero);
    return Numero;
}

void Presentacion(TipoEntero Seleccionador, TipoEntero TamFila){
    cout << "                       __\n" <<
         "                     .'  '.\n" <<
         "                 _.-'/  |  \\\n" <<
         "    ,        _.-\"  ,|  /  0 `-.\n" <<
         "    |\\    .-\"       `--\"\"-.__.'=====================-,\n" <<
         "    \\ '-'`        .___.--._)=========================|\n" <<
         "     \\            .'      |                          |\n" <<
         "      |     /,_.-'        |      PROYECTO FINAL      |\n" <<
         "    _/   _.'(             |           POO 1          |\n" <<
         "   /  ,-' \\  \\            |        LABERINTO++       |\n" <<
         "   \\  \\    `-'            |                          |\n" <<
         "    `-'                   '--------------------------'";
    cout << endl << endl;
    cout << "INTEGRANTES: \n" <<
    "- Amy Zevallos... 100% \n" <<
    "- Hillary Holguin... 100% \n" <<
    "- Gabriel Espinoza ... 100% \n\n";
    cout << "  Bienvenido al planeador de rutas v1.5..."<< endl
        << "- - - - - - - - - - - - - - - - - - - - - "<< endl
        << "o Podra elegir entre 15 laberintos diferentes"<< endl
        << "o Eligira tambien la posicion inicial y final"<< endl
        << "o El programa buscara la mejor ruta"<< endl
        << "- - - - - - - - - - - - - - - - - - - - - - - -"<<endl
        << "Reglas"<< endl
        << "o El # representa un obstaculo y el " " un espacio libre"<< endl
        << "o Las posiciones inicial y final solo pueden estar en espacios libres (0)"<< endl<< endl;
    if (Eleccion1(TamFila) == true){
        Seleccionador = Eleccion2();
    } else {
        Seleccionador = rand()%5;
    }
}
/*
void ValidacionPosiciones( int Xo,  int Yo,  int Xf,  int Yf,  int TamFila,  int TamCol, int**Laberinto) {
    do {
        do {
            cout << "Ingrese la posicion inicial (Xo, Yo) separadas por un espacio: " << endl;
            cin >> Xo >> Yo;
        } while (Xo > TamCol || Yo > TamFila);
    } while (Laberinto[Yo][Xo] != 0);
    do {
        do {
            cout << "Ingrese la posicion final (Xf, Yf) separadas por un espacio: " << endl;
            cin >> Xf >> Yf;
        } while (Xf > TamCol || Yf > TamFila);
    } while (Laberinto[Yf][Xf] != 0);
}*/
void ImprimirMatriz(int **Matriz, int Filas){
    for (int i = 0; i < Filas; i++){
        for (int j = 0; j < Filas; j++){
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

void ObtenerPosiciones(int Xo, int Yo, int Xf, int Yf, int Filas, int Columnas, int **Mapa) {
    for (int i = 0; i < Filas; i++) {
        for (int j = 0; j < Filas; j++) {
            if (*(*(Mapa + i) + j) == 3) {
                Xf = j;
                Yf = i;
            }else if (*(*(Mapa + i) + j) == 2) {
                Xo = j;
                Yo = i;
            }
        }
    }
}







#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

struct Coordenada {
    int fila;
    int columna;
};

// imorimir tablero
void tablerovisible(const vector<vector<char>>& tablero) {
    for (const auto& fila : tablero) {
        for (const auto& celda : fila) {
            cout << celda << " ";
        }
        cout << endl;
    }
}

// colocar las minas aleatorias
void colocarminas(vector<vector<char>>& tablero, int nminas) {
    srand(time(NULL)); 
    int contador = 0;
    while (contador < nminas) {
        int fila = rand() % tablero.size();
        int columna = rand() % tablero[0].size();
        if (tablero[fila][columna] != '*') {
            tablero[fila][columna] = '*';
            contador++;
        }
    }
}

// contar minas del tablero 
int contarminas(const vector<vector<char>>& tablero, int fila, int columna) {
    int contarminas = 0;
    int filas = tablero.size();
    int columnas = tablero[0].size();

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int filanueva = fila + i;
            int columnanueva = columna + j;
            if (filanueva >= 0 && filanueva < filas && columnanueva >= 0 && columnanueva < columnas) {
                if (tablero[filanueva][columnanueva] == '*') {
                    contarminas++;
                }
            }
        }
    }

    return contarminas;
}

// revelar una celda en el tablero 
void vercelda(vector<vector<char>>& tablero, vector<vector<bool>>& tablerojuego, int fila, int columna) {
    int filas = tablero.size();
    int columnas = tablero[0].size();

    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas && !tablerojuego[fila][columna]) {
        tablerojuego[fila][columna] = true;

        if (tablero[fila][columna] == '0') {
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    vercelda(tablero, tablerojuego, fila + i, columna + j);
                }
            }
        }
    }
}

// niveles
void jugarminas(int filas, int columnas, int numMinas) {
    vector<vector<char>> tablero(filas, vector<char>(columnas, '0'));
    vector<vector<bool>> tablerojuego(filas, vector<bool>(columnas, false));
    colocarminas(tablero, numMinas);

    int celdasn = filas * columnas - numMinas;
    bool perdio = false;

    while (!perdio) {
        tablerovisible(tablero);
        cout << "Ingrese la fila y columna de la celda a revelar (separelo con espacio): ";
        int fila, columna;
        cin >> fila >> columna;

        if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas && !tablerojuego[fila][columna]) {
            if (tablero[fila][columna] == '#') {
                cout << "P E R D I S T E :(" << endl;
                perdio = true;
            }
            else {
                int minasm = contarminas(tablero, fila, columna);
                tablero[fila][columna] = '.' + minasm;
                celdasn--;
                tablerojuego[fila][columna] = true;
                if (celdasn == 0) {
                    cout << "G A N A S T E!!! :)" << endl;
                    perdio = true;
                }
            }
        }
        else {
            cout << "La celda ingresada no es valida, ingrese otro numero" << endl;
        }
    }
}

int opcion, nivel;
int nivelopcion() {
    cout << "Ingrese que desea realizar" << endl; 
    cout << "1. Reglas" << endl << "2. Niveles" << endl; 
    cin >> opcion; 
    switch (opcion)
    {
    case 1:
        cout << " *** R E G L A S ***"
        cout << "Algunas casillas tienen un numero, el cual indica la cantidad de minas que hay en las casillas" << endl;
        cout << "Si una casilla tiene el numero 3, significa que de las ocho casillas que hay" << endl;
        cout << "(si no es una esquina o borde) hay 3 ocn minas y 5 sin ellas. Si se descubre una" << endl;
        cout << "casilla sin numero indica que ninguna de las casillas vecinas tiene mina y estas se descubren automaticamente" << endl;
        cout << "Si se descubre una casilla conuna mina, pierde el juego" << endl;
        cout << "Se puede poner una marca en las casillas en las que el jugador piensa que hay minas para ayudar a descubrir las que estan cerca" << endl;
        system("pasue");
        break;
    case 2:

        cout << "Seleccione el nivel que desea jugar: " << endl;
        cout << "1. Facil" << endl;
        cout << "2. Intermedio" << endl;
        cout << "3. Dificil" << endl;
        cout << "Ingrese el número del nivel: ";
        cin >> nivel;

        int main()
        {

        int nivel = nivelopcion();
        int filas, columnas, minastotal;

        if (nivel == 1) {
            filas = 10;
            columnas = 10;
            minastotal = 10;
        }

        if (nivel == 2)
        {
            filas = 16;
            columnas = 16;
            minastotal = 40;
        }
        if (nivel == 3)
        {
            filas = 20;
            columnas = 20;
            minastotal = 70;
        }


        jugarminas(fila, columna, minastotal);

        return 0;

    }
        
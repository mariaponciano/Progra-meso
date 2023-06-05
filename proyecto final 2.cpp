// Proyecto final.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
#include <vector> // maneja arreglos con la capacidad de manejar su tamaño de forma automatica 
using namespace std;
const int principiante = 0;
const int intermedio = 1;
const int avanzado = 2;
const int ladomaximo = 30;

int filas, columnas, minas;

// void para controlar la dificultad del juego
void dificultades()
{

	int nivel;
	cout << endl;
	cout << "***** B I E N V E N I D O S    A L    B U S C A M I N A S *****" << endl;
	cout << "Eliga que desea realizar" << endl;
	cout << "1. Reglas" << endl << "2. Niveles" << endl;
	cin >> nivel;
	switch (nivel)
	{
	case 1:
		cout << "***** R E G L A S *****" << endl;
		cout << "Algunas casillas tienen un numero, el cual indica la cantidad de minas que hay en las casillas" << endl;
		cout << "Si una casilla tiene el numero 3, significa que de las ocho casillas que hay" << endl;
		cout << "(si no es una esquina o borde) hay 3 ocn minas y 5 sin ellas. Si se descubre una" << endl;
		cout << "casilla sin numero indica que ninguna de las casillas vecinas tiene mina y estas se descubren automaticamente" << endl;
		cout << "Si se descubre una casilla conuna mina, pierde el juego" << endl;
		cout << "Se puede poner una marca en las casillas en las que el jugador piensa que hay minas para ayudar a descubrir las que estan cerca" << endl;
		system("pasue");
		break;
	case 2:
		cout << " * **** N I V E L E S * **** " << endl;
		cout << "Presione 0 para principiante" << endl;
		cout << "Presione 1 para intermedio " << endl;
		cout << "Presione 2 para avanzado" << endl;
		cin >> nivel;


		if (nivel == principiante)
		{
			filas = 6;
			columnas = 6;
			minas = 8;
		}

		if (nivel == intermedio)
		{
			filas = 10;
			columnas = 10;
			minas = 30;

		}

		if (nivel == avanzado)
		{
			filas = 13;
			columnas = 20;
			minas = 60;
		}

		return;
	}

}

// Esta funcion lo que hace es limpiar el tablero del juego 
void limpiartablero(char minastablero[][ladomaximo], char tablerojuego[][ladomaximo]) {
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; j++)
			tablerojuego[i][j] = minastablero[i][j] = '.';
	return;
}

//Colocar las minas en el juego de forma aleatoria en el tablero
void colocarminas(char minatablero[][ladomaximo], int minas) {
	int colocar = 0;
	while (colocar < minas)
	{
		int aleatorio = rand() % (filas * columnas);
		int fila = aleatorio / columnas;
		int columna = aleatorio % filas;
		if (minatablero[fila][columna] == '#') continue;
		minatablero[fila][columna] = '#';
		colocar++;

	}
	return;
}

	// reemplaza las minas en el tablero 
void reemplazarminas(int fila, int columna, char minatablero[][ladomaximo])
{
	colocarminas(minatablero, 1); //Agrega una nueva mina 
	minatablero[fila][columna] = '.';
	return;
}

char indexToChar(int index)
{
	if (index < 10) {
		return index + '0';
	}
	else
		return 'a' + (index - 10);
}

int charToIndex(char ch) {
	if (ch <= '9')
		return ch - '0';
	else
		return (ch - 'a') + 10;

}

// visible el tablero 
void tablerovisible(char tablerojuego[][ladomaximo])
{
	//linea superior
	cout << "    ";
	for (int i = 0; i < columnas; i++)
	{
		cout << indexToChar(i) << '  ';
		cout << endl << endl;
	}
	//filas 
	for (int i = 0; i < filas; i++)
	{
		cout << indexToChar(i) << '  ';
		for (int j = 0; j < columnas; j++)
		{
			cout << tablerojuego[i][j] << "  ";
			cout << "  " << indexToChar(i);
			cout << endl;
		}
	}
	//espacios 
	cout << endl << "   ";
	for (int i = 0; i < columnas; i++)
	{
		cout << indexToChar(i) << '  ';
		cout << endl;

		return;
	}
}
	// columnas y filas 
bool valido(int fila, int columna)
{
	return (fila >= 0) && (fila < filas) && (columna>= 0) && (columna < columnas);
}

	//minas #
	bool esmina(int fila, int columna, char borde[][ladomaximo])
	{
		return (borde[fila][columna] == '#');

	}
	//retornar todas las filas y columnas del vector
	vector < pair <int, int> > casillasvecinas(int fila, int columna)
	{
		vector < pair  < int, int>  > vecinas;
		for (int distancia = -1; distancia <= 1; distancia++)
			for (int dy = -1; dy <= 1; dy++)
				if (distancia != 0 || dy != 0)
					if (valido(fila + distancia, columna + dy))
						vecinas.push_back(make_pair(fila + distancia, columna + dy));

						return vecinas;
	}
	// contae el numero de minas en las celdas, registra los numeros para que no se repitan en el tablero 
	int contarminas(int fila, int columna, char minatablero[][ladomaximo])
	{
		vector < pair <int, int> > vecinas = casillasvecinas(fila, columna);
			int contar = 0;
			for (int i = 0; i < vecinas.size(); i++)
				if (esmina(vecinas[i].first, vecinas[i].second, minatablero))
					contar++;

	    return contar;
	}
	// funcionalidad del juego 
	void descubrirtablero(char tablerojuego[][ladomaximo], char minatablero[][ladomaximo], int fila, int columna, int nmovimiento)
	{
		(nmovimiento)++;
		int contar = contarminas(fila, columna, minatablero);
		tablerojuego[fila][columna] = contar + '0';
		//si el numero de celda es 0, enseñar todas las celdas vecinas
		if (contar == 0)
		{
			vector < pair < int, int> > vecinas = casillasvecinas(fila, columna);
			for (int i = 0; i < vecinas.size(); i++)
				if (tablerojuego[vecinas[i].first][vecinas[i].second] == '.')
					descubrirtablero(tablerojuego, minatablero, vecinas[i].first, vecinas[i].second, nmovimiento);

		}
		return;
	}

	//logica del juego 
	void marcarminas(char tablerojuego[][ladomaximo], char minatablero[][ladomaximo], bool ganado)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				if (tablerojuego[i][j] == '.' && minatablero[i][j] == '#')
				{

					if (ganado)
					{
						tablerojuego[i][j] = ' F ';
					}
					else
					{
						tablerojuego[i][j] = '#';
					}



				}
			}
		}
	}

	void jugarminas()
	{
		char minatablero[ladomaximo][ladomaximo], tablerojuego[ladomaximo][ladomaximo];
		int movimientostotales = filas * columnas - minas;
		int banderas = minas;
		limpiartablero(minatablero, tablerojuego);
		colocarminas(minatablero, minas);
		int movimientos = 0;
		bool perdio = false;

		while (!perdio)
		{
			tablerovisible(tablerojuego);
			cout << banderas << "banderas a la izquierda" << endl;

			char x, y, z;
			cout << "Ingrese su movimiento, ingrese el numero de fila y de columna ->";
			cin >> x >> y >> z;
			cout << endl;
			int fila = charToIndex(x);
			int columna = charToIndex(y);
			if (movimientos == 0)
				if (esmina(fila, columna, minatablero))
					reemplazarminas(fila, columna, minatablero);

			if (z == 's')
			{
				if (tablerojuego[fila][columna] == '.' && minatablero[fila][columna] == '.')
					descubrirtablero(tablerojuego, minatablero, fila, columna, movimientos);
				if (movimientos == movimientostotales)
				{
					marcarminas(tablerojuego, minatablero, true);
					tablerovisible(tablerojuego);
					cout << endl << "G A N A S T E !!! " << endl;
					perdio == true;

				}


			}

			else if (tablerojuego[fila][columna] == '.' && minatablero[fila][columna] == '#')
			{
				tablerojuego[fila][columna] = '#';
				marcarminas(tablerojuego, minatablero, false);
				tablerovisible(tablerojuego);
				cout << " P E R D I S T E :( " << endl;
				perdio = true;

			}

			else
			{
				cout << "Movimiento no valido";
				if (tablerojuego[fila][columna] == 'f')
					cout << "Ya existe una bandera, utilice 'f' para desactuvar la bandera ";
				else
					cout << "La celda ya es un numero";
				cout << endl;
			}

			if (z == 'f')
			{
				if (tablerojuego[fila][columna] == '.')
				{
					if (banderas != 0)
					{
						tablerojuego[fila][columna] == 'f';
						banderas--;
					}
					else

					{
						cout << "¡Demasiadas banderas!" << endl;

					}
				}

				else if (tablerojuego[fila][columna] == 'f')
				{
					tablerojuego[fila][columna] == '.';
					banderas++;

				}
				else
				{
					cout << "Movimiento no valido, la celda es un numero" << endl;

				}

			}
		}
		return;
	}	
		

	

	int main()
	{
		srand(time(NULL));
		dificultades();
		jugarminas();
		return 0;
	}

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
void dificultad()
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

		return 0;
	}
	return 0;
		void limpiartablero(char minastablero, char tablerojuego);
}

	// Esta funcion lo que hace es limpiar el tablero del juego 
void limpiartablero(char minastablero[][ladomaximo], char tablerojuego[][ladomaximo]) {
	for (int i = 0; i < filas; i++)
         for (int j = 0; j < columnas; j++)
				tablerojuego[i][j] = minastablero[i][j] = '.';
		return;
	}

	//Colocar las minas en el juego de forma aleatoria en el tablero
	void colocarminas (char minatablero[][ladomaximo], int minas) {
		int colocar = 0; 
		while ( colocar < minas)
		{
			int aleatorio = rand() % (filas * columnas); 
			int filas = aleatorio; 
			int columnas = aleatorio % filas; 
			if (minatablero[filas][columnas] == '#') continue; 
			minatablero[filas] [columnas] = '#';
			colocar++;
		
		}
		return; 

		// reemplaza las minas en el tablero 
	}
	void reemplazarminas(int fila, int columna, char minatablero[][ladomaximo]) {
		colocarminas(minatablero, 1); //Agrega una nueva mina 
		minatablero[fila][columna] = '.'; 
		return; 
	}

	char indexToChar(int index) {
		if (index < 10) {
			return index + '0';
		}
	}
	int charToIndex(char ch) {
		if (ch <= '9')
			return ch - '0';
		else
			return (ch - '0') + 10; 

	}
//Esta funcion hace visible al tablero 
void tablerovisible(char tablerojuego[][ladomaximo]) {
	//linea superior
	cout << "   "; 
	for (int i = 0; i < columnas; i++)
	{
		cout << indexToChar(i) << '  '; 
		cout << endl << endl;
	}
	//filas 
	for (int i = 0; i < filas; i++)
	{
		cout << indexToChar(i) << '  ';
		for (int i = 0; i < columnas; i++)
		{
			cout << tablerojuego[i][j] << "  ";
			cout << "  " << indexToChar(i);
			cout << endl;
		}
	}
		//espacios 
		cout << endl;
		for (int i = 0; i < columnas; i++)
		{
			cout << indexToChar(i) << '  '; 
			cout << endl; 

			return;
		}



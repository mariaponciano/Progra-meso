// Primer ejercicio go to xy.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
	gotoxy (1, 5);
	//primera linea del marco
	for (int i =20; i <=40; i++)
	{
		gotoxy(20, i);
		cout << "-";
	}
	// Segunda linea del marco
	for (int i = 20; i <= 40; i++)
	{
		gotoxy(50, i);
		cout << "-";
	}
	//Tercer linea del marco
	for (int i = 20; i <= 50; i++)
	{
		gotoxy(i, 20);
		cout << "-";
	}
	// Cuarta linea del marco
	for (int i = 20; i <= 50; i++)
	{
		gotoxy(i, 40);
		cout << "-";
	}
	// primera linea de M
	for (int i = 25; i <= 30; i++)
	{
		gotoxy(30, i);
		cout << "+";
	}
	//Segunda linead de M
	for (int i = 25; i <= 30; i++)
	{
		gotoxy(40, i);
		cout << "+";
	}
	// Primera diagonal de M
	
	gotoxy(31, 25);
	cout << "+";
	gotoxy(32, 26);
	cout << "+";
	gotoxy(33, 27);
	cout << "+";
	gotoxy(34, 28);
	cout << "+";
	gotoxy(40, 31);
	cout << "+";
	gotoxy(50, 50);
}


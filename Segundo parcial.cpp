// Segundo parcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	char volver;
	int opcion; 
	int dia= 0, mes= 0, anyo= 0, edad= 0; 
	int anyoac= 2023, mesac=4;
	system("cls");
	cout << "Bienvenidos al programa" << endl; 
	cout << "1. Calcular su edad" << endl; 
	cout << "2. Calculo de anyo bisiesto" << endl; 
	cout << "3. lados de un triangulo" << endl; 
	cout << "4. Tablas de multiplicar" << endl; 
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "Ingrese su fecha de nacimiento" << endl;
		cout << "Ingrese dia" << endl; 
		cin >> dia; 
		cout << "Ingrese mes" << endl; 
		cin >> mes; 
		cout << "Ingrese anyo" << endl; 
		cin >> anyo;
		edad = anyoac - anyo;
			cout << "Su edad es de   " << edad << endl;
		break;

	}


}



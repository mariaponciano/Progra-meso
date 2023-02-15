// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int numero1, numero2, resta; 
	cout << "ingrese primer ";
	cin >> numero1;
		cout << "ingrese segundo valor  ";
	cin >> numero2;
		resta = numero1 - numero2;
	cout << "la resta es " << resta;
	
	if (resta < 0)
	{
		cout << "el numero es negativo";
	}
	else 
	{ 
	cout << "el numero es positivo";
		}
}


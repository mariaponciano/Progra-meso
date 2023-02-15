// ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int numero1, numero2, multiplicacion;
	cout << "ingrese primer valor ";
	cin >> numero1;
	cout << "ingrese segundo valor  ";
	cin >> numero2;
	multiplicacion = numero1 * numero2;
	cout << "la multiplicacion es " << multiplicacion << endl;

	if (multiplicacion < 100)
	{
		cout << "el numero es menor a 100";
	}
	else
	{
		cout << "el numero es mayor a 100";
	}
}
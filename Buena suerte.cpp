// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int n; 
	cout << "Ingrese un numero del 1 al 10  " << endl; 
	cin >> n; 
	if (n == 7) 
	{
		cout << "No tienes buena suerte" << endl; 
	}
	else if(n != 7) 
	{
		cout << "Tienes la buena suerte" << endl; 
	}
	if (n > 10) 
	{
		cout << "El numero es mayor al rango requerido, vuelva a ingresar numero" << endl; 
	}
	system("pause"); 
}


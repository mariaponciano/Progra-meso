// Segundo parcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	int opcion, opcion2;
	int dia = 0, mes = 0, anyo = 0, edad = 0,n = 0, n1, n2, multi;
	int anyoac = 2023, mesac = 4, hipotenusa, opuesto, adyacente, resultado;
	cout << "Bienvenidos al programa" << endl;
	cout << "1. Calcular su edad" << endl;
	cout << "2. Calculo de anyo bisiesto" << endl;
	cout << "3. Lados de un triangulo" << endl;
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
		if (mes > 12)
		{
			cout << "EL mes ingresado no existe" << endl;
		}
		if (anyo > anyoac)
		{
			cout << "El anyo ingresado no existe" << endl;
		}
		cout << "Su edad es de   " << edad << endl;
		cout << "Desea volver al inicio" << endl;
		cout << "1: si, 2: no" << endl;
		system("pause");
		system("cls");
		return main();
		break;

	case 2:
		cout << "Ingrese un anyo" << endl;
		cin >> n;
		if (n % 4 == 0)
		{
			cout << "El anyo es bisiesto" << endl;
		}
		else if (n % 4 == 1)
		{
			cout << "El anyo no es bisiesto";
		}
		cout << "Desea volver al inicio" << endl;
		cout << "1: si, 2: no" << endl;
		system("pause");
		system("cls");
		return main();
		break;

	case 3:
		cout << "Ingrese el opuesto" << endl;
		cin >> opuesto;
		cout << "Ingrese adyacente" << endl;
		cin >> adyacente;
		cout << "Ingrese hipotenusa" << endl;
		cin >> hipotenusa;
		system("pause");

		cout << "1.Hayar la suma del opuesto y adyacente" << endl;
		cout << "2. Hayar la suma del opuesto y la hipotenusa" << endl;
		cout << "3. Hayar la suma de la hipotenusa y el adyacente" << endl;
		cin >> opcion2;
		switch (opcion2)
		{
		case 1:
			resultado = opuesto + adyacente;
			if (resultado >= hipotenusa)
			{
				cout << "El triangulo tiene mal un dato";

			}
			else
			{
				cout << "El triangulo esta bien";
			}
			break;

		case 2:
			resultado = opuesto + hipotenusa;
			if (resultado >= adyacente)
			{
				cout << "El triangulo tiene mal un dato" << endl;
			}
			else
			{
				cout << "El trinagulo esta bien" << endl;
			}
			break;

		case 3:
			resultado = hipotenusa + adyacente;
			if (resultado >= opuesto)
			{
				cout << "El triangulo tiene mal un dato" << endl;
			}
			else
			{
				cout << "El triangulo esta bien" << endl;
			}
		}
		cout << "Desea volver al inicio" << endl;
		cout << "1: si, 2: no" << endl;
		system("pause");
		system("cls");
		return main();
	default:
		break;
	case 4: 
		cout << "Ingrese un numero" << endl; 
		cin >> n2; 
		if (n2 % 2 == 0) {
			cout << "El numero es par " << endl; 

			for (int multi = 0; multi < 21; multi++)
			{
				cout << n2  << " x  " << multi << " = " << n2 * multi << endl;
			}
		}
		else
		{
			cout << "El numero es impar" << endl;
			for (int multi = 0; multi < 16; multi++)
			{
				cout << n2 << " x " << multi << " = " << n2 * multi << endl;
			}
	
		}
		cout << "Desea volver al inicio" << endl;
		cout << "1: si, 2: no" << endl;
		system("pause");
		system("cls");
		return main();
		break;
	
	}
	

	
}

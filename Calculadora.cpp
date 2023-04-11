// Calculadora de triangulos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main (int argc, char *argv [])
{
	int opcion = 0; 
	double anguloradianes;
	cout << "Calculadra de triangulos rectangulos" << endl;
	cout << "1. Encontrar hipotenusa" << endl;
	cout << "2. Encontrar adyacnte" << endl;
	cout << "3. Econtrar opuesto" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		double dato, angulo;
		cout << "Ingrese primer dato: " << endl;
		cin >> dato;
		cout << "Ingrese el angulo (degradianes): " << endl;
		cin >> angulo;
		 anguloradianes = ((angulo * 3.1416) / 180);
		//Calcular hípotenusa
		double hipotenusa;
		hipotenusa = (dato / cos(anguloradianes));
		cout << "La hipotenusa es:  " << hipotenusa << endl;
		break;

	case 2:
		double dato2, angulo2;
		cout << "Ingrese primer dato: " << endl;
		cin >> dato2;
		cout << "Ingrese el angulo (degradianes): " << endl;
		cin >> angulo2;
		angulo2 = ((angulo2 * 3.1416) / 180);
		//calcular adyacente
		double adyacente;
		adyacente = (dato2 / tan(angulo2));
		cout << "El adyacente es:  " << adyacente << endl;
		break;

	}
	
}



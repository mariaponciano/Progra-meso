// Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace  std;
int main()
{
	int valor1, valor2, total, billete5, billete10, billete20, billete50, billete100, monedas;
	cout << "Ingrese cuanto dinero tiene" << endl;
	cin >> valor1;
	cout << "Ingrese el valor del producto " << endl; 
	cin >> valor2; 
	if (total= valor1 - valor2)
	{
		cout << "El vuelto es de   " << total << endl; 
	}
	billete100 = total / 100;
	cout << "Billete (s) de Q.100.00 son  " << billete100 << endl; 
	billete100 = total %= 100; 
	billete50 = billete100 / 50;
	cout << "Billete (s) de Q 50 son  " << billete50 << endl; 
	billete50 = billete100 %= 50; 
	billete20 = billete50 / 20; 
	cout << "Billete (s) de Q.20.00 son  " << billete20 << endl; 
	billete20 = billete50 %= 20;
	billete10 = billete20 / 10;
	cout << "Billete (s) de Q.10.00 son  " << billete10 << endl;
	billete10 = billete20 %= 10;
	billete5 = billete10 / 5;
	cout << "Billete (s) de Q.5.00 son  " << billete5 << endl;
	billete5 = billete10 %= 5;
	monedas = billete5 / 1;
	cout << "moneda (s) de Q.1.00 son  " << monedas << endl;
	system("pause"); 
}



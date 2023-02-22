// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
    int n1, n2; 
    cout << "Ingrese Primer numero" << endl; 
    cin >> n1; 
    cout << "Ingres segundo numero " << endl; 
    cin >> n2; 
    if (n1 % n2 == 0) 
    {
        cout << "La division es exacta" << endl;
    }
    else if (n1 % n2 != 0) 
    {
        cout << "La divison no es exacta";
    }
}



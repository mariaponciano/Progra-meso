// ejercicio 1 reto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
    int n1, n2; 
    cout << "Ingrese primer valor " << endl; 
    cin >> n1; 
    cout << "Ingrese segundo valor  " << endl; 
    cin >> n2; 
    
    if (n1 == n2){
        cout << "Los numeros no pueden ser igual " << endl;

    }

    for (n1 >= 0; n1 <= n2; n1++)
    {
        cout << "El rango de numeros es  " << n1 << endl;
    }
}



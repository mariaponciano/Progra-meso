// Ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
    int n, n2, n3; 
    cout << "Ingrese primer numero  " << endl; 
    cin >> n; 
    cout << "Ingrese segundo numero  " << endl; 
    cin >> n2; 
    cout << "Ingrese tercer numero  " << endl; 
    cin >> n3;
    if (n >n2 && n>n3)
    {
        cout << "El numero mayor es   " << n;
    }
    else if (n2 > n && n2 > n3) 
    {
        cout << "El numero mayor es  " << n2;
    }
    else if (n3 > n && n3 > n2)
    {
        cout << "El numero mayor es  " << n3;
    }
}



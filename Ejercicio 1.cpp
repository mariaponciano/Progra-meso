// Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
    int x; 
    cout << "Ingrese la cantidad de dinero gastado durante este mes   " << endl;
    cin >> x; 
    if (x > 1500) {
        cout << " Su gasto es considerable " << endl;
    }
    else if (x == 1500) {
        cout << " Su gasto es moderado" << endl;
    }
if (x < 1500) {
        cout << "Su gasto es menor" << endl; 
    }
    system("pause"); 
}

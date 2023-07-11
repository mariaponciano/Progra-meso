// Ejercicios para ordenar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void burbuja(int arr[], int n) {
	bool cambio;
	int temporal;
	for (int i = 0; i < n - 1; i++) {
		cambio = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				cambio = true;
			}
		}
		if (!cambio) {
			break;
		}
	}
}
void burbuja2(int arr[], int n) {
	bool cambio;
	int temporal;
	for (int i = 0; i < n - 1; i++) {
		cambio = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				cambio = true;
			}
		}
		if (!cambio) {
			break;
		}
	}
}
void burbuja3(int arr[], int n) {

}

int main() {
	int arreglo[35]{};
	
	for (int lista = 0; lista < 35; lista++)
	{
		arreglo[lista] = rand() % 100;
	}
	int n = sizeof(arreglo) / sizeof(arreglo[0]);
	burbuja(arreglo, n);
	cout << "Array ordenado: ";
	for (int i = 0; i < n; i++) {
		cout << arreglo[i] << " ";

	}
	cout << endl;
	burbuja2(arreglo, n);
	cout << "Array ordenado: ";
	for (int i = 0; i < n; i++) {
		cout << arreglo[i] << " ";
	}
	cout << endl;
	cout << "La transaccion mas grande es:  " << arreglo[34] << endl;
	cout << "La transaccion mas pequeno es:  " << arreglo[1] << endl;
	
	return 0;
}



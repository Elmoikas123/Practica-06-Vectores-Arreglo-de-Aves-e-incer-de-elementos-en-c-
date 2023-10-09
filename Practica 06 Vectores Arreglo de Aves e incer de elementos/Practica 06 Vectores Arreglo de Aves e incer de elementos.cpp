// Practica 06 Vectores Arreglo de Aves e incer de elementos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declara un vector de cadenas
    vector<string> aves = { "loro gris", "paloma de diamante", "Coctel" };
    cout << "Los valores del vector antes de insertar:\n";

    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i)
    {
        cout << aves[i] << " ";
    }
    cout << "\n";

    // Agrega 3 valores al final del vector utilizando push_back()
    aves.push_back("Mavna");
    aves.push_back("Periquitos");
    aves.push_back("Cacatua");
    cout << "Los valores del vector despues de insertar:\n";

    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i)
    {
        cout << aves[i] << " ";
    }
    cout << "\n";
    return 0;
}

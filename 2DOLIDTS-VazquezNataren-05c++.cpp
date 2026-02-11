#include <iostream>
#include <vector>

using namespace std;

void pop_arreglo_aves(vector<string> aves) {
    aves.pop_back();
    cout << "Los valores del vector despues del pop:\n";
    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i)
    {
        cout << aves[i] << " ";
    }
    cout << "\n";
}

void arreglo_aves(vector<string> aves) {
    cout << "Los valores del vector antes de insertar:\n";
    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i)
    {
        cout << aves[i] << " ";
    }
    cout << "\n";
}

vector<string> push_arreglo_aves(vector<string> aves) {
    // Agrega tres valores al final del vector utilizando push_back()
    aves.push_back("Mayna");
    aves.push_back("Periquitos");
    aves.push_back("Cacatua");
    cout << "Los valores del vector despues de insertar:\n";
    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i)
    {
        cout << aves[i] << " ";
    }
    cout << "\n";
    return aves;
}

int main()
{
    // Declara un vector de cadenas
    vector<string> aves = { "Loro gris", "Paloma de diamante", "Coctel" };
    vector<string> nuevo_aves = {};
    arreglo_aves(aves);
    nuevo_aves = push_arreglo_aves(aves);
    pop_arreglo_aves(nuevo_aves);
    return 0;
}
/*#include <iostream>*/
#include <iostream>

using namespace std;

#define NOTAS 3

int main()
{
    float nota;
    float suma = 0;

    cout << "Va a ingresar las notas de sus examenes\n";

    for(int i = 1; i <= NOTAS; i++)
    {
        cout << "ingrese la nota del parcial numero " << i << ": ";
        cin >> nota;

        suma += nota;
    }

    cout << "\nSu promedio es de: "<< suma/NOTAS<<endl;

    return 0;
}


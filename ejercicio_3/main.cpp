#include <iostream>
#include <vector>

using namespace std;

// Muy facil
// 1. define una funcion que imprima 'Hello, World!'
// 2. define una funcion que defina si un numero es o no es primo

// intermedio
// 1. define una funcion que imprima un vector
// 2. define una funcion que invierta un vector
// 3. define una funcion que encuentre un numero en un vector de tipo float
// 4. define una funcion que genere un vector de n elementos de numeros aleatorios

// Avanzado
// 1. define una funcion que imprima una matriz
// 2. define una funcion que genere la siguiente matriz:
/*
    | 1  2  3 |
    | 8  9  4 |   (sin usar recursividad)
    | 7  6  5 |
*/

// Help
//  <tipo de dato que retorna> nombre_de_la_funcion( <tipo de dato> nombre, ... )
// {
//      Code
// }

/*

___________________________primer punto__________________________
void hola_wapo()
{
    cout << "Hello, World! \n";
}
_________________________________________________________________

*/

/*

_________________________Segundo Punto___________________________
bool es_primo(int number){
    int i = 1, divisores = 0;
    while (i <= number && divisores < 2)
    {
        if(number % i == 0)
            divisores++;

        if(i == number && divisores == 2)
            return true;
        
        i++;
    }

    return false;
} 
_________________________________________________________________

*/

// 1. define una funcion que imprima un vector

void show_vec(int vector[], int tam)
{
    cout << "[  ";
    for (int i = 0; i < tam; i++)
    {
        cout << vector[i] << "  ";
    }
    cout << "]\n";
}

int mult_vec(int vector[], int tam)
{
    int multiplicacion = 1;

    for (int i = 0; i < tam; i++)
        multiplicacion *= vector[i];

    return multiplicacion;
}

int main(int argc, char const *argv[])
{
    int vec[5] = {31, 42, 25, 62, 45};

    cout << "la multiplicacion es: " << mult_vec(vec, 5) << endl;

    return 0;
}

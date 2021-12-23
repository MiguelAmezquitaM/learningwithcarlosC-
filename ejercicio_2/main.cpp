#include <iostream>

using namespace std;

struct punto
{
    float x;
    float y;
};

void mostrar_vector(int[], int);

int main(int argc, char const *argv[])
{
    int vec[4] = {1, 2, 3, 4};

    mostrar_vector(vec, 4);

    cout << vec << " -> " << *vec << endl;
    cout << vec + 1 << " -> " << *(vec + 1) << endl;
    cout << vec + 2 << " -> " << *(vec + 2) << endl;
    cout << vec + 3 << " -> " << *(vec + 3) << endl;

    return 0;
}

void mostrar_vector(int vector[], int tam)
{
    cout << "[ " << vector[0];

    for (int i = 1; i < tam; i++)
        cout << ", " << vector[i];

    cout << " ]\n";
}



float suma(float a, float b)
{
    return a+ b;
}
#include <iostream>
#include <math.h>

using namespace std;

struct point
{
    float x, y;
};

void show_point(point, string);
double distance(point*, point*);

int main()
{
    point A;
    point B;

    A.x = 24;
    A.y = 11.5;

    B.x = 7.2;
    B.y = -5.2;

    show_point(A, "A");
    show_point(B, "B");

    cout << "La distancia entre A y B es: " << distance(&A, &B) << "\n";
    cout << "La distancia entre B y A es: " << distance(&B, &A) << "\n";

    return 0;
}

void show_point(point puntito, string name)
{
    cout << "Punto " << name << ": (" << puntito.x << ", " << puntito.y << ")\n";
}

double distance(point* a, point* b)
{
    return pow(pow(b->y - a->y, 2) + pow(b->x - a->x, 2), 0.5);
}

#include <stdio.h>
#include <string>

using namespace std;

/* 
    Realiza un programa que ordene alfabeticamente una lista de palabras usando el metodo de insercion
    Y escriba una funcion que busque una palabra usando la busqueda binaria
    usted mismo debe crear esa lista
*/

// list
string list[] = {
    "hello",
    "world",
    "miguel",
    "carlitos",
    "maru",
    "abanico",
    "lapicero",
    "monitor",
    "ensamble"};

// functions
void order_list(string[], const int);
void exchange(string *, string *);
void print_list(string[], const int);

int main(int argc, char const *argv[])
{
    int tam = sizeof list / sizeof list[0];

    order_list(list, tam);
    print_list(list, tam);

    return 0;
}

// def functions ----------------------------------------------------

void print_list(string list[], const int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%s\n", list[i].c_str());
}

void order_list(string list[], const int tam)
{
    int i = -1, j = 0;

    while (++i < tam - 1 && ++j < tam)
        while (j > 0 && list[i] > list[j])
            exchange(&list[i--], &list[j--]);
}

void exchange(string *a, string *b)
{
    string aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

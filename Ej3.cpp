#include <iostream>
#include "Lista/Lista.h"

using namespace std;

void intercambio(Lista<int>& lista1, Lista<int>& lista2) {
    Lista<int> aux1, aux2;

    for (int i = 0; i < lista1.getTamanio(); i++) {
        aux1.insertarUltimo(lista1.getDato(i));
    }

    for (int i = 0; i < lista2.getTamanio(); i++) {
        aux2.insertarUltimo(lista2.getDato(i));
    }

    lista1.vaciar();
    lista2.vaciar();

    for (int i = 0; i < aux2.getTamanio(); i++) {
        lista1.insertarUltimo(aux2.getDato(i));
    }

    for (int i = 0; i < aux1.getTamanio(); i++) {
        lista2.insertarUltimo(aux1.getDato(i));
    }
}

int main() {
    cout << "Ejercicio N° 3" << endl;

    Lista<int> vec;
    Lista<int> vec2;
    int num, n;

    cout << "Ingrese el tamaño de las listas: ";
    cin >> n;

    cout << "Ingrese los valores del vector 1: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.insertarUltimo(num);
    }

    cout << "Ingrese los valores del vector 2: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec2.insertarUltimo(num);
    }

    intercambio(vec, vec2);

    cout << "Vector 1 después del intercambio: ";
    vec.print();

    cout << "Vector 2 después del intercambio: ";
    vec2.print();

    return 0;
}

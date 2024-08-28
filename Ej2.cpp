#include <iostream>
#include "Lista/Lista.h"
using namespace std;
void print3(Lista <int> &vec, int n, int el){
    for (int i = 0; i < n; i++){
        if (vec.getDato(i) == el){
            vec.remover(i); 
        }
    }
}

int main() {
    Lista <int> vec; 
    int num, n, el; 
    cout << "Ejercicio N° 1" << endl;
    cout << "Ingrese el tamaño de la lista: "; 
    cin >> n; 
    cout << "Ingrese los valores del vector: " << endl ; 
    for (int i = 0; i < n; i++){
        cin >> num; 
        vec.insertarUltimo(num); 
    }
    cout << "Ingrese numero a eliminar: ";
    cin >> el; 
    cout << "Lista despues de eliminar: " << endl; 
    print3(vec, n, el); 
    vec.print(); 
    return 0;
}

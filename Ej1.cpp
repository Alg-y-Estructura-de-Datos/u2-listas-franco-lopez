#include <iostream>
#include "Lista/Lista.h"
using namespace std;
void print(Lista <int> &vec, int p, int n){
    for (int i = p; i < n; i++){
        cout << vec.getDato(i) << "->"; 
    }
}

int main() {
    Lista <int> vec; 
    int num, n, p; 
    cout << "Ejercicio N° 1" << endl;
    cout << "Ingrese el tamaño de la lista: "; 
    cin >> n; 
    cout << "Ingrese los valores del vector: " << endl ; 
    for (int i = 0; i < n; i++){
        cin >> num; 
        vec.insertarUltimo(num); 
    }
    cout << "Ingrese una posicion: "; 
    cin >> p; 
    print(vec, p, n); 
    return 0;
}

#include <iostream>
using namespace std;
//este es de U6_2 pero es esta arreglado
// Unificar los arreglos
void array_unificado(int l1[], int l2[], int t1, int t2, int lista_unificada[]) {
    for (int j = 0; j < t1; j++) {
        lista_unificada[j] = l1[j];
    }

    for (int h = 0; h < t2; h++) {
        lista_unificada[t1 + h] = l2[h];
    }
}

// Ordenamiento de burbuja
void bubble_sort(int l_u[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int y = 0; y < tam - i - 1; y++) {
            if (l_u[y] > l_u[y + 1]) {
                int temp = l_u[y];
                l_u[y] = l_u[y + 1];
                l_u[y + 1] = temp;
            }
        }
    }
}

int main() {
    int tamanio1, tamanio2, t_t;
    cout << "Ingrese el numero de elementos del primer arreglo: ";
    cin >> tamanio1;
    int lista1[tamanio1];

    cout << "Ingrese los elementos del primer arreglo: ";
    for (int i = 0; i < tamanio1; i++) {
        cin >> lista1[i];
    }

    cout << "Ingrese el numero de elementos del segundo arreglo: ";
    cin >> tamanio2;
    int lista2[tamanio2];

    cout << "Ingrese los elementos del segundo arreglo: ";
    for (int k = 0; k < tamanio2; k++) {
        cin >> lista2[k];
    }

    t_t = tamanio1 + tamanio2;
    int lista_unificada[t_t];

    array_unificado(lista1, lista2, tamanio1, tamanio2, lista_unificada);
    bubble_sort(lista_unificada, t_t);

    cout << "Arreglo unificado y ordenado: ";
    for (int i = 0; i < t_t; i++) {
        cout << lista_unificada[i] << " ";
    }
    cout << endl;

    return 0;
    
}
#include <iostream>
using namespace std;

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



int main(){

    int tamanio=6;
    int lista[tamanio],lista_producto[tamanio];

    cout<<"ingresa los 6 elementos de la lista"<<endl;
    for (int i=0; i<tamanio;i++){

        cin>>lista[i];


    }

    for(int i=0;i<tamanio;i++){

        lista_producto[i]=lista[i]*2;

    }
    
    bubble_sort(lista_producto, tamanio);


    cout<<"lista producto ordenada"<<endl;
    for(int nui : lista_producto){
        cout<<nui<<endl;
    }






}
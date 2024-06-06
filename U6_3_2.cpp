#include <iostream>
using namespace std;
void copiar_una_matriz_a_otra(int matriz_nueva[3][3],int matriz[3][3]){
    for (int fila=0;fila<3;fila++){
        for(int columna=0;columna<3;columna++){
            matriz_nueva[fila][columna]= matriz[fila][columna];
        }
    }

}

int main(){
    int matriz[3][3],n,fila,columna, matriz_nueva[3][3];
    for(int i=0;i<9;i++){
        cout<<"Ingrese el elemento de la matriz: "<<endl;
        cin>>n;
        cout<<"ingrese numero de fila y de columna donde lo quiere ingresar: "<<endl;
        cin>>fila;
        cin>>columna;
        matriz[fila][columna]=n;
    }
    for (int fila=0;fila<3;fila++){
        for(int columna=0;columna<3;columna++){
            cout<<matriz[fila][columna]<<" ";
        }
        cout<<endl;


    }
    copiar_una_matriz_a_otra(matriz_nueva,matriz);

    for (int fila=0;fila<3;fila++){
        for(int columna=0;columna<3;columna++){
            cout<<matriz_nueva[fila][columna]<<" ";
        }
        cout<<endl;


    }
    }
/*
int k=0;
    if(k!=2){
    for( int i=0;i<=2;i++){
        matriz_nueva[k][i]=matriz[k][i];
        k++;
    }
    }
    cout<<matriz_nueva<<endl;

*/
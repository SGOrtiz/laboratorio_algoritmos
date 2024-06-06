#include <iostream>
using namespace std;

int main(){
    int c_filas;
    int c_columnas;
    cout<<"ingresa filas y columnas"<<endl;
    cin>>c_filas;
    cin>>c_columnas;

    int matriz [c_filas][c_columnas], traspuesta[c_filas][c_columnas];

    cout<<"ingresa valores"<<endl;
    for (int fila=0;fila<c_filas;fila++){
        for(int columna=0;columna<c_columnas;columna++){
            cout<<"ingresa el valor en fila: "<<fila<<" ingresar el valor en columnas: "<<columna<<endl;
            cin>>matriz[fila][columna];
        }
    }
    cout<<"muy bien"<<endl;
    for (int fila=0;fila<c_filas;fila++){
        for(int columna=0;columna<c_columnas;columna++){
            cout<<matriz[fila][columna]<<" ";
        }
        cout<<endl;
    }
    cout<<"joya rey"<<endl;
    for (int fila=0;fila<c_filas;fila++){
        for(int columna=0;columna<c_columnas;columna++){
            cout<<matriz[columna][fila]<<" ";
        }
        cout<<endl;
    }

}
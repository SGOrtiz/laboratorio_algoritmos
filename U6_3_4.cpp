#include <iostream>
using namespace std;

void esigual(int matriz[3][3], int matriz_traspuesta[3][3]){
    int esidentica=0;
    for (int fila=0;fila<3;fila++){
        for(int columna=0;columna<3;columna++){
            if(matriz[fila][columna]==matriz_traspuesta[fila][columna]){
                esidentica++;
            }
            }
    }
    if(esidentica=3*3){
        cout<<"es igual "<<endl;
    }        
            
}
void cantidad(int filas, int columnas){
    if( filas = columnas){
        cout<<"filas igual que columnas";
    }
}

int main(){
    int c_filas;
    int c_columnas;
    cout<<"ingresa filas y columnas"<<endl;
    cin>>c_filas;
    cin>>c_columnas;
    int matriz [c_filas][c_columnas], matriz_traspuesta[c_filas][c_columnas];

    cout<<"ingresa valores"<<endl;
    for (int fila=0;fila<c_filas;fila++){
        for(int columna=0;columna<c_columnas;columna++){
            cout<<"ingresa el valor en fila: "<<fila<<" ingresar el valor en columnas: "<<columna<<endl;
            cin>>matriz[fila][columna];
        }
    }



    for (int fila=0;fila<c_filas;fila++){
        for(int columna=0;columna<c_columnas;columna++){
            matriz_traspuesta [fila][columna]= matriz[columna][fila];
        }
        cout<<endl;
    }



    esigual(matriz,matriz_traspuesta);
    cantidad(c_filas,c_columnas);
}
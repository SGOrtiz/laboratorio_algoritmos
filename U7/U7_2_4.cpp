

/*Realizar un sistema para la reserva de butacas en un cine. El cine
tiene varias salas, y cada sala tiene un número de asientos
organizados en filas y columnas (se deberá usar una matriz para
representar los asientos del cine). Las funcionalidades del sistema
deberán permitir reservar asientos libres, mostrar todos los
asientos (Con su estado: Ocupados o libres), cancelar una reserva
de asiento y calcular el total de entradas vendidas.*/
#include <iostream>
#include <vector>
using namespace std;
struct sala{
    int vendidas=0;
    char grafo[9][7];
    int numero;


};
void mostrar_salas(vector <sala> cine){

    for (int i = 0; i < cine.size() ; i++)
    {
        cout<<"la sala: "<<i<<endl;
        for (int fila=0;fila<9;fila++){
            for(int columna=0;columna<7;columna++){
                cout<<cine[i].grafo[fila][columna];
            }
            cout<<endl;
        }
    }

}
void reservar(vector <sala> &cine, int fi, int co, int sala){
    
    if(cine[sala].grafo[fi][co]=='L'){
        cine[sala].grafo[fi][co]='O';
        cine[sala].vendidas++;
    }    
    else
        cout<<"esta ocupada esa rey, elegi otra";

}
void eliminar(vector <sala> &cine, int fi, int co, int sala){
    if(cine[sala].grafo[fi][co]=='O'){
        cine[sala].grafo[fi][co]='L';
        cine[sala].vendidas--;
    }    
    else
        cout<<"no habia reserva en esa maquinaa";

}

int main(){
    vector <sala> cine;
    
    for (int i = 0; i < 6 ; i++){
        sala aux;
        aux.numero=i;
        for (int fila=0;fila<9;fila++){
            for(int columna=0;columna<7;columna++){
                aux.grafo[fila][columna]='L';
            }
        }
        cine.push_back(aux);
    }
    int opcion;
    do {
        cout << "Menu:"<<endl;
        cout << "1. Mostrar asientos"<<endl;
        cout << "2. Reservar asiento"<<endl;
        cout << "3. Cancelar reserva"<<endl;
        cout << "4. Total de entradas vendidas"<<endl;
        cout << "0. Salir"<<endl;
        cout << "Seleccione una opción: "<<endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            mostrar_salas(cine);
            break;
        case 2:
            int fi, co, sala;
            cout<<"ingresa la sala en la que queres reservar los asientos"<<endl;
            cin>>sala;
            cout<<"que haceinto queres reservar hermanito ingresa la fila y la columna "<<endl;
            cin>>fi>>co;
            reservar(cine, fi, co, sala);
            break;
        case 3:
            
            cout<<"ingresa la sala en la que queres borrar la reservar los asientos"<<endl;
            cin>>sala;
            cout<<"que haceinto queres borrar la reserva hermanito ingresa la fila y la columna "<<endl;
            cin>>fi>>co;
            eliminar(cine, fi, co, sala);
            break;    
        
        case 4:
            cout<<"ingresa la sala en la que queres ver las vendidas"<<endl;
            cin>>sala;
            cout<<"se vendieron: "<<cine[sala].vendidas<<endl;
            break;
        }    

    } while (opcion != 0);

}
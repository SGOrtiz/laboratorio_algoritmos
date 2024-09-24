#include <iostream>
#include <vector>
using namespace std;
/*
Realizar un sistema para hacer reservas de habitación en un hotel.
Cada reserva va a tener los siguientes datos: Nombre del huésped,
fecha de llegada, número de noches y número habitación. Se
deberá poder agregar nuevas reservas, cancelarlas con el nombre
del huésped, mostrar todas las reservas y mostrar disponibilidad
de habitaciones (sabiendo que hay un total de 20). 
 */
/* 20 habitaciones, poder cancelar reservas, y agregar reservas*/


struct reserva{
    string n_huesped;
    int f_llegada;
    int n_noches; 
    int n_habitacion;
};
void ingresar_reserva(vector <reserva> &registro, bool disponibilidad[]){
    
    reserva reservita;
    cout<<"ingresa el nombre de el huesped "<<endl;
    cin>>reservita.n_huesped;
    cout<<"ingresa la fecha de llegada "<<endl;
    cin>>reservita.f_llegada;
    cout<<"ingresa el numero de noches "<<endl;
    cin>>reservita.n_noches;
    cout<<"ingresa el numero de habitacion "<<endl;
    cin>>reservita.n_habitacion;
    registro.push_back(reservita);
    disponibilidad[reservita.n_habitacion]=false;
}

void ver_reservas(vector <reserva> registro){
    for(int i=0;i<registro.size();i++){    
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"el nombre del huesped es: "<<registro[i].n_huesped<<endl;
        cout<<"su fecha de llegada es:"<<registro[i].f_llegada<<endl;
        cout<<"su cantidad de noches es: "<<registro[i].n_noches<<endl;
        cout<<"numero de habitacion: "<<registro[i].n_habitacion<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
    }
}
void ver_disponibilidad(bool disponibilidad[]){
    for(int i = 0; i < 20; i++)
    {
        if(disponibilidad[i]==0 ){
            cout<<"la habitacion: "<<i<<" esta ocupada"<<endl;
        }
        else{
            cout<<"la habitacion: "<<i<<" esta libre"<<endl;
        } 
    }
    
}
void borrar(bool disponibilidad[],int tamanio){
    
    int aux;
    cout<<"ingresa la habitacion de la que queres borrar la reserva"<<endl;
    cin>>aux;
    disponibilidad[aux]=true;
    
}

int main(){
    const int tamanio=20;
    bool disponibilidad[tamanio];
    vector <reserva> registro;
    bool cuestion=1;
    string pregun;
    
    for (int i =0;i<20;i++)
    {
        disponibilidad[i]=true;
    }
    
    while(cuestion=1){
        cout<<"desas ingresar una reserva"<<endl;
        cin>>pregun;
        if(pregun=="si" || pregun=="chi"){
            ingresar_reserva(registro, disponibilidad);

        }
        pregun="sxjkwbxwd";
        cout<<"queres ver las habitaciones disponibles?"<<endl;
        cin>>pregun;
        if(pregun=="si" || pregun=="chi"){
            ver_disponibilidad(disponibilidad);
        }
        pregun="ddekdhed";
        cout<<"queres borrar una reserva? "<<endl;
        cin>>pregun;
        if(pregun=="si" || pregun=="chi"){
            borrar(disponibilidad, tamanio);
        }
    }




}
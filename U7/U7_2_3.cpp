#include <iostream>
#include <vector>
using namespace std;

struct fecha{
    string dia,mes,anio;
};
struct paquete{
    int codigo_rastreo;
    string direccion_de_envio,estado_actual;
    fecha fecha_estimada;

};
void ingreso_paquete(paquete paquete_nuevo,vector <paquete> paquetes){
    bool condicion=true;
    while(condicion){
        cout<<"ingrese el nuevo paquete: "<<endl<<"para salir ingrese codigo -1"<<endl
            <<" codigo: ";cin>>paquete_nuevo.codigo_rastreo;
            if(paquete_nuevo.codigo_rastreo==-1){
                break;
            }
            cout<<" direccion de envio: ";cin>>paquete_nuevo.direccion_de_envio;
            cout<<" estado: ";cin>>paquete_nuevo.estado_actual;
            cout<<" fecha estimada: "<<endl<<"dia: ";cin>>paquete_nuevo.fecha_estimada.dia;cout<<endl<<" mes: ";cin>>paquete_nuevo.fecha_estimada.mes;cout<<endl<<" año: ";cin>>paquete_nuevo.fecha_estimada.anio;
    }
    paquetes.push_back(paquete_nuevo);
}
void paquetes_en_camino(vector <paquete> paquetes){
    vector <paquete> paquetes_con_estado_encamino;
    for(int i=0;i<paquetes.size();i++){
        if(paquetes[i].estado_actual=="en camino"){
            paquetes_con_estado_encamino.push_back(paquetes[i]);
        }
    }
    for(int i=0;i<paquetes_con_estado_encamino.size();i++){
        cout<<paquetes_con_estado_encamino[i].codigo_rastreo<<endl;
    }
}
void mostrar_estado(vector <paquete> paquetes){
    int codigo;
    bool condicion=true;
    while(condicion){
        cout<<"ingrese el codigo de paquete que quiere ver el estado"<<endl<<"para salir ingrese -1"<<endl;
        cin>>codigo;
        if(codigo==-1){
            condicion=false;
            continue;
        }
        for(int i=0;i<paquetes.size();i++){
            if(codigo==paquetes[i].codigo_rastreo){
                cout<<paquetes[i].estado_actual;
            }
        } 
    }       
}
void actualizar_estado(vector <paquete> paquetes){
    int codigo;
    string nuevo_estado;
    bool condicion=true;
    while(condicion){
        cout<<"ingrese el codigo de paquete que quiere actualizar el estado"<<endl<<"para salir ingrese -1"<<endl;
        cin>>codigo;
        if(codigo==-1){
            condicion=false;
            continue;
        }
        cout<<"ingrese el nuevo estado (en preparacion, en camino, entregado): "<<endl;
        cin>>nuevo_estado;
        for(int i=0;i<paquetes.size();i++){
            if(codigo==paquetes[i].codigo_rastreo){
                paquetes[i].estado_actual=nuevo_estado;
            }
        }        
    }
}
int main(){
    vector <paquete> paquetes;
    paquete paquete_nuevo;
    int codigo=0;
    cout<<"ingrese a la funcion que quiere acceder: "<<endl
        <<"1.ingresar paquete"<<endl
        <<"2.mostrar los paquetes en camino"<<endl
        <<"3.mostrar el estado del paquete"<<endl
        <<"4.actualizar el estado de un paquete"<<endl
        <<"5.salir"<<endl;
    cin>>codigo;
    switch (codigo)
    {
    case 1:
        ingreso_paquete(paquete_nuevo,paquetes);
        break;
    case 2:
        paquetes_en_camino(paquetes);
        break;
    case 3:
        mostrar_estado(paquetes);
        break;
    case 4:
        actualizar_estado(paquetes);
        break;
    default:
        break;
    }
}    
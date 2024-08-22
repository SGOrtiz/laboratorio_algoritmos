#include <iostream>
#include <vector>
using namespace std;

//funcion para ver las calificaciones
void ver_calificaciones(vector <int> notas,string asignatura){
    cout<<asignatura<<endl;
    for(int i=0;i<notas.size();i++){
        cout<<"prueba"<<i+1<<": "<<notas[i]<<endl;
    }
}
void ver_promedios(vector <int> materia,float &promiedo,float &sumitax, string asignatura, float &each){
    int largo_vector= materia.size();
    
    promiedo=0;
    sumitax=0;
    for (int i=0; i<largo_vector;i++)
        {
        sumitax+=materia[i];
        }
    promiedo=sumitax/largo_vector;
    cout<<"el promedio es: "<<promiedo<<endl;
    each=promiedo;    

}

//algoritmo de ordenamiento
void ordenar_promiedos(vector <float> cali)
{
    for (int i = 1; i < cali.size(); ++i) {
        float key = cali[i];
        int j = i - 1;
        while (j >= 0 && cali[j] > key) {
            cali[j + 1] = cali[j];
            j = j - 1;
        }
        cali[j + 1] = key;
    }
    for(int i=0;i<cali.size();i++){
        cout<<cali[i]<<endl;
    }
}


int main(){
    //variables
    int numero,calificacion,numero_de_calificaciones;
    bool condicion,condiciont;
    string materia;
    char letra_soa;
    float promiedo, sumitax, promedio_labo=0, promedio_mate=0, promedio_base=0;
    vector <int> calificaciones;
    vector <int> matematica;
    vector <int> labo;
    vector <int> base_de_datos;
    vector <float> promiedos;
    //menu

    while (condiciont)
    {
        
        cout<<"ingrese un numero para acceder a una de las funciones del menu"<<endl;
        cout<<"1.ingresar calificaciones"<<endl;
        cout<<"2.Mostrar promiedos"<<endl;
        cout<<"3.ordenar promiedos"<<endl;
        cout<<"4.buscar un promiedo"<<endl;
        cout<<"5.salir"<<endl;

        cin>>numero;

        //switch
        switch(numero){
            case 1:
                //ingresar las calificaciones
                
                cout<<"elija la materia que desea ingresar: "<<endl;
                cin>>materia;
                if (materia != "matematica" && materia != "labo" && materia != "base_de_datos")
                {
                    condicion=false;
                    cout<<"esa materia no existe"<<endl;
                }
                else{
                    condicion=true;
                }
                
                while(condicion){
                    cout<<"ingrese calificaciones"<<endl;
                    cin>>calificacion;
                    calificaciones.push_back(calificacion);
                    cout<<"si desea dejar de ingresar calificaciones pulse la tecla s"<<endl;
                    cout<<"si desea continuar ingresando calificaciones pulse la tecla a"<<endl;
                    cin>>letra_soa;
                    if(letra_soa=='s'){
                        if(materia=="matematica"){
                            for(int i=0;i<calificaciones.size();i++){
                                matematica.push_back(calificaciones[i]);
                            }
                            ver_calificaciones(calificaciones,materia);
                        }
                        else if(materia=="labo"){
                            for(int i=0;i<calificaciones.size();i++){
                                labo.push_back(calificaciones[i]);
                            }
                            ver_calificaciones(calificaciones,materia);
                        }
                        else if(materia=="base_de_datos"){
                            for(int i=0;i<calificaciones.size();i++){
                                base_de_datos.push_back(calificaciones[i]);
                            }
                            ver_calificaciones(calificaciones,materia);
                        }
                        
                        for(int i=0;!calificaciones.empty();i++){
                            calificaciones.pop_back();
                        }
                    
                        condicion=false;                
                    }
                    if(letra_soa=='a'){
                        condicion=true;
                    }
                    if(letra_soa!='a'&&letra_soa!='s'){
                        condiciont=false;
                    }
                    
                }
                //ver_calificaciones(calificaciones,materia);
                break;
            //mostrar los promedios de la materia que se desee    
            case 2:
                cout<<"ingresar de que materia quere ver el promedio"<<endl;
                cin>>materia;
                if(materia=="matematica"){
                    
                    
                    ver_promedios(matematica,promiedo, sumitax, materia, promedio_mate);
                    promiedos.push_back(promedio_mate);
                }
                else if(materia=="labo"){
                    
                    
                    ver_promedios(labo,promiedo, sumitax, materia, promedio_labo);
                    promiedos.push_back(promedio_labo);
                }
                else if(materia=="base_de_datos"){
                    ver_promedios(base_de_datos,promiedo, sumitax, materia, promedio_base);
                    promiedos.push_back(promedio_base);
                }
                else{
                    cout<<"no existe esa materia gt"<<endl;
                    
                }
            
                break;
            case 3:
            //ordenar los promedios ingresados hasta el momento
                cout<<"promedios ordenados mediante insertion sort"<<endl;
                ordenar_promiedos(promiedos);
                break;
            case 4:
            
                break;
            case 5:
                condiciont=false;
                break;
            
            default:
                condiciont=false;
                break;

        }
    }
}

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

//algoritmo de ordenamiento
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int main(){
    //variables
    int numero,calificacion,numero_de_calificaciones;
    bool condicion=true;
    string materia;
    char letra_soa;
    float promiedo_mate, promedio_labo, promedio_base, sumitax;
    vector <int> calificaciones;
    vector <int> matematica;
    vector <int> labo;
    vector <int> base_de_datos;
    //menu

    while (true)
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
                        }
                        else if(materia=="labo"){
                            for(int i=0;i<calificaciones.size();i++){
                                labo.push_back(calificaciones[i]);
                            }
                        }
                        else if(materia==" base de datos"){
                            for(int i=0;i<calificaciones.size();i++){
                                base_de_datos.push_back(calificaciones[i]);
                            }
                        }                
                        condicion=false;
                    }
                    if(letra_soa=='a'){
                        condicion=true;
                    }
                }
                ver_calificaciones(calificaciones,materia);
                break;
            //mostrar los promedios de la materia que se desee    
            case 2:
                cout<<"ingresar de que materia quere ver el promedio"<<endl;
                cin>>materia;
                if(materia=="matematica"){
                    int largo_vector= matematica.size();
                    promiedo_mate=0;
                    sumitax=0;
                    for (int i=0; i<largo_vector;i++)
                    {
                    sumitax+=matematica[i];
                    }
                    promiedo_mate=sumitax/largo_vector;
                    cout<<"el promedio de matematica es: "<<promiedo_mate<<endl;
                }
                if(materia=="labo"){
                    int largo_vector= labo.size();
                    promedio_labo=0;
                    sumitax=0;
                    for (int i=0; i<largo_vector;i++)
                    {
                    sumitax+=labo[i];
                    }
                    promedio_labo=sumitax/largo_vector;
                    cout<<"el promedio de labo es: "<<promedio_labo<<endl;
                }
                if(materia=="base_de_datos"){
                    int largo_vector= base_de_datos.size();
                    promedio_base=0;
                    sumitax=0;
                    for (int i=0; i<largo_vector;i++)
                    {
                    sumitax+=base_de_datos[i];
                    }
                    promedio_base=sumitax/largo_vector;
                    cout<<"el promedio de base de datos es: "<<promedio_base<<endl;
                }
            
                break;
            case 3:
                cout<<"seleccione la materia que desea seleccionar el promedio";
                cin>>materia;

                break;
            case 4:

                break;
            case 5:

                break;    
        }
    }
}

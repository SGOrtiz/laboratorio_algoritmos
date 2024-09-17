#include <iostream>
#include <vector>
using namespace std;

/*• Realizar el sistema de promedios de calificaciones con 
estructuras. Se deberá cargar un vector de Estudiantes (Se le tiene 
que permitir cargar su nombre, su apellido, sus calificaciones, la 
nota mas alta, la mas baja y su promedio) y mostrar por pantalla 
todos sus datos y se quiere saber quien fue el mejor estudiante a 
través de los promedios. */
struct Estudiante{
    string nombre,apellido;
    vector <int> calificaciones;
    int nota_mas_alta,nota_mas_baja;
    float promedio;
};

void ingresar(Estudiante &estudiante){
    cout<<"ingresar nombre del estudiante: "<<endl;
    cin>>estudiante.nombre;
    cout<<"ingresar apellido del estudiante: "<<endl;
    cin>>estudiante.apellido;
    int nota=0;
    while(nota>=0){
        cout<<"ingrese la nota del estudiante: "<<endl;
        cin>>nota;
        if(nota>=0){
            estudiante.calificaciones.push_back(nota);
        }
    }
    for(int i=0;i<estudiante.calificaciones.size();i++){
        cout<<estudiante.calificaciones[i]<<endl;
    }
}
float promiedo(Estudiante estudiante){
    float suma=0;
    float promedio;
    for(int i=0;i<estudiante.calificaciones.size();i++){
        suma+=estudiante.calificaciones[i];
    }
    promedio=suma/estudiante.calificaciones.size();
    return promedio;
}
int nota_mas_baja(Estudiante estudiante){
    int min=estudiante.calificaciones[0];
    for(int i=1;i<estudiante.calificaciones.size();i++){
        if(estudiante.calificaciones[i]<min){
            min=estudiante.calificaciones[i];
        }
    }
    return min;
}
int nota_mas_alta(Estudiante estudiante){
    int max=estudiante.calificaciones[0];
    for(int i=1;i<estudiante.calificaciones.size();i++){
        if(estudiante.calificaciones[i]>max){
            max=estudiante.calificaciones[i];
        }
    }
    return max;
}


int main(){
    Estudiante Estudiante1;
    Estudiante Estudiante2;
    Estudiante Estudiante3;
    int numero;
    cout<<"ingrese los datos del estudiante: "<<endl;
    cin>>numero;
    if(numero==1){
        ingresar(Estudiante1);
        cout<<"El promedio del estudiante es: "<<promiedo(Estudiante1)<<endl;
        cout<<"La nota más baja del estudiante es: "<<nota_mas_baja(Estudiante1)<<endl;
        cout<<"La nota más alta del estudiante es: "<<nota_mas_alta(Estudiante1)<<endl;
    }
    if(numero==2){
        ingresar(Estudiante2);
        cout<<"El promedio del estudiante es: "<<promiedo(Estudiante2)<<endl;
        cout<<"La nota más baja del estudiante es: "<<nota_mas_baja(Estudiante2)<<endl;
        cout<<"La nota más alta del estudiante es: "<<nota_mas_alta(Estudiante2)<<endl;
    }
    if(numero==3){
        ingresar(Estudiante3);
        cout<<"El promedio del estudiante es: "<<promiedo(Estudiante3)<<endl;
        cout<<"La nota más baja del estudiante es: "<<nota_mas_baja(Estudiante3)<<endl;
        cout<<"La nota más alta del estudiante es: "<<nota_mas_alta(Estudiante3)<<endl;
    }
}
/*
Realizar un programa donde el usuario ingrese todos los libros de 
su biblioteca y posteriormente se deberá imprimir por pantalla, la 
cantidad de libros que posee y sus datos.
*/
#include<iostream>
#include<vector>
using namespace std; 


struct libros{

    string nombre;
    string autor;
    int largo;
    string f_lanzamiento;




};
void ingreso(vector <libros> &coleccion, int i){
    libros libro;
    cout<<"ingresa el nombre del libro ñato"<<endl;
    cin>>libro.nombre;
    cout<<"ingresa el autor "<<endl;
    cin>>libro.autor;
    cout<<"ingresa el largo "<<endl;
    cin>>libro.largo;
    cout<<"ingresa la fecha de lanzamiento "<<endl;
    cin>>libro.f_lanzamiento;
    coleccion.push_back(libro);
}
void mostrar(vector <libros> cole){
    cout<<"tenes esta cantidad de libros en tu coleccion: "<<cole.size()<<endl;
    for (int i=0;i<cole.size();i++ ){
        cout<<"el nombre del libro es: "<<cole[i].nombre<<endl;
        cout<<"el nombre del autor es: "<<cole[i].autor<<endl; 


    }
    

}
int main(){
    vector<libros> mycoleccion;
    bool pregunta=true;
    int i=0;
    while(pregunta == true){
        cout<<"deseas ingresar un libro"<<endl;
        cin>>pregunta;
        if(pregunta==false){
            break;
        }
        ingreso(mycoleccion, i);
        
        
        i++;
    }

    mostrar(mycoleccion);
    
    

}
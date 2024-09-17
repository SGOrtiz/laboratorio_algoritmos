#include<iostream>
#include<vector>
using namespace std; 
/* Realizar un programa donde el usuario ingrese sus datos y
queremos saber si tiene mascotas, para eso se le preguntara y si
contesta la pregunta afirmativamente, el usuario deberá ingresar
los datos de todas sus mascotas, caso contrario que no ingrese
nada. Mostrar por pantalla todos los datos recolectados. */
struct mascota{
    string nombre;
    string apellido;
    string raza;
    int f_naicmiento;


};

struct humano{
    string nombre;
    string apellido;
    int edad;
    string estado_civil;
    vector <mascota> familia;

};
void ingreso_mascota(humano &persona , int k){
    mascota var;
    cout<<"ingresa el nombre de tu mascota"<<endl;
    cin>>var.nombre;
    cout<<"ingresa el apellido de la mascota"<<endl;
    cin>>var.apellido;
    cout<<"la raza"<<endl;
    cin>>var.raza;
    cout<<"ingresa la fecha de nacimiento"<<endl;
    cin>>var.f_naicmiento;
    persona.familia.push_back(var);
    
};
void ingreso_personas(vector <humano> &personas, int i, string preguntamal){
    humano persona;
    cout<<"nombre"<<endl;
    cin>>persona.nombre;
    cout<<"apellido "<<endl;
    cin>>persona.apellido;
    cout<<"ingresa edad "<<endl;
    cin>>persona.edad;
    cout<<"ingresa tuestado civil "<<endl;
    cin>>persona.estado_civil;
    while (preguntamal=="si")
        {
            int k=0;
            cout<<"deseas ingresar una mascotita"<<endl;
            cin>>preguntamal;
            if(preguntamal=="no"){
                break;
            }
            ingreso_mascota(persona, k);
            k++;
        }
        personas.push_back(persona);
}


void mostrar(vector <humano> personas, int i){
        for (int j=0;j<personas[i].familia.size();j++ ){
        cout<<"el nombre de tu mascota es: "<<personas[i].familia[j].nombre<<endl;
        cout<<"el apellido de la mascota es: "<<personas[i].familia[j].apellido<<endl;
        cout<<"la raza de la mascota es: "<<personas[i].familia[j].raza<<endl;
        cout<<"tu mascota nacio el: "<<personas[i].familia[j].f_naicmiento<<endl;    


    }
}
int main(){
    vector <humano> personas;
    string cuestion="sdasdjsd";
    string preguntamal="si";

    while (cuestion != "*")
    {
        int i=0;
        cout<<"hola amiguito si deseas ingresar tus datos ingresa si para salir del for ingresa un asterisco (*)"<<endl;
        cin>>cuestion;
        if(cuestion=="*"){
            break;
        }
        ingreso_personas(personas, i, preguntamal);
        
        
        mostrar(personas, i);
        i++;
    }
    



}
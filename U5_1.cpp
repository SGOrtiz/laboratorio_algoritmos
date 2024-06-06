#include <iostream>
using namespace std;

void calcular(float hor, float min){
    float calculo;
    float hora_salida = 725;
    calculo= hor*60 + min;
    calculo=(hora_salida-calculo)/60; 
    int h1;
    int m1;

    h1= calculo;
    m1= (calculo-h1)*60;

    cout<<"faltan: "<<h1<<" horas y "<<m1<<" mnutos"<<endl;
}



int main(){

    float hora, hora_faltante, minutos, minutos_faltante;
    cout<<"ingresa la hora papito"<<endl;
    cin>>hora;
    cout<<"ingresa los minutos papito"<<endl;
    cin>>minutos;
    calcular(hora, minutos);

}
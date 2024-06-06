#include <iostream>
using namespace std;

//Realizar un programa donde el usuario ingrese un número y a 
//través de una función recursiva se deberá devolver y mostrar 
//por pantalla, la posición correspondiente a la secuencia 
//Fibonacci. Recuerden que esta sucesión, es una serie 
//matemática infinita de números en la que cada término se 
//calcula sumando los dos términos anteriores. (Los primeros 
//términos de la secuencia son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, etc.

int numero(int pos){
    //caso base
    if(pos==0){
        pos=0;
    }
    else if(pos==1){
        pos=1;
    }
    //caso general
    else{
        pos=numero(pos-1)+numero(pos-2);
    }
    return pos;
}



int main(){
    int posicion;
    cout<<"ingrese una posición de la secuencia de Fibonacci: ";
    cin>>posicion;
    cout<<numero(posicion)<<endl;
}
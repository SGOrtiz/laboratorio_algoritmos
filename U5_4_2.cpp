#include <iostream>
using namespace std;

int potencia(int base, int exponente){

    if (exponente == 0){
        //caso base diushhhthax
        base =1;
        
    }
    
    else{
        //caso general frotonto
        base = base * potencia(base, exponente-1); 
    }
    return base;

    



}




int main(){

    int base, exponente;
    cout<<"ingresa la base y el exponente"<<endl;
    cin>>base;
    cin>>exponente;
    

    cout<<potencia(base, exponente)<<endl;



}
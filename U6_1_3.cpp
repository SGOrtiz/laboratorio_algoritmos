#include <iostream>
using namespace std;

int main(){
    int tamanio, valor, s=0;

    cout<<"ingresa el tamaño de la lista gt"<<endl;
    cin>> tamanio;

    int numeritos[tamanio];

    cout<<"ingresa los numeros de la lisata"<<endl;
    for (int i=0; i<tamanio;i++){
        cin>>valor;
        numeritos[i]=valor;
    }

    cout<<"los nums son"<<endl;
    for(int nui : numeritos){
        cout<<nui<<endl;
    }


    for(int siu=0 ; siu < tamanio ;siu++){
        if(tamanio=numeritos[siu]){
            s++;
        }
    }
    if(s>=1){
    cout<<"el tamaño aparece "<<s<<"veces en la lista"<<endl;
    }
    else{
        cout<<"no aparece gt"<<endl;
    }

    
}
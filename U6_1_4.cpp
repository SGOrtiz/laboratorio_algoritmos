#include <iostream>
using namespace std;


int main(){
    int tamanio, valor, s=0,menor=0,mayor=0;
    cout<<"ingresa el tamaño de la lista gt"<<endl;
    cin>> tamanio;
    int numeritos[tamanio];
    cout<<"ingresa los numeros de la lista"<<endl;
    for (int i=0; i<tamanio;i++){
        cin>>valor;
        numeritos[i]=valor;
}
    mayor=numeritos[0];
    menor= numeritos[0];
        for(int i=1;i<tamanio;i++){
            if(numeritos[i]>mayor){
                mayor=numeritos[i];
            }
            if(numeritos[i]<menor){
                menor=numeritos[i];
            }
        }
        cout<<"el mayor es: "<<mayor<<endl;
        cout<<"el menor es: "<<menor<<endl;
    }


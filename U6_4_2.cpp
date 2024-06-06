#include <iostream>
#include <vector>
using namespace std;

//funcion que borra los duplicados 

void borrar_duplicado( vector <int> &numeros,int largo){
    for(int i=0;i<largo;i++){
        for(int k=i+1;k<largo;k++){
            if(numeros[i]==numeros[k]){
                numeros[k]=numeros[largo];
                numeros.pop_back();
            }
            
        }
        
    }
}

//codigo principal 

int main(){
    vector <int> numeros;
    int largo,i=0,numero;
    cout<<"ingresar largo del vector"<<endl;
    cin>>largo;
    for(int i=0;i<largo;i++){
        cout<<"ingresa valor pa"<<endl;
        cin>>numero;
        numeros.push_back(numero);
    }
    borrar_duplicado(numeros,largo);
    for(int i=0;i<largo;i++){
        cout<<numeros[i]<<endl;
    }    

}
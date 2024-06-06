#include <iostream>
using namespace std;



int main(){

    const int tamanio = 5;
    int numeritos[tamanio], valor, resu=0;

    cout<<"ingresa los elementos de la lista"<<endl;
    for (int i=0 ; i<tamanio; i++){
        cin>>valor;
        numeritos[i]=valor;
    }

    cout<<"los nums son"<<endl;
    for(int nui : numeritos){

        cout<<nui<<endl;
    }
    //hacer la suma de los elementos
    
    for(int i=0; i<tamanio; i++){

        resu+=numeritos[i];

    }
    cout<<"la suma de los elementos de la lista es "<<endl;
    cout<<resu<<endl;    








}
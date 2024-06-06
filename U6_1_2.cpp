#include <iostream>
using namespace std;

int main(){
    const int tamanio= 10;
    string lista[tamanio],lista_al_reves[tamanio];
    int f=0;
    cout<<"ingrese palabra"<<endl;
    for(int i=0;i<tamanio;i++){
        cin>>lista[i];
    }
    cout<<"mostrandolalistita"<<endl;
    for (string palabra:lista){
        cout<<palabra<<endl;
    }
    for (int k=9;k>=0;k--){
        
        lista_al_reves[f]=lista[k];
        f++;


    }
    cout<<"mostrandolalistitaalreves"<<endl;
    for (string palabra_al_reves:lista_al_reves){
        cout<<palabra_al_reves<<endl;
    }
}
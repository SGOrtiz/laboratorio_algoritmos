#include <iostream>
using namespace std;

int funcion_vocales(string palabra){
    char a= 'a';
    char e= 'e';
    char i= 'i';
    char o= 'o';
    char u= 'u';
    int contador=palabra.size();
    int aux=0;
    int contador_vocales=0;
    while(contador!=aux){
        if(palabra[aux]==a || palabra[aux]==e || palabra[aux]==i || palabra[aux]==o || palabra[aux]==u){
            contador_vocales++;
            
        }
        
    
        aux++;
    }
    return contador_vocales; 
}

int main(){
    string p;
    cout<<"ingrese una palabra: "<<endl;
    cin>>p;
    cout<<funcion_vocales(p)<<endl;
}
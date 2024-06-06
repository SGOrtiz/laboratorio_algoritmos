#include <iostream>
using namespace std;

float suma(float numero1,float numero2){
    float result=numero1+numero2;
    return result;
}
float resta(float numero12,float numero22){
    float result2=numero12-numero22;
    return result2;
}
float division(float numero13, float numero23){
    float result3=numero13/numero23;
    return result3;
}
float multiplicacion(float numero14, float numero24){
    float result4=numero14*numero24;
    return result4;
}


int main(){
    float n1=0;
    float n2=0;
    string resultado = "";
    cout<<"ingresar operacion"<<endl;
    cin>>resultado;
    if(resultado=="salida"){
        cout<<"termino el programa"<<endl;
    }
    else{
        cout<<"ingrese el primer número"<<endl;
        cin>>n1;
        cout<<"ingrese el segundo número"<<endl;
        cin>>n2;

    
        if(resultado=="suma"){
            cout<<suma(n1,n2)<<endl;
        }
        else if(resultado=="resta"){
            cout<<resta(n1,n2)<<endl;
        }
        else if(resultado=="division"){
            cout<<division(n1,n2)<<endl;
        }
        else if(resultado=="multiplicacion"){
            cout<<multiplicacion(n1,n2)<<endl;
        }
        else{
            cout<<"la operacion realizada es inválida"<<endl;
        }
    }   
}                 


























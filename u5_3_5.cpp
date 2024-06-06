#include <iostream>
using namespace std;
void funcion_primo_o_no(int numero){
    float division;
    for(int i=numero-1;i>1;i--){
        if(division=numero%i==0){
            cout<<"no es primo"<<endl;
        }
        else if (i==2){
            cout<<"es primo"<<endl;
        }
        
    }
}

int main(){
    int n;
    cout<<"ingrese un numero: "<<endl;
    cin>>n;
    funcion_primo_o_no(n);
}
#include <iostream>
using namespace std;

void binary(int numi, int binarito[], int &longitud){
    int i=0;
    while(numi>0){
        
        binarito[i]= numi % 2;
        //cout<<binarito[i]<<endl;
        i++;
        numi/=2;
        
    }    
    longitud=i;
    


}
int main(){
    const int tamaño_max=32;
    int numi = 0, binarito[tamaño_max], longitud;
    cout<<"ingresa tu numerito amigo!"<<endl;
    cin>>numi;
    cout<<"el decimal es: "<<numi<<endl;
    binary(numi, binarito, longitud);
    //mostrar el binario
    for(int i= longitud-1;i>=0;i--){
        
        cout<<binarito[i]<<endl;
    }

}
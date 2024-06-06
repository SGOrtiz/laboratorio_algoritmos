#include <iostream>
using namespace std;
void bubble_sort(int l_u[],int tam){
    for (int i=0;i<tam-1;i++){
        for(int y=0;y<tam-i-1;y++){
            if(l_u[y]>l_u[y+1]){
                int temp= l_u[y];
                l_u[y]=l_u[y+1];
                l_u[y+1]= temp;

            }
        }
    }
}
void elemento_mayo(int li[],int &elemento_mayor,int tam){
    int i=tam-1;
    elemento_mayor=li[i];
}
int main(){
    int tamanio=6;
    int lista[tamanio];
    int elemento_mayor;

    cout<<"ingresa los 6 elementos de la lista"<<endl;
    for (int i=0; i<tamanio;i++){

        cin>>lista[i];
    }    

    bubble_sort(lista,tamanio);

    elemento_mayo(lista,elemento_mayor,tamanio);

    cout<<elemento_mayor<<endl;



    


    
}
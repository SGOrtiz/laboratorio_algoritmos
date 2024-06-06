#include <iostream>
using namespace std;





//unifico los array
void array_unificado( int l1[], int l2[],int t1, int t2){
    int t=t1+t2;
    int lista_unificada[t];
    for(int j=0;j<t1;j++){
        lista_unificada[j]=l1[j];
    }

    for(int h=0;h<t2;h++){
        lista_unificada[t1-1+h]=l2[t1-1];
    
    cout<<lista_unificada<<endl;
}

}





//ordeno de menor a mayor
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






int main(){
    int tamanio1,tamanio2,t_t;
    cout<<"ingrese el numero de caracteres del primer array: "<<endl;
    cin>>tamanio1;
    int lista1[tamanio1];



    cout<<"ingrese el elemento:"<<endl;
    for (int i=0;i<tamanio1;i++){
        cin>>lista1[i];
    }


    cout<<"ingrese el numero de caracteres del segundo array: "<<endl;
    cin>>tamanio2;
    int lista2[tamanio2];



    cout<<"ingrese el elemento:"<<endl;
    for (int k=0;k<tamanio2;k++){
        cin>>lista2[k];
    }


    t_t=tamanio1+tamanio2;
    int lista_unificada[t_t];
    array_unificado(lista1,lista2,tamanio1,tamanio2);
    bubble_sort(lista_unificada,t_t);
    for(int i=0;i<t_t;i++){
        cout<<lista_unificada[i]<<endl;;    
    }


}
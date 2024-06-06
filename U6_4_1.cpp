#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> numeritos;
    int largo,i=0,  num;
    cout<<"ingresar largo del vector"<<endl;
    cin>>largo;
    for(int i=0;i<largo;i++){
        cout<<"ingresa valor pa"<<endl;
        cin>>num;
        numeritos.push_back(num);
    } 
    cout<<"me gusto tu lista"<<endl;
    while (i<numeritos.size()){
        cout<<numeritos[i]<<endl;
        i++;
    }



}
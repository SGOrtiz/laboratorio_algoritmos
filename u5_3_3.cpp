#include <iostream>
using namespace std;

string gato(string pala){

    string new_word= "";
    int contador=pala.size()-1;
    for (int i=contador; i>=0; i--){
        new_word= new_word + pala[i];



    }

    return new_word;
}

int main(){

    string p;
    cout<<"ingresa una palabrra titan"<<endl;
    cin>>p;
    cout<<gato(p)<<endl;




}
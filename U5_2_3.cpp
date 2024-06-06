#include <iostream>
using namespace std;

string degui(string &p, string c){

    p= p+c;
    return p;

}



int main(){

    string palabra, carac;
    cout<<"ingresa la palabra papito"<<endl;
    cin>>palabra;
    cout<<"ingresa un caracter papito"<<endl;
    cin>>carac;
    degui(palabra, carac);
    cout<<palabra;


}
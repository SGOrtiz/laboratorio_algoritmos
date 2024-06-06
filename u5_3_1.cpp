#include <iostream>
using namespace std;

void funcion_area(float &radio){
    radio=3.14*(radio*radio);
}

int main(){
    float r;
    cout<<"ingresar radio: "<<endl;
    cin>>r;
    funcion_area(r);
    cout<<r<<endl;
}
#include <iostream>
using namespace std;
int suma(int n){
    //caso base
    if(n==0){
        n=0;

    }
    else{
        //caso general
        n+=suma(n-1);
    }
    return n;
}
int main(){
    int n1;
    cout<<"ingrese número: "<<endl;
    cin>>n1;
    cout<<suma(n1)<<endl;
}
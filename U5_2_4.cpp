#include <iostream>
#include <math.h>
using namespace std;

void pepo(int &n1,int n2){
    n1= pow (n1,n2);
    
}

int main(){
    int n1,n2;
    cout<<"primer numero"<<endl;
    cin>>n1;
    cout<<"segundo numero"<<endl;
    cin>>n2;
    pepo(n1,n2);
    cout<<n1<<endl;
}